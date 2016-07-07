/******************************************************************************
**  Project        BAIC C11 Cluster Project
**  (c) copyright 2015
**  Company       O-film
**                All rights reserved
**  Secrecy Level STRICTLY CONFIDENTIAL
*******************************************************************************
**
**          File  : Port.c
**          Author: jiangyuchang
**
**          Date  : 2016-01-13
**
**
******************************************************************************/
#define PORT_C

/******************************************************************************
**    INCLUDES
******************************************************************************/
#include "Port.h"

/******************************************************************************
**    MACROS
******************************************************************************/

/******************************************************************************
**     INTERNAL   FUNCTION   PROTOTYPES
******************************************************************************/
static void Port_SetReg16BitValue(uint16 *regPtr, uint16 mask);
static void Port_ClearReg16BitValue(uint16 *regPtr, uint16 mask);

/******************************************************************************
**    INTERNEL VARIABLES
******************************************************************************/
static const Port_ConfigType Port_Init_Reg16_List[] = 
{
   PORT_INIT_REG16_LIST
   {(uint16 *)NULL, (uint16)0 }
};

static const Port_ConfigType Port_Sleep_Reg16_List[] = 
{
   PORT_SLEEP_REG16_LIST
   {(uint16 *)NULL, (uint16)0 }
};

static const Port_ConfigType Port_Wakeup_Reg16_List[] = 
{
   PORT_WAKEUP_REG16_LIST
   {(uint16 *)NULL, (uint16)0 }
};

static const Port_Pin_Reg16_Map  Port_Pin_Reg16_Map_List[] = 
{
   PORT_PIN_REG16_LIST
};



/******************************************************************************
**    FUNCTIONS
******************************************************************************/
/******************************************************************************
**
** Function Name:      Port_Init
**
** Description:           This function initializes the Port Driver Module.
**
** Inputs:                  ConfigPtr: Pointer to configuration set
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-13-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
#ifdef FULL_AUTOSAR
void Port_Init(const Port_ConfigType *ConfigPtr)
#else
void Port_Init(void)
#endif
{
   #ifdef FULL_AUTOSAR
   const Port_ConfigType *fl_ConfigPtr = ConfigPtr;
   #else
   const Port_ConfigType *fl_ConfigPtr = Port_Init_Reg16_List;
   #endif
   if (NULL != fl_ConfigPtr )
   {
      while (fl_ConfigPtr->address != (uint16 *)NULL)
      {
         *(fl_ConfigPtr->address) = fl_ConfigPtr->value;
         ++fl_ConfigPtr;
      }
   }
   else
   {
      /*Null pointer. Send error code to DET.*/
   }
  
   return;
}

/******************************************************************************
**
** Function Name:      Port_SetPinDirection
**
** Description:           This function sets the port pin direction.
**
** Inputs:                  Pin: Port Pin ID number
**                             Direction: Port Pin Direction
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-13-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction)
{
   const Port_Pin_Reg16_Map *fl_pin_reg_ptr;

   if ((PORT_PIN_OUT != Direction) && (PORT_PIN_IN != Direction))
   {
      /*Invalid value*/
      return ;
   }
   
   if (Pin < sizeof(Port_Pin_Reg16_Map_List))
   {
      fl_pin_reg_ptr = &Port_Pin_Reg16_Map_List[Pin];

      /*If port have PIPC register, clear PIPC to make I/O mode controlled by PM.*/
      if (((uint16 *) &PMC0) == fl_pin_reg_ptr->pmc)
      {
         CLEARBIT(PIPC0, fl_pin_reg_ptr->bit_mask);
      }
      else if (((uint16 *) &PMC10) == fl_pin_reg_ptr->pmc)
      {
         CLEARBIT(PIPC10, fl_pin_reg_ptr->bit_mask);
      }
      else if (((uint16 *) &PMC11) == fl_pin_reg_ptr->pmc)
      {
         CLEARBIT(PIPC11, fl_pin_reg_ptr->bit_mask);
      }
      else
      {
         /*Do nothing*/
      }
      

      /*Set channel pin as GPIO function*/
      Port_ClearReg16BitValue(fl_pin_reg_ptr->pmc, fl_pin_reg_ptr->bit_mask);

      if (PORT_PIN_OUT == Direction) /*Set channel pin as output mode*/
      {
         Port_ClearReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
      }
      else if (PORT_PIN_IN == Direction) /*Set channel pin as input mode*/
      {
         Port_SetReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
      }
      else
      {
      	   /*Invaid value. Send error code PORT_E_DIRECTION_UNCHANGEABLE to DET*/
      	   /*-----To do-----*/
      }
   }
   else
   {
      /*Invalid pin value. Send error code PORT_E_PARAM_PIN to DET*/
      /*-----To do-----*/
   }
   
   return;
}

/******************************************************************************
**
** Function Name:      Port_SetPinMode
**
** Description:           This function sets the port pin mode.
**
** Inputs:                  Pin: Port Pin ID number
**                             Direction: New Port Pin Mode to be set on port pin
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-13-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Port_SetPinMode(Port_PinType Pin, Port_PinMode Mode)
{
   const Port_Pin_Reg16_Map *fl_pin_reg_ptr;

   if (PORT_PIN_MODE_MAX_VALUE <= Mode)
   {
      /*Invalid Mode. Send error code PORT_E_PARAM_INVALID_MODE to DET.*/
      /*-----To do-----*/
      
      return ;
   }
   
   if (Pin < sizeof(Port_Pin_Reg16_Map_List))
   {
      fl_pin_reg_ptr = &Port_Pin_Reg16_Map_List[Pin];

      /*If port have PIPC register, clear PIPC to make I/O mode controlled by PM.*/
      if (((uint16 *) &PMC0) == fl_pin_reg_ptr->pmc)
      {
         CLEARBIT(PIPC0, fl_pin_reg_ptr->bit_mask);
      }
      else if (((uint16 *) &PMC10) == fl_pin_reg_ptr->pmc)
      {
         CLEARBIT(PIPC10, fl_pin_reg_ptr->bit_mask);
      }
      else if (((uint16 *) &PMC11) == fl_pin_reg_ptr->pmc)
      {
         CLEARBIT(PIPC11, fl_pin_reg_ptr->bit_mask);
      }
      else
      {
         /*Do nothing*/
      }

      if (PORT_PIN_MODE_GPIO == Mode)
      {
         /*Set channel pin as GPIO function*/
         Port_ClearReg16BitValue(fl_pin_reg_ptr->pmc, fl_pin_reg_ptr->bit_mask);
      }
      else
      {
         /*Set channel pin as alternative Mode function*/
         Port_SetReg16BitValue(fl_pin_reg_ptr->pmc, fl_pin_reg_ptr->bit_mask);
         
         switch (Mode)
         {
            case PORT_PIN_MODE_ALT_OUT1:
               /*Port Mode Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);
             
               break;
            case PORT_PIN_MODE_ALT_IN1:
               /*Port Mode Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);

               break;
            case PORT_PIN_MODE_ALT_OUT2:
               /*Port Mode Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);

            
               break;
            case PORT_PIN_MODE_ALT_IN2:
               /*Port Mode Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);

               break;
            case PORT_PIN_MODE_ALT_OUT3:
               /*Port Mode Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);

             
               
               break;
            case PORT_PIN_MODE_ALT_IN3:
               /*Port Mode Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);

              
               break;
             case PORT_PIN_MODE_ALT_OUT4:
               /*Port Mode Register*/
               Port_ClearReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);

               
               
               break;
            case PORT_PIN_MODE_ALT_IN4:
               /*Port Mode Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pm, fl_pin_reg_ptr->bit_mask);
       
               /*Port Function Control Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfc, fl_pin_reg_ptr->bit_mask);

               /*Port Function Control Expansion Register*/
               Port_SetReg16BitValue(fl_pin_reg_ptr->pfce, fl_pin_reg_ptr->bit_mask);

              
               break;
            
            default:
               break;
         }
      }

   }
   else
   {
      /*Invalid pin value. Send error code PORT_E_PARAM_PIN to DET.*/
      /*-----To do-----*/
   }
   
   return;
}

/******************************************************************************
**
** Function Name:      Port_RefreshPortDirection
**
** Description:           This function refreshes port direction.
**
** Inputs:                  None
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-13-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Port_RefreshPortDirection(void)
{
   
   return;
}

/******************************************************************************
**
** Function Name:      Port_GetVersionInfo
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
** Created:                1-13-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
void Port_GetVersionInfo(Std_VersionInfoType *Versioninfo)
{
   
   return;
}

/******************************************************************************
**
** Function Name:      Port_Sleep
**
** Description:           This function updates the Port Driver Module before MCU sleep.
**
** Inputs:                  ConfigPtr: Pointer to configuration set
**
** Outputs:                None
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
#ifdef FULL_AUTOSAR
void Port_Sleep(const Port_ConfigType *ConfigPtr)
#else
void Port_Sleep(void)
#endif
{
   #ifdef FULL_AUTOSAR
   const Port_ConfigType *fl_ConfigPtr = ConfigPtr;
   #else
   const Port_ConfigType *fl_ConfigPtr = Port_Sleep_Reg16_List;
   #endif
   if (NULL != fl_ConfigPtr )
   {
      while (fl_ConfigPtr->address != (uint16 *)NULL)
      {
         *(fl_ConfigPtr->address) = fl_ConfigPtr->value;
         ++fl_ConfigPtr;
      }
   }
   else
   {
      /*Null pointer. Send error code to DET.*/
   }
  
   return;
}

/******************************************************************************
**
** Function Name:      Port_Wakeup
**
** Description:           This function updates the Port Driver Module after MCU wakeup.
**
** Inputs:                  ConfigPtr: Pointer to configuration set
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-13-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
#ifdef FULL_AUTOSAR
void Port_Wakeup(const Port_ConfigType *ConfigPtr)
#else
void Port_Wakeup(void)
#endif
{
   #ifdef FULL_AUTOSAR
   const Port_ConfigType *fl_ConfigPtr = ConfigPtr;
   #else
   const Port_ConfigType *fl_ConfigPtr = Port_Wakeup_Reg16_List;
   #endif
   if (NULL != fl_ConfigPtr )
   {
      while (fl_ConfigPtr->address != (uint16 *)NULL)
      {
         *(fl_ConfigPtr->address) = fl_ConfigPtr->value;
         ++fl_ConfigPtr;
      }
   }
   else
   {
      /*Null pointer. Send error code to DET.*/
   }
  
   return;
}

/******************************************************************************
**
** Function Name:      Port_WriteProRegister
**
** Description:           This function updates write-protected register. 
**
** Inputs:                  protCmdReg: Pointer to protection command register
**                             pprotStatusReg: Pointer to port protetion status register
**                             regValue: Value need to update targetReg
**                             repeatTime: Repeat time if write error happened            
**
** Outputs:                targetReg: Pointer to target register which need  to be updated
**
** Return:                  Value to show whether write success or failure.
**                               PORT_PROTECTION_REGISTER_WRITE_SUCCESS: write success
**                               PORT_PROTECTION_REGISTER_WRITE_FAIL: write failure
**
** Others:                  None
**
** Created:                1-19-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
uint8 Port_WriteProRegister(volatile uint32 *protCmdReg, volatile uint32 *pprotStatusReg, volatile uint32 *targetReg,uint32 regValue, uint8 repeatTime)
{
   uint8 fl_return_value = PORT_PROTECTION_REGISTER_WRITE_SUCCESS;
   
   do
   {
      *protCmdReg = 0x000000A5UL;
      *targetReg = regValue;
      *targetReg = ~regValue;
      *targetReg = regValue;

      if (repeatTime > 0)
      {
         repeatTime--;
      }
   } while ((*pprotStatusReg != 0x00000000UL) && (repeatTime > 0));

   if (0 == repeatTime)
   {
      /*To do for write error handle*/
      fl_return_value = PORT_PROTECTION_REGISTER_WRITE_FAIL;
   }

   return fl_return_value;
}

/******************************************************************************
**
** Function Name:      Port_SetReg16Value
**
** Description:           This function set bit of 16 bit register to '1'.
**
** Inputs:                  regPtr: Pointer to 16 bit register
**                             mask: Bit mask
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-19-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
static void Port_SetReg16BitValue(uint16 *regPtr, uint16 mask)
{
   if (NULL != regPtr)
   {
      SETBIT(*regPtr, mask);
   }
}

/******************************************************************************
**
** Function Name:      Port_ClearReg16BitValue
**
** Description:           This function clear bit of 16 bit register to '0'.
**
** Inputs:                  regPtr: Pointer to 16 bit register
**                             mask: Bit mask
**
** Outputs:                None
**
** Return:                  None
**
** Others:                  None
**
** Created:                1-19-2016  by  jiangyuchang
**
** Updated:           
**
*******************************************************************************/
static void Port_ClearReg16BitValue(uint16 *regPtr, uint16 mask)
{
   if (NULL != regPtr)
   {
      CLEARBIT(*regPtr, mask);
   }
}

/***************************End Of File*****************************************/
