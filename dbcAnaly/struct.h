
typedef struct
{
    uint8  data[8];
    uint8  Vcu_0x212MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Vcu_0x212NeverReceFlag;
 #endif

   uint8 VCU_212_SHIFT_POSITON;
   uint8 VCU_212_SHIFT_ERROR_OP;
}vcu_0x212_struct;

extern   vcu_0x212_struct    vcu_0x212;
#define  GET_VCU_0X212_MISSING_FLAG()    get_vcu_0x212_missing_flag()

#if  NeverReceFlagEN
#define  GET_VCU_0X212_NEVER_RECE_FLAG()    get_vcu_0x212_never_reve_flag()
#endif

#define  GET_VCU_SHIFT_POSITON()    get_VCU_SHIFT_POSITON()
#define  GET_VCU_SHIFT_ERROR_OP()    get_VCU_SHIFT_ERROR_OP()

typedef struct
{
    uint8  data[8];
    uint8  Vcu_0x214MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Vcu_0x214NeverReceFlag;
 #endif

    uint16 VCU_214_VEH_STATE;
   uint8 VCU_214_REMOTE_SWITCH_STA;
}vcu_0x214_struct;

extern   vcu_0x214_struct    vcu_0x214;
#define  GET_VCU_0X214_MISSING_FLAG()    get_vcu_0x214_missing_flag()

#if  NeverReceFlagEN
#define  GET_VCU_0X214_NEVER_RECE_FLAG()    get_vcu_0x214_never_reve_flag()
#endif

#define  GET_VCU_VEH_STATE()    get_VCU_VEH_STATE()
#define  GET_VCU_REMOTE_SWITCH_STA()    get_VCU_REMOTE_SWITCH_STA()

typedef struct
{
    uint8  data[8];
    uint8  Mcu_0x230MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Mcu_0x230NeverReceFlag;
 #endif

   uint8 MCU_230_SYS_FAULT_LAMP;
   uint8 MCU_230_BRAKE_ENGERY_RECOV_STA;
   uint8 MCU_230_MOT_FAULT_LAMP;
   uint8 MCU_230_FAULT_ALARM;
   uint8 MCU_230_LIMP_LAMP;
   uint8 MCU_230_MOT_TEMP_H_IND;
   uint8 MCU_230_MOT_FAULT_IND;
   uint8 MCU_230_MOT_SYS_TEMP_HIGH_LAMP;
   uint8 MCU_230_MCU_PWR_PENT;
}mcu_0x230_struct;

extern   mcu_0x230_struct    mcu_0x230;
#define  GET_MCU_0X230_MISSING_FLAG()    get_mcu_0x230_missing_flag()

#if  NeverReceFlagEN
#define  GET_MCU_0X230_NEVER_RECE_FLAG()    get_mcu_0x230_never_reve_flag()
#endif

#define  GET_MCU_SYS_FAULT_LAMP()    get_MCU_SYS_FAULT_LAMP()
#define  GET_MCU_BRAKE_ENGERY_RECOV_STA()    get_MCU_BRAKE_ENGERY_RECOV_STA()
#define  GET_MCU_MOT_FAULT_LAMP()    get_MCU_MOT_FAULT_LAMP()
#define  GET_MCU_FAULT_ALARM()    get_MCU_FAULT_ALARM()
#define  GET_MCU_LIMP_LAMP()    get_MCU_LIMP_LAMP()
#define  GET_MCU_MOT_TEMP_H_IND()    get_MCU_MOT_TEMP_H_IND()
#define  GET_MCU_MOT_FAULT_IND()    get_MCU_MOT_FAULT_IND()
#define  GET_MCU_MOT_SYS_TEMP_HIGH_LAMP()    get_MCU_MOT_SYS_TEMP_HIGH_LAMP()
#define  GET_MCU_MCU_PWR_PENT()    get_MCU_MCU_PWR_PENT()

typedef struct
{
    uint8  data[8];
    uint8  Abs_0x318MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Abs_0x318NeverReceFlag;
 #endif

    uint16 ABS_318_VehSpd;
   uint8 ABS_318_VehicleSpeedValid;
   uint8 ABS_318_ABSActive;
   uint8 ABS_318_ABSFail;
   uint8 ABS_318_EBDFail;
}abs_0x318_struct;

extern   abs_0x318_struct    abs_0x318;
#define  GET_ABS_0X318_MISSING_FLAG()    get_abs_0x318_missing_flag()

#if  NeverReceFlagEN
#define  GET_ABS_0X318_NEVER_RECE_FLAG()    get_abs_0x318_never_reve_flag()
#endif

#define  GET_ABS_VehSpd()    get_ABS_VehSpd()
#define  GET_ABS_VehicleSpeedValid()    get_ABS_VehicleSpeedValid()
#define  GET_ABS_ABSActive()    get_ABS_ABSActive()
#define  GET_ABS_ABSFail()    get_ABS_ABSFail()
#define  GET_ABS_EBDFail()    get_ABS_EBDFail()

typedef struct
{
    uint8  data[8];
    uint8  Mcu_0x430MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Mcu_0x430NeverReceFlag;
 #endif

    uint16 MCU_430_MOT_SPD;
}mcu_0x430_struct;

extern   mcu_0x430_struct    mcu_0x430;
#define  GET_MCU_0X430_MISSING_FLAG()    get_mcu_0x430_missing_flag()

#if  NeverReceFlagEN
#define  GET_MCU_0X430_NEVER_RECE_FLAG()    get_mcu_0x430_never_reve_flag()
#endif

#define  GET_MCU_MOT_SPD()    get_MCU_MOT_SPD()

typedef struct
{
    uint8  data[8];
    uint8  Bms_0x450MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bms_0x450NeverReceFlag;
 #endif

   uint8 BMS_450_BATT_SOC;
}bms_0x450_struct;

extern   bms_0x450_struct    bms_0x450;
#define  GET_BMS_0X450_MISSING_FLAG()    get_bms_0x450_missing_flag()

#if  NeverReceFlagEN
#define  GET_BMS_0X450_NEVER_RECE_FLAG()    get_bms_0x450_never_reve_flag()
#endif

#define  GET_BMS_BATT_SOC()    get_BMS_BATT_SOC()

typedef struct
{
    uint8  data[8];
    uint8  Bms_0x451MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bms_0x451NeverReceFlag;
 #endif

    uint16 BMS_451_BATT_CUR;
    uint16 BMS_451_BATT_VOLT_V2;
}bms_0x451_struct;

extern   bms_0x451_struct    bms_0x451;
#define  GET_BMS_0X451_MISSING_FLAG()    get_bms_0x451_missing_flag()

#if  NeverReceFlagEN
#define  GET_BMS_0X451_NEVER_RECE_FLAG()    get_bms_0x451_never_reve_flag()
#endif

#define  GET_BMS_BATT_CUR()    get_BMS_BATT_CUR()
#define  GET_BMS_BATT_VOLT_V2()    get_BMS_BATT_VOLT_V2()

typedef struct
{
    uint8  data[8];
    uint8  Bms_0x458MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bms_0x458NeverReceFlag;
 #endif

   uint8 BMS_458_BATT_CHG_TYPE;
}bms_0x458_struct;

extern   bms_0x458_struct    bms_0x458;
#define  GET_BMS_0X458_MISSING_FLAG()    get_bms_0x458_missing_flag()

#if  NeverReceFlagEN
#define  GET_BMS_0X458_NEVER_RECE_FLAG()    get_bms_0x458_never_reve_flag()
#endif

#define  GET_BMS_BATT_CHG_TYPE()    get_BMS_BATT_CHG_TYPE()

typedef struct
{
    uint8  data[8];
    uint8  Eps_0x470MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Eps_0x470NeverReceFlag;
 #endif

   uint8 EPS_470_EPS_STA;
}eps_0x470_struct;

extern   eps_0x470_struct    eps_0x470;
#define  GET_EPS_0X470_MISSING_FLAG()    get_eps_0x470_missing_flag()

#if  NeverReceFlagEN
#define  GET_EPS_0X470_NEVER_RECE_FLAG()    get_eps_0x470_never_reve_flag()
#endif

#define  GET_EPS_EPS_STA()    get_EPS_EPS_STA()

typedef struct
{
    uint8  data[8];
    uint8  Epb_0x4c8MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Epb_0x4c8NeverReceFlag;
 #endif

   uint8 EPB_4C8_EPB_ParkLampState;
   uint8 EPB_4C8_EPB_WarningLampState;
}epb_0x4c8_struct;

extern   epb_0x4c8_struct    epb_0x4c8;
#define  GET_EPB_0X4C8_MISSING_FLAG()    get_epb_0x4c8_missing_flag()

#if  NeverReceFlagEN
#define  GET_EPB_0X4C8_NEVER_RECE_FLAG()    get_epb_0x4c8_never_reve_flag()
#endif

#define  GET_EPB_EPB_ParkLampState()    get_EPB_EPB_ParkLampState()
#define  GET_EPB_EPB_WarningLampState()    get_EPB_EPB_WarningLampState()

typedef struct
{
    uint8  data[8];
    uint8  Ecc_0x4e0MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ecc_0x4e0NeverReceFlag;
 #endif

   uint8 ECC_4E0_OUT_TEMP;
}ecc_0x4e0_struct;

extern   ecc_0x4e0_struct    ecc_0x4e0;
#define  GET_ECC_0X4E0_MISSING_FLAG()    get_ecc_0x4e0_missing_flag()

#if  NeverReceFlagEN
#define  GET_ECC_0X4E0_NEVER_RECE_FLAG()    get_ecc_0x4e0_never_reve_flag()
#endif

#define  GET_ECC_OUT_TEMP()    get_ECC_OUT_TEMP()

typedef struct
{
    uint8  data[8];
    uint8  Ehu_0x585MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ehu_0x585NeverReceFlag;
 #endif

   uint8 EHU_585_EHU_Theme;
   uint8 EHU_585_EHU_State;
}ehu_0x585_struct;

extern   ehu_0x585_struct    ehu_0x585;
#define  GET_EHU_0X585_MISSING_FLAG()    get_ehu_0x585_missing_flag()

#if  NeverReceFlagEN
#define  GET_EHU_0X585_NEVER_RECE_FLAG()    get_ehu_0x585_never_reve_flag()
#endif

#define  GET_EHU_EHU_Theme()    get_EHU_EHU_Theme()
#define  GET_EHU_EHU_State()    get_EHU_EHU_State()

typedef struct
{
    uint8  data[8];
    uint8  Vcu_0x611MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Vcu_0x611NeverReceFlag;
 #endif

   uint8 VCU_611_READY_LAMP;
   uint8 VCU_611_PARKING_IND;
   uint8 VCU_611_BATT_PWRON;
   uint8 VCU_611_FAULT_ALARM;
   uint8 VCU_611_CHARG_CONNECT_LAMP;
   uint8 VCU_611_Batt_FAULT_IND;
   uint8 VCU_611_LIMP_LAMP;
   uint8 VCU_611_VEH_INSULATION_FAULT_IND;
   uint8 VCU_611_BATT_FAULT_IND;
   uint8 VCU_611_BRAKE_FAULT_IND;
   uint8 VCU_611_N_START_REQ;
   uint8 VCU_611_VEH_MODE;
   uint8 VCU_611_BATT_FAULT_LAMP;
   uint8 VCU_611_CHG_REMIND_LAMP;
}vcu_0x611_struct;

extern   vcu_0x611_struct    vcu_0x611;
#define  GET_VCU_0X611_MISSING_FLAG()    get_vcu_0x611_missing_flag()

#if  NeverReceFlagEN
#define  GET_VCU_0X611_NEVER_RECE_FLAG()    get_vcu_0x611_never_reve_flag()
#endif

#define  GET_VCU_READY_LAMP()    get_VCU_READY_LAMP()
#define  GET_VCU_PARKING_IND()    get_VCU_PARKING_IND()
#define  GET_VCU_BATT_PWRON()    get_VCU_BATT_PWRON()
#define  GET_VCU_FAULT_ALARM()    get_VCU_FAULT_ALARM()
#define  GET_VCU_CHARG_CONNECT_LAMP()    get_VCU_CHARG_CONNECT_LAMP()
#define  GET_VCU_Batt_FAULT_IND()    get_VCU_Batt_FAULT_IND()
#define  GET_VCU_LIMP_LAMP()    get_VCU_LIMP_LAMP()
#define  GET_VCU_VEH_INSULATION_FAULT_IND()    get_VCU_VEH_INSULATION_FAULT_IND()
#define  GET_VCU_BATT_FAULT_IND()    get_VCU_BATT_FAULT_IND()
#define  GET_VCU_BRAKE_FAULT_IND()    get_VCU_BRAKE_FAULT_IND()
#define  GET_VCU_N_START_REQ()    get_VCU_N_START_REQ()
#define  GET_VCU_VEH_MODE()    get_VCU_VEH_MODE()
#define  GET_VCU_BATT_FAULT_LAMP()    get_VCU_BATT_FAULT_LAMP()
#define  GET_VCU_CHG_REMIND_LAMP()    get_VCU_CHG_REMIND_LAMP()

typedef struct
{
    uint8  data[8];
    uint8  Vcu_0x615MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Vcu_0x615NeverReceFlag;
 #endif

    uint16 VCU_615_ENERGY_CONSUM_AV;
}vcu_0x615_struct;

extern   vcu_0x615_struct    vcu_0x615;
#define  GET_VCU_0X615_MISSING_FLAG()    get_vcu_0x615_missing_flag()

#if  NeverReceFlagEN
#define  GET_VCU_0X615_NEVER_RECE_FLAG()    get_vcu_0x615_never_reve_flag()
#endif

#define  GET_VCU_ENERGY_CONSUM_AV()    get_VCU_ENERGY_CONSUM_AV()

typedef struct
{
    uint8  data[8];
    uint8  Vcu_0x616MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Vcu_0x616NeverReceFlag;
 #endif

    uint16 VCU_616_DRIVE_RANGE;
}vcu_0x616_struct;

extern   vcu_0x616_struct    vcu_0x616;
#define  GET_VCU_0X616_MISSING_FLAG()    get_vcu_0x616_missing_flag()

#if  NeverReceFlagEN
#define  GET_VCU_0X616_NEVER_RECE_FLAG()    get_vcu_0x616_never_reve_flag()
#endif

#define  GET_VCU_DRIVE_RANGE()    get_VCU_DRIVE_RANGE()

typedef struct
{
    uint8  data[8];
    uint8  Vcu_0x617MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Vcu_0x617NeverReceFlag;
 #endif

   uint8 VCU_617_SYS_FAULT_LAMP;
   uint8 VCU_617_BRAKE_ENGERY_RECOV_LEVEL;
    uint16 VCU_617_ENERGY_CONSUM_IN;
}vcu_0x617_struct;

extern   vcu_0x617_struct    vcu_0x617;
#define  GET_VCU_0X617_MISSING_FLAG()    get_vcu_0x617_missing_flag()

#if  NeverReceFlagEN
#define  GET_VCU_0X617_NEVER_RECE_FLAG()    get_vcu_0x617_never_reve_flag()
#endif

#define  GET_VCU_SYS_FAULT_LAMP()    get_VCU_SYS_FAULT_LAMP()
#define  GET_VCU_BRAKE_ENGERY_RECOV_LEVEL()    get_VCU_BRAKE_ENGERY_RECOV_LEVEL()
#define  GET_VCU_ENERGY_CONSUM_IN()    get_VCU_ENERGY_CONSUM_IN()

typedef struct
{
    uint8  data[8];
    uint8  Bms_0x650MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bms_0x650NeverReceFlag;
 #endif

   uint8 BMS_650_BATT_HEAT_STA;
}bms_0x650_struct;

extern   bms_0x650_struct    bms_0x650;
#define  GET_BMS_0X650_MISSING_FLAG()    get_bms_0x650_missing_flag()

#if  NeverReceFlagEN
#define  GET_BMS_0X650_NEVER_RECE_FLAG()    get_bms_0x650_never_reve_flag()
#endif

#define  GET_BMS_BATT_HEAT_STA()    get_BMS_BATT_HEAT_STA()

typedef struct
{
    uint8  data[8];
    uint8  Icm_0x6a0MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_0x6a0NeverReceFlag;
 #endif

    uint32 ICM_6A0_ODO;
}icm_0x6a0_struct;

extern   icm_0x6a0_struct    icm_0x6a0;
#define  GET_ICM_0X6A0_MISSING_FLAG()    get_icm_0x6a0_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_0X6A0_NEVER_RECE_FLAG()    get_icm_0x6a0_never_reve_flag()
#endif

#define  GET_ICM_ODO()    get_ICM_ODO()

typedef struct
{
    uint8  data[8];
    uint8  Icm_0x6a2MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_0x6a2NeverReceFlag;
 #endif

   uint8 ICM_6A2_IP_Fault;
   uint8 ICM_6A2_IP_Theme;
    uint32 ICM_6A2_Distance_To_Service;
    uint16 ICM_6A2_Day_To_Service;
}icm_0x6a2_struct;

extern   icm_0x6a2_struct    icm_0x6a2;
#define  GET_ICM_0X6A2_MISSING_FLAG()    get_icm_0x6a2_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_0X6A2_NEVER_RECE_FLAG()    get_icm_0x6a2_never_reve_flag()
#endif

#define  GET_ICM_IP_Fault()    get_ICM_IP_Fault()
#define  GET_ICM_IP_Theme()    get_ICM_IP_Theme()
#define  GET_ICM_Distance_To_Service()    get_ICM_Distance_To_Service()
#define  GET_ICM_Day_To_Service()    get_ICM_Day_To_Service()

typedef struct
{
    uint8  data[8];
    uint8  Icm_0x6afMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_0x6afNeverReceFlag;
 #endif

   uint8 ICM_6AF_CAL_VERS;
    uint32 ICM_6AF_PART_VERS;
   uint8 ICM_6AF_HW_VERS;
   uint8 ICM_6AF_SW_VERS;
}icm_0x6af_struct;

extern   icm_0x6af_struct    icm_0x6af;
#define  GET_ICM_0X6AF_MISSING_FLAG()    get_icm_0x6af_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_0X6AF_NEVER_RECE_FLAG()    get_icm_0x6af_never_reve_flag()
#endif

#define  GET_ICM_CAL_VERS()    get_ICM_CAL_VERS()
#define  GET_ICM_PART_VERS()    get_ICM_PART_VERS()
#define  GET_ICM_HW_VERS()    get_ICM_HW_VERS()
#define  GET_ICM_SW_VERS()    get_ICM_SW_VERS()

typedef struct
{
    uint8  data[8];
    uint8  Chg_0x6d0MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Chg_0x6d0NeverReceFlag;
 #endif

   uint8 CHG_6D0_CHG_STA;
}chg_0x6d0_struct;

extern   chg_0x6d0_struct    chg_0x6d0;
#define  GET_CHG_0X6D0_MISSING_FLAG()    get_chg_0x6d0_missing_flag()

#if  NeverReceFlagEN
#define  GET_CHG_0X6D0_NEVER_RECE_FLAG()    get_chg_0x6d0_never_reve_flag()
#endif

#define  GET_CHG_CHG_STA()    get_CHG_CHG_STA()

typedef struct
{
    uint8  data[8];
    uint8  Vcu_0x214MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Vcu_0x214NeverReceFlag;
 #endif

    uint16 VCU_214_VEH_STATE;
}vcu_0x214_struct;

extern   vcu_0x214_struct    vcu_0x214;
#define  GET_VCU_0X214_MISSING_FLAG()    get_vcu_0x214_missing_flag()

#if  NeverReceFlagEN
#define  GET_VCU_0X214_NEVER_RECE_FLAG()    get_vcu_0x214_never_reve_flag()
#endif

#define  GET_VCU_VEH_STATE()    get_VCU_VEH_STATE()

typedef struct
{
    uint8  data[8];
    uint8  Peps_0x479MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Peps_0x479NeverReceFlag;
 #endif

   uint8 PEPS_479_POWER_MODE;
   uint8 PEPS_479_RM_Key_LowBattery_Alert;
   uint8 PEPS_479_AuthFailWarning;
   uint8 PEPS_479_One_KeyStart_Swith_Error;
   uint8 PEPS_479_Press_Brake_Pedal_Alert;
   uint8 PEPS_479_ESCLWarning;
   uint8 PEPS_479_ETWS_Alert;
   uint8 PEPS_479_CID_Left_Alert;
   uint8 PEPS_479_DOOR_Lock_Ig_NotOff_Alert;
   uint8 PEPS_479_DOOR_Open_Lock_Alert;
   uint8 PEPS_479_Key_Insid_Vehicle_Alert;
}peps_0x479_struct;

extern   peps_0x479_struct    peps_0x479;
#define  GET_PEPS_0X479_MISSING_FLAG()    get_peps_0x479_missing_flag()

#if  NeverReceFlagEN
#define  GET_PEPS_0X479_NEVER_RECE_FLAG()    get_peps_0x479_never_reve_flag()
#endif

#define  GET_PEPS_POWER_MODE()    get_PEPS_POWER_MODE()
#define  GET_PEPS_RM_Key_LowBattery_Alert()    get_PEPS_RM_Key_LowBattery_Alert()
#define  GET_PEPS_AuthFailWarning()    get_PEPS_AuthFailWarning()
#define  GET_PEPS_One_KeyStart_Swith_Error()    get_PEPS_One_KeyStart_Swith_Error()
#define  GET_PEPS_Press_Brake_Pedal_Alert()    get_PEPS_Press_Brake_Pedal_Alert()
#define  GET_PEPS_ESCLWarning()    get_PEPS_ESCLWarning()
#define  GET_PEPS_ETWS_Alert()    get_PEPS_ETWS_Alert()
#define  GET_PEPS_CID_Left_Alert()    get_PEPS_CID_Left_Alert()
#define  GET_PEPS_DOOR_Lock_Ig_NotOff_Alert()    get_PEPS_DOOR_Lock_Ig_NotOff_Alert()
#define  GET_PEPS_DOOR_Open_Lock_Alert()    get_PEPS_DOOR_Open_Lock_Alert()
#define  GET_PEPS_Key_Insid_Vehicle_Alert()    get_PEPS_Key_Insid_Vehicle_Alert()

typedef struct
{
    uint8  data[8];
    uint8  Bcm_0x4a0MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bcm_0x4a0NeverReceFlag;
 #endif

   uint8 BCM_4A0_HIGH_BEAM_LIGHT_CMD;
   uint8 BCM_4A0_LOW_BEAM_LIGHT_CMD;
   uint8 BCM_4A0_FRONT_POSITION_LAMP_CMD;
   uint8 BCM_4A0_FRONT_FOG_LAMP_CMD;
   uint8 BCM_4A0_REAR_FOG_LAMP_CMD;
   uint8 BCM_4A0_LEFT_TRUN_LIGHT_CMD;
   uint8 BCM_4A0_RIGHT_TRUN_LIGHT_CMD;
   uint8 BCM_4A0_EXTERIOR_LAMP_SWITCH;
   uint8 BCM_4A0_REAR_FOG_LAMP_SWITCH;
}bcm_0x4a0_struct;

extern   bcm_0x4a0_struct    bcm_0x4a0;
#define  GET_BCM_0X4A0_MISSING_FLAG()    get_bcm_0x4a0_missing_flag()

#if  NeverReceFlagEN
#define  GET_BCM_0X4A0_NEVER_RECE_FLAG()    get_bcm_0x4a0_never_reve_flag()
#endif

#define  GET_BCM_HIGH_BEAM_LIGHT_CMD()    get_BCM_HIGH_BEAM_LIGHT_CMD()
#define  GET_BCM_LOW_BEAM_LIGHT_CMD()    get_BCM_LOW_BEAM_LIGHT_CMD()
#define  GET_BCM_FRONT_POSITION_LAMP_CMD()    get_BCM_FRONT_POSITION_LAMP_CMD()
#define  GET_BCM_FRONT_FOG_LAMP_CMD()    get_BCM_FRONT_FOG_LAMP_CMD()
#define  GET_BCM_REAR_FOG_LAMP_CMD()    get_BCM_REAR_FOG_LAMP_CMD()
#define  GET_BCM_LEFT_TRUN_LIGHT_CMD()    get_BCM_LEFT_TRUN_LIGHT_CMD()
#define  GET_BCM_RIGHT_TRUN_LIGHT_CMD()    get_BCM_RIGHT_TRUN_LIGHT_CMD()
#define  GET_BCM_EXTERIOR_LAMP_SWITCH()    get_BCM_EXTERIOR_LAMP_SWITCH()
#define  GET_BCM_REAR_FOG_LAMP_SWITCH()    get_BCM_REAR_FOG_LAMP_SWITCH()

typedef struct
{
    uint8  data[8];
    uint8  Uec_0x4c9MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Uec_0x4c9NeverReceFlag;
 #endif

   uint8 UEC_4C9_Hs_HLBeam_Lamp_Left_Err;
   uint8 UEC_4C9_Hs_HLBeam_Light_Left_Err;
   uint8 UEC_4C9_Hs_HLBeam_Lamp_Right_Err;
   uint8 UEC_4C9_Hs_HLBeam_Light_Right_Err;
   uint8 UEC_4C9_Hs_HLBeam_FDSF_Err;
   uint8 UEC_4C9_Hs_Position_Lamp_Err;
   uint8 UEC_4C9_Hs_Daytime_Light_Left_Err;
   uint8 UEC_4C9_Hs_Daytime_Light_Right_Err;
   uint8 UEC_4C9_Hs_FrontFog_Light_Left_Err;
   uint8 UEC_4C9_Hs_FrontFog_Light_Right_Err;
   uint8 UEC_4C9_Hs_LR_Brake_Light_Err;
   uint8 UEC_4C9_Hs_High_Brake_Light_Err;
}uec_0x4c9_struct;

extern   uec_0x4c9_struct    uec_0x4c9;
#define  GET_UEC_0X4C9_MISSING_FLAG()    get_uec_0x4c9_missing_flag()

#if  NeverReceFlagEN
#define  GET_UEC_0X4C9_NEVER_RECE_FLAG()    get_uec_0x4c9_never_reve_flag()
#endif

#define  GET_UEC_Hs_HLBeam_Lamp_Left_Err()    get_UEC_Hs_HLBeam_Lamp_Left_Err()
#define  GET_UEC_Hs_HLBeam_Light_Left_Err()    get_UEC_Hs_HLBeam_Light_Left_Err()
#define  GET_UEC_Hs_HLBeam_Lamp_Right_Err()    get_UEC_Hs_HLBeam_Lamp_Right_Err()
#define  GET_UEC_Hs_HLBeam_Light_Right_Err()    get_UEC_Hs_HLBeam_Light_Right_Err()
#define  GET_UEC_Hs_HLBeam_FDSF_Err()    get_UEC_Hs_HLBeam_FDSF_Err()
#define  GET_UEC_Hs_Position_Lamp_Err()    get_UEC_Hs_Position_Lamp_Err()
#define  GET_UEC_Hs_Daytime_Light_Left_Err()    get_UEC_Hs_Daytime_Light_Left_Err()
#define  GET_UEC_Hs_Daytime_Light_Right_Err()    get_UEC_Hs_Daytime_Light_Right_Err()
#define  GET_UEC_Hs_FrontFog_Light_Left_Err()    get_UEC_Hs_FrontFog_Light_Left_Err()
#define  GET_UEC_Hs_FrontFog_Light_Right_Err()    get_UEC_Hs_FrontFog_Light_Right_Err()
#define  GET_UEC_Hs_LR_Brake_Light_Err()    get_UEC_Hs_LR_Brake_Light_Err()
#define  GET_UEC_Hs_High_Brake_Light_Err()    get_UEC_Hs_High_Brake_Light_Err()

typedef struct
{
    uint8  data[8];
    uint8  Peps_0x570MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Peps_0x570NeverReceFlag;
 #endif

   uint8 PEPS_570_Door_Lock_Cmd;
}peps_0x570_struct;

extern   peps_0x570_struct    peps_0x570;
#define  GET_PEPS_0X570_MISSING_FLAG()    get_peps_0x570_missing_flag()

#if  NeverReceFlagEN
#define  GET_PEPS_0X570_NEVER_RECE_FLAG()    get_peps_0x570_never_reve_flag()
#endif

#define  GET_PEPS_Door_Lock_Cmd()    get_PEPS_Door_Lock_Cmd()

typedef struct
{
    uint8  data[8];
    uint8  Icm_0x620MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_0x620NeverReceFlag;
 #endif

   uint8 ICM_620_DATA_VALID_ODO;
   uint8 ICM_620_ODOMETER_RESET_COUNTER;
    uint32 ICM_620_DISPLAYED_TOTAL_DISTANCE;
   uint8 ICM_620_ODOMETER_OFFSET;
}icm_0x620_struct;

extern   icm_0x620_struct    icm_0x620;
#define  GET_ICM_0X620_MISSING_FLAG()    get_icm_0x620_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_0X620_NEVER_RECE_FLAG()    get_icm_0x620_never_reve_flag()
#endif

#define  GET_ICM_DATA_VALID_ODO()    get_ICM_DATA_VALID_ODO()
#define  GET_ICM_ODOMETER_RESET_COUNTER()    get_ICM_ODOMETER_RESET_COUNTER()
#define  GET_ICM_DISPLAYED_TOTAL_DISTANCE()    get_ICM_DISPLAYED_TOTAL_DISTANCE()
#define  GET_ICM_ODOMETER_OFFSET()    get_ICM_ODOMETER_OFFSET()

typedef struct
{
    uint8  data[8];
    uint8  Bcm_0x660MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bcm_0x660NeverReceFlag;
 #endif

   uint8 BCM_660_FD_DOOR_STS;
   uint8 BCM_660_FP_DOOR_STS;
   uint8 BCM_660_FOLLOW_ME_HOME_STS;
   uint8 BCM_660_TRUNK_STA;
}bcm_0x660_struct;

extern   bcm_0x660_struct    bcm_0x660;
#define  GET_BCM_0X660_MISSING_FLAG()    get_bcm_0x660_missing_flag()

#if  NeverReceFlagEN
#define  GET_BCM_0X660_NEVER_RECE_FLAG()    get_bcm_0x660_never_reve_flag()
#endif

#define  GET_BCM_FD_DOOR_STS()    get_BCM_FD_DOOR_STS()
#define  GET_BCM_FP_DOOR_STS()    get_BCM_FP_DOOR_STS()
#define  GET_BCM_FOLLOW_ME_HOME_STS()    get_BCM_FOLLOW_ME_HOME_STS()
#define  GET_BCM_TRUNK_STA()    get_BCM_TRUNK_STA()

typedef struct
{
    uint8  data[8];
    uint8  Bcm_0x661MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bcm_0x661NeverReceFlag;
 #endif

   uint8 BCM_661_EB_ODO_VALID;
   uint8 BCM_661_ODOMETER_RESET_COUNTER;
    uint32 BCM_661_EB_ODO_DISTANCE;
   uint8 BCM_661_ODOMETER_OFFSET;
}bcm_0x661_struct;

extern   bcm_0x661_struct    bcm_0x661;
#define  GET_BCM_0X661_MISSING_FLAG()    get_bcm_0x661_missing_flag()

#if  NeverReceFlagEN
#define  GET_BCM_0X661_NEVER_RECE_FLAG()    get_bcm_0x661_never_reve_flag()
#endif

#define  GET_BCM_EB_ODO_VALID()    get_BCM_EB_ODO_VALID()
#define  GET_BCM_ODOMETER_RESET_COUNTER()    get_BCM_ODOMETER_RESET_COUNTER()
#define  GET_BCM_EB_ODO_DISTANCE()    get_BCM_EB_ODO_DISTANCE()
#define  GET_BCM_ODOMETER_OFFSET()    get_BCM_ODOMETER_OFFSET()

typedef struct
{
    uint8  data[8];
    uint8  Rms_0x6f2MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Rms_0x6f2NeverReceFlag;
 #endif

   uint8 RMS_6F2_YEAR_TIME;
   uint8 RMS_6F2_MONTH_TIME;
   uint8 RMS_6F2_DAY_TIME;
   uint8 RMS_6F2_HOUR_TIME;
   uint8 RMS_6F2_MINUTE_TIME;
}rms_0x6f2_struct;

extern   rms_0x6f2_struct    rms_0x6f2;
#define  GET_RMS_0X6F2_MISSING_FLAG()    get_rms_0x6f2_missing_flag()

#if  NeverReceFlagEN
#define  GET_RMS_0X6F2_NEVER_RECE_FLAG()    get_rms_0x6f2_never_reve_flag()
#endif

#define  GET_RMS_YEAR_TIME()    get_RMS_YEAR_TIME()
#define  GET_RMS_MONTH_TIME()    get_RMS_MONTH_TIME()
#define  GET_RMS_DAY_TIME()    get_RMS_DAY_TIME()
#define  GET_RMS_HOUR_TIME()    get_RMS_HOUR_TIME()
#define  GET_RMS_MINUTE_TIME()    get_RMS_MINUTE_TIME()
