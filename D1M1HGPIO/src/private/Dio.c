/******************************************************************************
**  Project        BAIC C11 Cluster Project
**  (c) copyright 2015
**  Company       O-film
**                All rights reserved
**  Secrecy Level STRICTLY CONFIDENTIAL
*******************************************************************************
**
**          File  : Dio.c
**          Author: jiangyuchang
**
**          Date  : 2016-01-16
**
**
******************************************************************************/
#define DIO_C

/******************************************************************************
**    INCLUDES
******************************************************************************/
#include "Dio.h"

/******************************************************************************
**    MACROS
******************************************************************************/

/******************************************************************************
**     INTERNAL   FUNCTION   PROTOTYPES
******************************************************************************/
static void Dio_handleDebounce(void);
static void Dio_sampleDigInputs(void);

/******************************************************************************
**    INTERNEL VARIABLES
******************************************************************************/
/********************RH850 Pin Dio Register Map List************************/
static const  Pin_Dio_Reg16_Map  Pin_Dio_Reg16_Map_List[] = 
{
   PIN_DIO_REG16_LIST	
};

/********************RH850 Port  Dio Register Map List************************/
static const Port_Dio_Reg16_Map  Port_Dio_Reg16_Map_List[] = 
{
   PORT_DIO_REG16_LIST
};

static Pin_Dio_DBNC pinDioDbncValue;

static const Pin_Dio_DBNC_Init_Value pinDioDbncInitValue = 
{
   DIO_DBNC_INIT_COUNTER_BIT0,  \
   DIO_DBNC_INIT_COUNTER_BIT1,  \
   DIO_DBNC_INIT_COUNTER_BIT2,  \
   DIO_DBNC_INIT_COUNTER_BIT3
};

/******************************************************************************
**    FUNCTIONS
******************************************************************************/
/******************************************************************************
**
** Function Name:      Dio_Init
**
** Description:           This function initializes the Dio Driver Module.
**
** Inputs:                  ConfigPtr: Pointer to configuration set
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-16-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
#ifdef FULL_AUTOSAR
void Dio_Init(const Dio_ConfigType *ConfigPtr)
#else
void Dio_Init(void)
#endif
{
   pinDioDbncValue.rawValue = 0;
   pinDioDbncValue.dbncValue = 0;
   pinDioDbncValue.cntBit0 = pinDioDbncInitValue.cntInitBit0;
   pinDioDbncValue.cntBit1 = pinDioDbncInitValue.cntInitBit1;
   pinDioDbncValue.cntBit2 = pinDioDbncInitValue.cntInitBit2;
   pinDioDbncValue.cntBit3 = pinDioDbncInitValue.cntInitBit3;
  
   return;
}

/******************************************************************************
**
** Function Name:      Dio_ReadChannel
**
** Description:           This function returns the value of the specified DIO channel.
**
** Inputs:                  ChannelId: ID of DIO channel
**
** Outputs:                None
**
** Return:                  Value of the specified DIO channel.
**                               STD_HIGH:The physical level of the corresponding Pin is STD_HIGH
**                               STD_LOW: The physical level of the corresponding Pin is STD_LOW
**
** Others:                  None
**
** Created:                1-16-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
   const Pin_Dio_Reg16_Map *fl_pin_dio_ptr;
   Dio_LevelType fl_return_value;
   
   if (ChannelId < sizeof(Pin_Dio_Reg16_Map_List))
   {
      fl_pin_dio_ptr = &Pin_Dio_Reg16_Map_List[ChannelId];

      if (TESTBIT(*(fl_pin_dio_ptr->ppr), (fl_pin_dio_ptr->bit_mask)))
      {
         fl_return_value = STD_HIGH;
      }
      else
      {
         fl_return_value = STD_LOW;
      }
     
   }
   else
   {
      /*Invalid channnelId. Send error code DIO_E_PARAM_INVALID_CHANNEL_ID to DET.*/
      /*-----To do-----*/

      /*Temporal process*/
      fl_return_value = STD_LOW;
   }
   
   return fl_return_value;
}

/******************************************************************************
**
** Function Name:      Dio_WriteChannel
**
** Description:           Service to set a level of a channel.
**
** Inputs:                  ChannelId: ID of DIO channel
**                             Level: Value to be written
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-16-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level)
{
   const Pin_Dio_Reg16_Map *fl_pin_dio_ptr;

    if ((STD_HIGH != Level) && (STD_LOW != Level))
   {
      /*Invalid level value*/
      return ;
   }
   
   if (ChannelId < sizeof(Pin_Dio_Reg16_Map_List))
   {
      fl_pin_dio_ptr = &Pin_Dio_Reg16_Map_List[ChannelId];

      if (STD_HIGH == Level)  /*Set channel output to high level*/
      {
         SETBIT(*(fl_pin_dio_ptr->p), (fl_pin_dio_ptr->bit_mask));     
      }
      else /*Set channel output to low level*/
      {
         CLEARBIT(*(fl_pin_dio_ptr->p), (fl_pin_dio_ptr->bit_mask));  
      }
   }
   else
   {
      /*Invalid channnelId. Send error code DIO_E_PARAM_INVALID_CHANNEL_ID to DET.*/
      /*-----To do-----*/
   }
   
   return;
}

/******************************************************************************
**
** Function Name:      Dio_FlipChannel
**
** Description:           Service to flip (change from 1 to 0 or from 0 to 1) the level of a 
**                             channel and return the level of the channel after flip.
**
** Inputs:                  ChannelId: ID of DIO channel
**
** Outputs:                None
**
** Return:                  Value of the specified DIO channel.
**                                STD_HIGH:The physical level of the corresponding Pin is STD_HIGH
**                                STD_LOW: The physical level of the corresponding Pin is STD_LOW
**
** Others:                  None
**
** Created:                1-16-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId)
{
   const Pin_Dio_Reg16_Map *fl_pin_dio_ptr;
   Dio_LevelType fl_return_value;
   
   if (ChannelId < sizeof(Pin_Dio_Reg16_Map_List))
   {
      fl_pin_dio_ptr = &Pin_Dio_Reg16_Map_List[ChannelId];

      if (STD_HIGH == Dio_ReadChannel(ChannelId))
      {
         CLEARBIT(*(fl_pin_dio_ptr->p), (fl_pin_dio_ptr->bit_mask));
         fl_return_value = STD_LOW;
      }
      else
      {
         SETBIT(*(fl_pin_dio_ptr->p), (fl_pin_dio_ptr->bit_mask)); 
         fl_return_value = STD_HIGH;
      }
     
   }
   else
   {
      /*Invalid channnelId. Send error code DIO_E_PARAM_INVALID_CHANNEL_ID to DET.*/
      /*-----To do-----*/

      /*Temporal process*/
      fl_return_value = STD_LOW;
   }
   
   return fl_return_value;
}

/******************************************************************************
**
** Function Name:      Dio_ReadPort
**
** Description:           This function returns the level of all channels of that port.
**
** Inputs:                  PortId: ID of DIO Port
**
** Outputs:                None
**
** Return:                  Level of all channels of that port
**
** Others:                  None
**
** Created:                1-16-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId)
{
   const Port_Dio_Reg16_Map *fl_port_dio_ptr;
   Dio_PortLevelType fl_return_value;
   
   if (PortId < sizeof(Port_Dio_Reg16_Map_List))
   {
      fl_port_dio_ptr = &Port_Dio_Reg16_Map_List[PortId];
      fl_return_value = *(fl_port_dio_ptr->ppr);     
   }
   else
   {
      /*Invalid PortId. Send error code DIO_E_PARAM_INVALID_PORT_ID to DET.*/
      /*-----To do-----*/

      /*Temporal process*/
      fl_return_value = STD_LOW;
   }
   
   return fl_return_value;
}

/******************************************************************************
**
** Function Name:      Dio_WritePort
**
** Description:           Service to set a value of the port.
**
** Inputs:                  PortId: ID of DIO Port
**                             Level: Value to be written
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-16-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level)
{
   const Port_Dio_Reg16_Map *fl_port_dio_ptr;
   
   if (PortId < sizeof(Port_Dio_Reg16_Map_List))
   {
      fl_port_dio_ptr = &Port_Dio_Reg16_Map_List[PortId];

      *(fl_port_dio_ptr->p) = Level;

   }
   else
   {
      /*Invalid PortId. Send error code DIO_E_PARAM_INVALID_PORT_ID to DET.*/
      /*-----To do-----*/
   }
   
   return;
}

/******************************************************************************
**
** Function Name:      Dio_ReadChannelGroup
**
** Description:           This Service reads a subset of the adjoining bits of a port.
**
** Inputs:                  ChannelGroupIdPtr: Pointer to ChannelGroup
**
** Outputs:                None
**
** Return:                  Level of a subset of the adjoining bits of a port
**
** Others:                  None
**
** Created:                1-18-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr)
{
   const Port_Dio_Reg16_Map *fl_port_dio_ptr;
   Dio_PortLevelType fl_return_value;
   
   if (NULL != ChannelGroupIdPtr)
   {      
      if (ChannelGroupIdPtr->port < sizeof(Port_Dio_Reg16_Map_List))
      {
         fl_port_dio_ptr = &Port_Dio_Reg16_Map_List[ChannelGroupIdPtr->port ];

         /*Get the mask group value*/
         fl_return_value = (*(fl_port_dio_ptr->ppr)) & ChannelGroupIdPtr->mask;

         /*Shift the group value to meet autosar definition*/
         fl_return_value = fl_return_value >> ChannelGroupIdPtr->offset;

      }
      else
      {
         /*Invalid group port. Send error code DIO_E_PARAM_INVALID_GROUP to DET.*/
         /*-----To do-----*/

         /*Temporal process*/
         fl_return_value = STD_LOW;
      }
   }
   else
   {
      /*Null pointer. Send error code DIO_E_PARAM_CONFIG to DET.*/
      /*-----To do-----*/
   }
   
   return fl_return_value;
}

/******************************************************************************
**
** Function Name:      Dio_WriteChannelGroup
**
** Description:           Service to set a subset of the adjoining bits of a port to a specified level.
**
** Inputs:                  ChannelGroupIdPtr: Pointer to ChannelGroup
**                             Level: Value to be written
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-16-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr, Dio_PortLevelType Level)
{
   const Port_Dio_Reg16_Map *fl_port_dio_ptr;
   
   if (NULL != ChannelGroupIdPtr)
   {      
      if (ChannelGroupIdPtr->port < sizeof(Port_Dio_Reg16_Map_List))
      {
         fl_port_dio_ptr = &Port_Dio_Reg16_Map_List[ChannelGroupIdPtr->port ];

         /*Get the mask group value*/
         *(fl_port_dio_ptr->p) = ((Level << ChannelGroupIdPtr->offset) & (ChannelGroupIdPtr->mask))
                                            | ((*(fl_port_dio_ptr->p)) & (~(ChannelGroupIdPtr->mask)));

      }
      else
      {
         /*Invalid group port. Send error code DIO_E_PARAM_INVALID_GROUP to DET.*/
         /*-----To do-----*/
      }
   }
   else
   {
      /*Null pointer. Send error code DIO_E_PARAM_CONFIG to DET.*/
      /*-----To do-----*/
   }
   
   return;
}


/******************************************************************************
**
** Function Name:      Dio_GetVersionInfo
**
** Description:           This function returns the version information of this module.
**
** Inputs:                  None
**
** Outputs:                Versioninfo: Pointer to where to store the version information of this module
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-18-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Dio_GetVersionInfo(Std_VersionInfoType *Versioninfo)
{
   
   return;
}

/******************************************************************************
**
** Function Name:      Dio_sampleDigInputs
**
** Description:           This function will sample digital inputs and get raw values.
**
** Inputs:                  None
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                2-17-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
static void Dio_sampleDigInputs(void)
{
   /*Clear rawValue before read actual port value*/
   pinDioDbncValue.rawValue = 0;
   
   #if defined(DIO_00_BTEST_PORT)
      DIO_00_SET_TO_INPUT();

      if (DIO_00_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT00_MASK);
      }
   #endif

   #if defined(DIO_01_BTEST_PORT)
      DIO_01_SET_TO_INPUT();

      if (DIO_01_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT01_MASK);
      }
   #endif

   #if defined(DIO_02_BTEST_PORT)
      DIO_02_SET_TO_INPUT();

      if (DIO_02_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT02_MASK);
      }
   #endif

   #if defined(DIO_03_BTEST_PORT)
      DIO_03_SET_TO_INPUT();

      if (DIO_03_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT03_MASK);
      }
   #endif

   #if defined(DIO_04_BTEST_PORT)
      DIO_04_SET_TO_INPUT();

      if (DIO_04_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT04_MASK);
      }
   #endif

   #if defined(DIO_05_BTEST_PORT)
      DIO_05_SET_TO_INPUT();

      if (DIO_05_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT05_MASK);
      }
   #endif

   #if defined(DIO_06_BTEST_PORT)
      DIO_06_SET_TO_INPUT();

      if (DIO_06_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT06_MASK);
      }
   #endif

   #if defined(DIO_07_BTEST_PORT)
      DIO_07_SET_TO_INPUT();

      if (DIO_07_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT07_MASK);
      }
   #endif

   #if defined(DIO_08_BTEST_PORT)
      DIO_08_SET_TO_INPUT();

      if (DIO_08_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT08_MASK);
      }
   #endif

   #if defined(DIO_09_BTEST_PORT)
      DIO_09_SET_TO_INPUT();

      if (DIO_09_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT09_MASK);
      }
   #endif

   #if defined(DIO_10_BTEST_PORT)
      DIO_10_SET_TO_INPUT();

      if (DIO_10_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT10_MASK);
      }
   #endif

   #if defined(DIO_11_BTEST_PORT)
      DIO_11_SET_TO_INPUT();

      if (DIO_11_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT11_MASK);
      }
   #endif

   #if defined(DIO_12_BTEST_PORT)
      DIO_12_SET_TO_INPUT();

      if (DIO_12_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT12_MASK);
      }
   #endif

   #if defined(DIO_13_BTEST_PORT)
      DIO_13_SET_TO_INPUT();

      if (DIO_13_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT13_MASK);
      }
   #endif

   #if defined(DIO_14_BTEST_PORT)
      DIO_14_SET_TO_INPUT();

      if (DIO_14_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT14_MASK);
      }
   #endif

   #if defined(DIO_15_BTEST_PORT)
      DIO_15_SET_TO_INPUT();

      if (DIO_15_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT15_MASK);
      }
   #endif

   #if defined(DIO_16_BTEST_PORT)
      DIO_16_SET_TO_INPUT();

      if (DIO_16_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT16_MASK);
      }
   #endif

   #if defined(DIO_17_BTEST_PORT)
      DIO_17_SET_TO_INPUT();

      if (DIO_17_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT17_MASK);
      }
   #endif

   #if defined(DIO_18_BTEST_PORT)
      DIO_18_SET_TO_INPUT();

      if (DIO_18_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT18_MASK);
      }
   #endif

   #if defined(DIO_19_BTEST_PORT)
      DIO_19_SET_TO_INPUT();

      if (DIO_19_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT19_MASK);
      }
   #endif

   #if defined(DIO_20_BTEST_PORT)
      DIO_20_SET_TO_INPUT();

      if (DIO_20_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT20_MASK);
      }
   #endif

   #if defined(DIO_21_BTEST_PORT)
      DIO_21_SET_TO_INPUT();

      if (DIO_21_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT21_MASK);
      }
   #endif

   #if defined(DIO_22_BTEST_PORT)
      DIO_22_SET_TO_INPUT();

      if (DIO_22_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT22_MASK);
      }
   #endif

   #if defined(DIO_23_BTEST_PORT)
      DIO_23_SET_TO_INPUT();

      if (DIO_23_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT23_MASK);
      }
   #endif

   #if defined(DIO_24_BTEST_PORT)
      DIO_24_SET_TO_INPUT();

      if (DIO_24_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT24_MASK);
      }
   #endif

   #if defined(DIO_25_BTEST_PORT)
      DIO_25_SET_TO_INPUT();

      if (DIO_25_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT25_MASK);
      }
   #endif

   #if defined(DIO_26_BTEST_PORT)
      DIO_26_SET_TO_INPUT();

      if (DIO_26_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT26_MASK);
      }
   #endif

   #if defined(DIO_27_BTEST_PORT)
      DIO_27_SET_TO_INPUT();

      if (DIO_27_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT27_MASK);
      }
   #endif

   #if defined(DIO_28_BTEST_PORT)
      DIO_28_SET_TO_INPUT();

      if (DIO_28_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT28_MASK);
      }
   #endif

   #if defined(DIO_29_BTEST_PORT)
      DIO_29_SET_TO_INPUT();

      if (DIO_29_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT29_MASK);
      }
   #endif

   #if defined(DIO_30_BTEST_PORT)
      DIO_30_SET_TO_INPUT();

      if (DIO_30_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT30_MASK);
      }
   #endif

   #if defined(DIO_31_BTEST_PORT)
      DIO_31_SET_TO_INPUT();

      if (DIO_31_BTEST_PORT())
      {  
         SETBIT(pinDioDbncValue.rawValue, BIT31_MASK);
      }
   #endif


}
/******************************************************************************
**
** Function Name:      Dio_handleDebounce
**
** Description:           This function will handle digital input debounce.
**
** Inputs:                  None
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                2-17-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
static void Dio_handleDebounce(void)
{
   uint32   fl_temp;
   uint32   fl_value;
   Pin_Dio_DBNC *fl_dptr = &pinDioDbncValue;
   const Pin_Dio_DBNC_Init_Value *fl_rptr = &pinDioDbncInitValue;
   
   /*Increment the bit counters for debounce*/
   fl_dptr->cntBit3 ^= ((fl_dptr->cntBit2) & (fl_dptr->cntBit1) & (fl_dptr->cntBit0));
   fl_dptr->cntBit2 ^= ((fl_dptr->cntBit1) & (fl_dptr->cntBit0));
   fl_dptr->cntBit1 ^= (fl_dptr->cntBit0);
   fl_dptr->cntBit0 = (~( fl_dptr->cntBit0));
   
   /**if (rawValue == dbncValue) then { fl_temp = 0 } else { fl_temp = 1 }*/
   fl_temp   =  (fl_dptr->rawValue^ fl_dptr->dbncValue);
   
   /*if (rawValue == dbncValue) then { Bit2:Bit1:Bit0 = 0:0:0 } else { keep Bit2:Bit1:Bit0 unchanged }
   */
   fl_dptr->cntBit0 &= fl_temp;
   fl_dptr->cntBit1 &= fl_temp;
   fl_dptr->cntBit2 &= fl_temp;
   fl_dptr->cntBit3 &= fl_temp;
    
   /*
   * Update the filtered value: if ( Bit2:Bit1:Bit0 == 0:0:0) then { dbncValue = rawValue }
   *                                      else { keep dbncValue unchanged }
   */
   fl_temp = (fl_dptr->cntBit0 | fl_dptr->cntBit1 | fl_dptr->cntBit2 | fl_dptr->cntBit3);
   fl_value = (fl_dptr->dbncValue & fl_temp);
   fl_temp = (~(fl_temp));
   fl_dptr->dbncValue = (fl_value | ((fl_temp) & fl_dptr->rawValue));
   
   /*
   * Reset the debounce counters to  initial value for any counters which are not in process of counting.
   * If counter is in process of counting then it is not changed.
   */
   fl_dptr->cntBit0 |= (fl_temp & fl_rptr->cntInitBit0);
   fl_dptr->cntBit1 |= (fl_temp & fl_rptr->cntInitBit1);
   fl_dptr->cntBit2 |= (fl_temp & fl_rptr->cntInitBit2);
   fl_dptr->cntBit3 |= (fl_temp & fl_rptr->cntInitBit3);
}

/******************************************************************************
**
** Function Name:      Dio_Mainfunction
**
** Description:           This function will be executed by periodic task to do some digital input debounce processing.
**
** Inputs:                  None
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                2-17-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Dio_Mainfunction(void)
{
   Dio_sampleDigInputs();
   
   Dio_handleDebounce();
   
   return;
}



/******************************************************************************
**
** Function Name:      Dio_getDbncState
**
** Description:           This function get dio dbnc state.
**
** Inputs:                  dbncChannelId: dio dbnc channel ID to identify different dio channel
**
** Outputs:                None
**
** Return:                  Debounced value of the specified DIO channel.
**                               STD_HIGH:The physical level of the corresponding Pin is STD_HIGH
**                               STD_LOW: The physical level of the corresponding Pin is STD_LOW
**
** Others:                  None
**
** Created:                2-17-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
uint8 Dio_getDbncState(uint8 dbncChannelId)
{
   /*check dbncChannelId*/
   if (dbncChannelId >= DIO_DBNC_CHANNEL_MAX)
   {
      return DIO_E_PARAM_INVALID_DBNC_CHANNEL_ID;
   }
   
   if (0 != (pinDioDbncValue.dbncValue & ((uint32)(1 << dbncChannelId))))
   { 
      /*Debounced data is STD_HIGH(1)*/
      return (STD_HIGH);
   }
   else
   {
      /*Debounced data is STD_LOW(0)*/
      return (STD_LOW);
   }
}

/******************************************************************************
**
** Function Name:      Dio_getRawState
**
** Description:           This function get dio raw state.
**
** Inputs:                  dbncChannelId: dio dbnc channel ID to identify different dio channel 
**
** Outputs:                None
**
** Return:                  Raw value of the specified DIO channel.
**                               STD_HIGH:The physical level of the corresponding Pin is STD_HIGH
**                               STD_LOW: The physical level of the corresponding Pin is STD_LOW
**
** Others:                  None
**
** Created:                2-17-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
uint8 Dio_getRawState(uint8 dbncChannelId)
{
   /*check dbncChannelId*/
   if (dbncChannelId >= DIO_DBNC_CHANNEL_MAX)
   {
      return DIO_E_PARAM_INVALID_DBNC_CHANNEL_ID;
   }
   
   if (0 != (pinDioDbncValue.rawValue & ((uint32)(1 << dbncChannelId))))
   { 
      /*Raw data is STD_HIGH(1)*/
      return (STD_HIGH);
   }
   else
   {
      /*Raw data is STD_LOW(0)*/
      return (STD_LOW);
   }
   
}

/***************************End Of File*****************************************/
