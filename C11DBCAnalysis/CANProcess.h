/*****************************************************************************
**  Project       BAIC C11 Cluster Project
**  (c) copyright 2016
**  Company       O-film
**                All rights reserved
**  Secrecy Level STRICTLY CONFIDENTIAL
*******************************************************************************
**
**          File  : CANProcess.h
**          Author: niujianlong
**
**          Date  : 2016-08-07 19:01:14
**          Description: modified by the open software
**          Warning :This file generated by tool don't modify it manually.
**          version: V_0_1
**
******************************************************************************/

#ifndef CANPROCESS_H
#define CANPROCESS_H


#include "common.h"
#include "s_typedef.h"
#include "CANService.h"

#ifdef   CANPROCESS_C 
#define  EXTERN
#else
#define  EXTERN    extern
#endif
/*************************************************************************
**                       CAN Frame struct Declaration                   **
**************************************************************************/

/*frame 0x212 struct define*/
typedef struct
{
   uint8  Vcu_0x212UpdatedFlag;
   uint8  Vcu_0x212NeverReceFlag;
   uint8  Vcu_0x212MissingFlag;
   uint8  data[8];

   uint8  VCU_212_SHIFT_POSITON;
   uint8  VCU_212_SHIFT_ERROR_OP;
}vcu_0x212_struct;

EXTERN   vcu_0x212_struct    vcu_0x212;
#define  GET_VCU_0X212_MISSING_FLAG()    (vcu_0x212.Vcu_0x212MissingFlag)
#define  GET_VCU_0X212_NEVER_RECE_FLAG() (vcu_0x212.Vcu_0x212NeverReceFlag)
#define  GET_VCU_SHIFT_POSITON()    (vcu_0x212.VCU_212_SHIFT_POSITON)
#define  GET_VCU_SHIFT_ERROR_OP()    (vcu_0x212.VCU_212_SHIFT_ERROR_OP)

/*frame 0x214 struct define*/
typedef struct
{
   uint8  Vcu_0x214UpdatedFlag;
   uint8  Vcu_0x214NeverReceFlag;
   uint8  Vcu_0x214MissingFlag;
   uint8  data[8];

   uint16  VCU_214_VEH_STATE;
}vcu_0x214_struct;

EXTERN   vcu_0x214_struct    vcu_0x214;
#define  GET_VCU_0X214_MISSING_FLAG()    (vcu_0x214.Vcu_0x214MissingFlag)
#define  GET_VCU_0X214_NEVER_RECE_FLAG() (vcu_0x214.Vcu_0x214NeverReceFlag)
#define  GET_VCU_VEH_STATE()    (vcu_0x214.VCU_214_VEH_STATE)

/*frame 0x230 struct define*/
typedef struct
{
   uint8  Mcu_0x230UpdatedFlag;
   uint8  Mcu_0x230NeverReceFlag;
   uint8  Mcu_0x230MissingFlag;
   uint8  data[8];

   uint8  MCU_230_SYS_FAULT_LAMP;
   uint8  MCU_230_BRAKE_ENGERY_RECOV_STA;
   uint8  MCU_230_MOT_FAULT_LAMP;
   uint8  MCU_230_FAULT_ALARM;
   uint8  MCU_230_LIMP_LAMP;
   uint8  MCU_230_MOT_TEMP_H_IND;
   uint8  MCU_230_MOT_FAULT_IND;
   uint8  MCU_230_MOT_SYS_TEMP_HIGH_LAMP;
   uint8  MCU_230_MCU_PWR_PENT;
}mcu_0x230_struct;

EXTERN   mcu_0x230_struct    mcu_0x230;
#define  GET_MCU_0X230_MISSING_FLAG()    (mcu_0x230.Mcu_0x230MissingFlag)
#define  GET_MCU_0X230_NEVER_RECE_FLAG() (mcu_0x230.Mcu_0x230NeverReceFlag)
#define  GET_MCU_SYS_FAULT_LAMP()    (mcu_0x230.MCU_230_SYS_FAULT_LAMP)
#define  GET_MCU_BRAKE_ENGERY_RECOV_STA()    (mcu_0x230.MCU_230_BRAKE_ENGERY_RECOV_STA)
#define  GET_MCU_MOT_FAULT_LAMP()    (mcu_0x230.MCU_230_MOT_FAULT_LAMP)
#define  GET_MCU_FAULT_ALARM()    (mcu_0x230.MCU_230_FAULT_ALARM)
#define  GET_MCU_LIMP_LAMP()    (mcu_0x230.MCU_230_LIMP_LAMP)
#define  GET_MCU_MOT_TEMP_H_IND()    (mcu_0x230.MCU_230_MOT_TEMP_H_IND)
#define  GET_MCU_MOT_FAULT_IND()    (mcu_0x230.MCU_230_MOT_FAULT_IND)
#define  GET_MCU_MOT_SYS_TEMP_HIGH_LAMP()    (mcu_0x230.MCU_230_MOT_SYS_TEMP_HIGH_LAMP)
#define  GET_MCU_MCU_PWR_PENT()    (mcu_0x230.MCU_230_MCU_PWR_PENT)

/*frame 0x318 struct define*/
typedef struct
{
   uint8  Abs_0x318UpdatedFlag;
   uint8  Abs_0x318NeverReceFlag;
   uint8  Abs_0x318MissingFlag;
   uint8  data[8];

   uint8  ABS_318_ABSActive;
   uint8  ABS_318_ABSFail;
   uint8  ABS_318_EBDFail;
}abs_0x318_struct;

EXTERN   abs_0x318_struct    abs_0x318;
#define  GET_ABS_0X318_MISSING_FLAG()    (abs_0x318.Abs_0x318MissingFlag)
#define  GET_ABS_0X318_NEVER_RECE_FLAG() (abs_0x318.Abs_0x318NeverReceFlag)
#define  GET_ABS_ABSActive()    (abs_0x318.ABS_318_ABSActive)
#define  GET_ABS_ABSFail()    (abs_0x318.ABS_318_ABSFail)
#define  GET_ABS_EBDFail()    (abs_0x318.ABS_318_EBDFail)

/*frame 0x430 struct define*/
typedef struct
{
   uint8  Mcu_0x430UpdatedFlag;
   uint8  Mcu_0x430NeverReceFlag;
   uint8  Mcu_0x430MissingFlag;
   uint8  data[8];

   uint16  MCU_430_MOT_SPD;
}mcu_0x430_struct;

EXTERN   mcu_0x430_struct    mcu_0x430;
#define  GET_MCU_0X430_MISSING_FLAG()    (mcu_0x430.Mcu_0x430MissingFlag)
#define  GET_MCU_0X430_NEVER_RECE_FLAG() (mcu_0x430.Mcu_0x430NeverReceFlag)
#define  GET_MCU_MOT_SPD()    (mcu_0x430.MCU_430_MOT_SPD)

/*frame 0x450 struct define*/
typedef struct
{
   uint8  Bms_0x450UpdatedFlag;
   uint8  Bms_0x450NeverReceFlag;
   uint8  Bms_0x450MissingFlag;
   uint8  data[8];

   uint8  BMS_450_BATT_SOC;
}bms_0x450_struct;

EXTERN   bms_0x450_struct    bms_0x450;
#define  GET_BMS_0X450_MISSING_FLAG()    (bms_0x450.Bms_0x450MissingFlag)
#define  GET_BMS_0X450_NEVER_RECE_FLAG() (bms_0x450.Bms_0x450NeverReceFlag)
#define  GET_BMS_BATT_SOC()    (bms_0x450.BMS_450_BATT_SOC)

/*frame 0x451 struct define*/
typedef struct
{
   uint8  Bms_0x451UpdatedFlag;
   uint8  Bms_0x451NeverReceFlag;
   uint8  Bms_0x451MissingFlag;
   uint8  data[8];

   uint16  BMS_451_BATT_CUR;
   uint16  BMS_451_BATT_VOLT_V2;
}bms_0x451_struct;

EXTERN   bms_0x451_struct    bms_0x451;
#define  GET_BMS_0X451_MISSING_FLAG()    (bms_0x451.Bms_0x451MissingFlag)
#define  GET_BMS_0X451_NEVER_RECE_FLAG() (bms_0x451.Bms_0x451NeverReceFlag)
#define  GET_BMS_BATT_CUR()    (bms_0x451.BMS_451_BATT_CUR)
#define  GET_BMS_BATT_VOLT_V2()    (bms_0x451.BMS_451_BATT_VOLT_V2)

/*frame 0x470 struct define*/
typedef struct
{
   uint8  Eps_0x470UpdatedFlag;
   uint8  Eps_0x470NeverReceFlag;
   uint8  Eps_0x470MissingFlag;
   uint8  data[8];

   uint8  EPS_470_EPS_STA;
}eps_0x470_struct;

EXTERN   eps_0x470_struct    eps_0x470;
#define  GET_EPS_0X470_MISSING_FLAG()    (eps_0x470.Eps_0x470MissingFlag)
#define  GET_EPS_0X470_NEVER_RECE_FLAG() (eps_0x470.Eps_0x470NeverReceFlag)
#define  GET_EPS_EPS_STA()    (eps_0x470.EPS_470_EPS_STA)

/*frame 0x4c8 struct define*/
typedef struct
{
   uint8  Epb_0x4c8UpdatedFlag;
   uint8  Epb_0x4c8NeverReceFlag;
   uint8  Epb_0x4c8MissingFlag;
   uint8  data[8];

   uint8  EPB_4C8_EPB_ParkLampState;
   uint8  EPB_4C8_EPB_WarningLampState;
}epb_0x4c8_struct;

EXTERN   epb_0x4c8_struct    epb_0x4c8;
#define  GET_EPB_0X4C8_MISSING_FLAG()    (epb_0x4c8.Epb_0x4c8MissingFlag)
#define  GET_EPB_0X4C8_NEVER_RECE_FLAG() (epb_0x4c8.Epb_0x4c8NeverReceFlag)
#define  GET_EPB_EPB_ParkLampState()    (epb_0x4c8.EPB_4C8_EPB_ParkLampState)
#define  GET_EPB_EPB_WarningLampState()    (epb_0x4c8.EPB_4C8_EPB_WarningLampState)

/*frame 0x4e0 struct define*/
typedef struct
{
   uint8  Ecc_0x4e0UpdatedFlag;
   uint8  Ecc_0x4e0NeverReceFlag;
   uint8  Ecc_0x4e0MissingFlag;
   uint8  data[8];

   uint8  ECC_4E0_OUT_TEMP;
}ecc_0x4e0_struct;

EXTERN   ecc_0x4e0_struct    ecc_0x4e0;
#define  GET_ECC_0X4E0_MISSING_FLAG()    (ecc_0x4e0.Ecc_0x4e0MissingFlag)
#define  GET_ECC_0X4E0_NEVER_RECE_FLAG() (ecc_0x4e0.Ecc_0x4e0NeverReceFlag)
#define  GET_ECC_OUT_TEMP()    (ecc_0x4e0.ECC_4E0_OUT_TEMP)

/*frame 0x585 struct define*/
typedef struct
{
   uint8  Ehu_0x585UpdatedFlag;
   uint8  Ehu_0x585NeverReceFlag;
   uint8  Ehu_0x585MissingFlag;
   uint8  data[8];

   uint8  EHU_585_EHU_Theme;
   uint8  EHU_585_EHU_State;
}ehu_0x585_struct;

EXTERN   ehu_0x585_struct    ehu_0x585;
#define  GET_EHU_0X585_MISSING_FLAG()    (ehu_0x585.Ehu_0x585MissingFlag)
#define  GET_EHU_0X585_NEVER_RECE_FLAG() (ehu_0x585.Ehu_0x585NeverReceFlag)
#define  GET_EHU_EHU_Theme()    (ehu_0x585.EHU_585_EHU_Theme)
#define  GET_EHU_EHU_State()    (ehu_0x585.EHU_585_EHU_State)

/*frame 0x611 struct define*/
typedef struct
{
   uint8  Vcu_0x611UpdatedFlag;
   uint8  Vcu_0x611NeverReceFlag;
   uint8  Vcu_0x611MissingFlag;
   uint8  data[8];

   uint8  VCU_611_READY_LAMP;
   uint8  VCU_611_BATT_PWRON;
   uint8  VCU_611_OBC_ERR_IND;
   uint8  VCU_611_FAULT_ALARM;
   uint8  VCU_611_CHARG_CONNECT_LAMP;
   uint8  VCU_611_Batt_FAULT_IND;
   uint8  VCU_611_LIMP_LAMP;
   uint8  VCU_611_VEH_INSULATION_FAULT_IND;
   uint8  VCU_611_BATT_FAULT_IND;
   uint8  VCU_611_BRAKE_FAULT_IND;
   uint8  VCU_611_N_START_REQ;
   uint8  VCU_611_BATT_FAULT_LAMP;
   uint8  VCU_611_OBC_REMIND_LAMP;
}vcu_0x611_struct;

EXTERN   vcu_0x611_struct    vcu_0x611;
#define  GET_VCU_0X611_MISSING_FLAG()    (vcu_0x611.Vcu_0x611MissingFlag)
#define  GET_VCU_0X611_NEVER_RECE_FLAG() (vcu_0x611.Vcu_0x611NeverReceFlag)
#define  GET_VCU_READY_LAMP()    (vcu_0x611.VCU_611_READY_LAMP)
#define  GET_VCU_BATT_PWRON()    (vcu_0x611.VCU_611_BATT_PWRON)
#define  GET_VCU_OBC_ERR_IND()    (vcu_0x611.VCU_611_OBC_ERR_IND)
#define  GET_VCU_FAULT_ALARM()    (vcu_0x611.VCU_611_FAULT_ALARM)
#define  GET_VCU_CHARG_CONNECT_LAMP()    (vcu_0x611.VCU_611_CHARG_CONNECT_LAMP)
#define  GET_VCU_Batt_FAULT_IND()    (vcu_0x611.VCU_611_Batt_FAULT_IND)
#define  GET_VCU_LIMP_LAMP()    (vcu_0x611.VCU_611_LIMP_LAMP)
#define  GET_VCU_VEH_INSULATION_FAULT_IND()    (vcu_0x611.VCU_611_VEH_INSULATION_FAULT_IND)
#define  GET_VCU_BATT_FAULT_IND()    (vcu_0x611.VCU_611_BATT_FAULT_IND)
#define  GET_VCU_BRAKE_FAULT_IND()    (vcu_0x611.VCU_611_BRAKE_FAULT_IND)
#define  GET_VCU_N_START_REQ()    (vcu_0x611.VCU_611_N_START_REQ)
#define  GET_VCU_BATT_FAULT_LAMP()    (vcu_0x611.VCU_611_BATT_FAULT_LAMP)
#define  GET_VCU_OBC_REMIND_LAMP()    (vcu_0x611.VCU_611_OBC_REMIND_LAMP)

/*frame 0x615 struct define*/
typedef struct
{
   uint8  Vcu_0x615UpdatedFlag;
   uint8  Vcu_0x615NeverReceFlag;
   uint8  Vcu_0x615MissingFlag;
   uint8  data[8];

   uint16  VCU_615_ENERGY_CONSUM_AV;
}vcu_0x615_struct;

EXTERN   vcu_0x615_struct    vcu_0x615;
#define  GET_VCU_0X615_MISSING_FLAG()    (vcu_0x615.Vcu_0x615MissingFlag)
#define  GET_VCU_0X615_NEVER_RECE_FLAG() (vcu_0x615.Vcu_0x615NeverReceFlag)
#define  GET_VCU_ENERGY_CONSUM_AV()    (vcu_0x615.VCU_615_ENERGY_CONSUM_AV)

/*frame 0x616 struct define*/
typedef struct
{
   uint8  Vcu_0x616UpdatedFlag;
   uint8  Vcu_0x616NeverReceFlag;
   uint8  Vcu_0x616MissingFlag;
   uint8  data[8];

   uint16  VCU_616_DRIVE_RANGE;
}vcu_0x616_struct;

EXTERN   vcu_0x616_struct    vcu_0x616;
#define  GET_VCU_0X616_MISSING_FLAG()    (vcu_0x616.Vcu_0x616MissingFlag)
#define  GET_VCU_0X616_NEVER_RECE_FLAG() (vcu_0x616.Vcu_0x616NeverReceFlag)
#define  GET_VCU_DRIVE_RANGE()    (vcu_0x616.VCU_616_DRIVE_RANGE)

/*frame 0x617 struct define*/
typedef struct
{
   uint8  Vcu_0x617UpdatedFlag;
   uint8  Vcu_0x617NeverReceFlag;
   uint8  Vcu_0x617MissingFlag;
   uint8  data[8];

   uint8  VCU_617_SYS_FAULT_LAMP;
   uint8  VCU_617_BRAKE_ENGERY_RECOV_LEVEL;
   uint8  VCU_617_OBC_SOON;
   uint16  VCU_617_VEH_SPD;
   uint16  VCU_617_ENERGY_CONSUM_IN;
}vcu_0x617_struct;

EXTERN   vcu_0x617_struct    vcu_0x617;
#define  GET_VCU_0X617_MISSING_FLAG()    (vcu_0x617.Vcu_0x617MissingFlag)
#define  GET_VCU_0X617_NEVER_RECE_FLAG() (vcu_0x617.Vcu_0x617NeverReceFlag)
#define  GET_VCU_SYS_FAULT_LAMP()    (vcu_0x617.VCU_617_SYS_FAULT_LAMP)
#define  GET_VCU_BRAKE_ENGERY_RECOV_LEVEL()    (vcu_0x617.VCU_617_BRAKE_ENGERY_RECOV_LEVEL)
#define  GET_VCU_OBC_SOON()    (vcu_0x617.VCU_617_OBC_SOON)
#define  GET_VCU_VEH_SPD()    (vcu_0x617.VCU_617_VEH_SPD)
#define  GET_VCU_ENERGY_CONSUM_IN()    (vcu_0x617.VCU_617_ENERGY_CONSUM_IN)

/*frame 0x61d struct define*/
typedef struct
{
   uint8  Vcu_0x61dUpdatedFlag;
   uint8  Vcu_0x61dNeverReceFlag;
   uint8  Vcu_0x61dMissingFlag;
   uint8  data[8];

   uint8  VCU_61D_CHG_STATE;
   uint8  VCU_61D_BATT_HEAT_STA;
}vcu_0x61d_struct;

EXTERN   vcu_0x61d_struct    vcu_0x61d;
#define  GET_VCU_0X61D_MISSING_FLAG()    (vcu_0x61d.Vcu_0x61dMissingFlag)
#define  GET_VCU_0X61D_NEVER_RECE_FLAG() (vcu_0x61d.Vcu_0x61dNeverReceFlag)
#define  GET_VCU_CHG_STATE()    (vcu_0x61d.VCU_61D_CHG_STATE)
#define  GET_VCU_BATT_HEAT_STA()    (vcu_0x61d.VCU_61D_BATT_HEAT_STA)

/*frame 0x1b0 struct define*/
typedef struct
{
   uint8  Pdc_0x1b0UpdatedFlag;
   uint8  Pdc_0x1b0NeverReceFlag;
   uint8  Pdc_0x1b0MissingFlag;
   uint8  data[8];

   uint8  PDC_1B0_SYSTEM_STATUS;
   uint8  PDC_1B0_SYSTEM_ALARM_LEVEL;
   uint8  PDC_1B0_MRL_OBSTACLE_DIS;
   uint8  PDC_1B0_RL_OBSTACLE_DIS;
   uint8  PDC_1B0_RR_OBSTACLE_DIS;
   uint8  PDC_1B0_OBSTACLE_DIS_MIN;
}pdc_0x1b0_struct;

EXTERN   pdc_0x1b0_struct    pdc_0x1b0;
#define  GET_PDC_0X1B0_MISSING_FLAG()    (pdc_0x1b0.Pdc_0x1b0MissingFlag)
#define  GET_PDC_0X1B0_NEVER_RECE_FLAG() (pdc_0x1b0.Pdc_0x1b0NeverReceFlag)
#define  GET_PDC_SYSTEM_STATUS()    (pdc_0x1b0.PDC_1B0_SYSTEM_STATUS)
#define  GET_PDC_SYSTEM_ALARM_LEVEL()    (pdc_0x1b0.PDC_1B0_SYSTEM_ALARM_LEVEL)
#define  GET_PDC_MRL_OBSTACLE_DIS()    (pdc_0x1b0.PDC_1B0_MRL_OBSTACLE_DIS)
#define  GET_PDC_RL_OBSTACLE_DIS()    (pdc_0x1b0.PDC_1B0_RL_OBSTACLE_DIS)
#define  GET_PDC_RR_OBSTACLE_DIS()    (pdc_0x1b0.PDC_1B0_RR_OBSTACLE_DIS)
#define  GET_PDC_OBSTACLE_DIS_MIN()    (pdc_0x1b0.PDC_1B0_OBSTACLE_DIS_MIN)

/*frame 0x214 struct define*/
typedef struct
{
   uint8  Vcu_0x214UpdatedFlag;
   uint8  Vcu_0x214NeverReceFlag;
   uint8  Vcu_0x214MissingFlag;
   uint8  data[8];

   uint16  VCU_214_VEH_STATE;
}vbus_vcu_0x214_struct;

EXTERN   vbus_vcu_0x214_struct    vbus_vcu_0x214;
#define  GET_VBUS_VCU_0X214_MISSING_FLAG()    (vbus_vcu_0x214.Vcu_0x214MissingFlag)
#define  GET_VBUS_VCU_0X214_NEVER_RECE_FLAG() (vbus_vcu_0x214.Vcu_0x214NeverReceFlag)
#define  GET_VBUS_VCU_VEH_STATE()    (vbus_vcu_0x214.VCU_214_VEH_STATE)

/*frame 0x230 struct define*/
typedef struct
{
   uint8  Mcu_0x230UpdatedFlag;
   uint8  Mcu_0x230NeverReceFlag;
   uint8  Mcu_0x230MissingFlag;
   uint8  data[8];

   uint8  MCU_230_ASR_OFF_LAMP;
   uint8  MCU_230_ASR_EN_LAMP;
}vbus_mcu_0x230_struct;

EXTERN   vbus_mcu_0x230_struct    vbus_mcu_0x230;
#define  GET_VBUS_MCU_0X230_MISSING_FLAG()    (vbus_mcu_0x230.Mcu_0x230MissingFlag)
#define  GET_VBUS_MCU_0X230_NEVER_RECE_FLAG() (vbus_mcu_0x230.Mcu_0x230NeverReceFlag)
#define  GET_VBUS_MCU_ASR_OFF_LAMP()    (vbus_mcu_0x230.MCU_230_ASR_OFF_LAMP)
#define  GET_VBUS_MCU_ASR_EN_LAMP()    (vbus_mcu_0x230.MCU_230_ASR_EN_LAMP)

/*frame 0x2a0 struct define*/
typedef struct
{
   uint8  Tpms_0x2a0UpdatedFlag;
   uint8  Tpms_0x2a0NeverReceFlag;
   uint8  Tpms_0x2a0MissingFlag;
   uint8  data[8];

   uint8  TPMS_2A0_TIRE_POSITION;
   uint8  TPMS_2A0_SIGNAL_TIRE_STATUS;
   uint8  TPMS_2A0_SYSTEM_STATUS;
   uint8  TPMS_2A0_SIGNAL_TIRE_LEAK_STATUS;
   uint8  TPMS_2A0_SIGNAL_TIRE_PRESSURE_STATUS;
   uint8  TPMS_2A0_SIGNAL_TIRE_TEMPERATURE;
   uint8  TPMS_2A0_SIGNAL_SENSOR_SOC_STATUS;
   uint16  TPMS_2A0_SIGNAL_TIRE_PRESSURE;
   uint16  TPMS_2A0_SIGNAL_TIRE_TEMPERATURE_VEL;
   uint8  TPMS_2A0_SIGNAL_SENSOR_SOC;
   uint8  TPMS_2A0_ALARM_STATUS;
}tpms_0x2a0_struct;

EXTERN   tpms_0x2a0_struct    tpms_0x2a0;
#define  GET_TPMS_0X2A0_MISSING_FLAG()    (tpms_0x2a0.Tpms_0x2a0MissingFlag)
#define  GET_TPMS_0X2A0_NEVER_RECE_FLAG() (tpms_0x2a0.Tpms_0x2a0NeverReceFlag)
#define  GET_TPMS_TIRE_POSITION()    (tpms_0x2a0.TPMS_2A0_TIRE_POSITION)
#define  GET_TPMS_SIGNAL_TIRE_STATUS()    (tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_STATUS)
#define  GET_TPMS_SYSTEM_STATUS()    (tpms_0x2a0.TPMS_2A0_SYSTEM_STATUS)
#define  GET_TPMS_SIGNAL_TIRE_LEAK_STATUS()    (tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_LEAK_STATUS)
#define  GET_TPMS_SIGNAL_TIRE_PRESSURE_STATUS()    (tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_PRESSURE_STATUS)
#define  GET_TPMS_SIGNAL_TIRE_TEMPERATURE()    (tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_TEMPERATURE)
#define  GET_TPMS_SIGNAL_SENSOR_SOC_STATUS()    (tpms_0x2a0.TPMS_2A0_SIGNAL_SENSOR_SOC_STATUS)
#define  GET_TPMS_SIGNAL_TIRE_PRESSURE()    (tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_PRESSURE)
#define  GET_TPMS_SIGNAL_TIRE_TEMPERATURE_VEL()    (tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_TEMPERATURE_VEL)
#define  GET_TPMS_SIGNAL_SENSOR_SOC()    (tpms_0x2a0.TPMS_2A0_SIGNAL_SENSOR_SOC)
#define  GET_TPMS_ALARM_STATUS()    (tpms_0x2a0.TPMS_2A0_ALARM_STATUS)

/*frame 0x479 struct define*/
typedef struct
{
   uint8  Peps_0x479UpdatedFlag;
   uint8  Peps_0x479NeverReceFlag;
   uint8  Peps_0x479MissingFlag;
   uint8  data[8];

   uint8  PEPS_479_POWER_MODE;
   uint8  PEPS_479_RM_Key_LowBattery_Alert;
   uint8  PEPS_479_AuthFailWarning;
   uint8  PEPS_479_One_KeyStart_Swith_Error;
   uint8  PEPS_479_Press_Brake_Pedal_Alert;
   uint8  PEPS_479_ESCLWarning;
   uint8  PEPS_479_ETWS_Alert;
   uint8  PEPS_479_CID_Left_Alert;
   uint8  PEPS_479_DOOR_Lock_Ig_NotOff_Alert;
   uint8  PEPS_479_DOOR_Open_Lock_Alert;
   uint8  PEPS_479_Key_Insid_Vehicle_Alert;
}peps_0x479_struct;

EXTERN   peps_0x479_struct    peps_0x479;
#define  GET_PEPS_0X479_MISSING_FLAG()    (peps_0x479.Peps_0x479MissingFlag)
#define  GET_PEPS_0X479_NEVER_RECE_FLAG() (peps_0x479.Peps_0x479NeverReceFlag)
#define  GET_PEPS_POWER_MODE()    (peps_0x479.PEPS_479_POWER_MODE)
#define  GET_PEPS_RM_Key_LowBattery_Alert()    (peps_0x479.PEPS_479_RM_Key_LowBattery_Alert)
#define  GET_PEPS_AuthFailWarning()    (peps_0x479.PEPS_479_AuthFailWarning)
#define  GET_PEPS_One_KeyStart_Swith_Error()    (peps_0x479.PEPS_479_One_KeyStart_Swith_Error)
#define  GET_PEPS_Press_Brake_Pedal_Alert()    (peps_0x479.PEPS_479_Press_Brake_Pedal_Alert)
#define  GET_PEPS_ESCLWarning()    (peps_0x479.PEPS_479_ESCLWarning)
#define  GET_PEPS_ETWS_Alert()    (peps_0x479.PEPS_479_ETWS_Alert)
#define  GET_PEPS_CID_Left_Alert()    (peps_0x479.PEPS_479_CID_Left_Alert)
#define  GET_PEPS_DOOR_Lock_Ig_NotOff_Alert()    (peps_0x479.PEPS_479_DOOR_Lock_Ig_NotOff_Alert)
#define  GET_PEPS_DOOR_Open_Lock_Alert()    (peps_0x479.PEPS_479_DOOR_Open_Lock_Alert)
#define  GET_PEPS_Key_Insid_Vehicle_Alert()    (peps_0x479.PEPS_479_Key_Insid_Vehicle_Alert)

/*frame 0x4a0 struct define*/
typedef struct
{
   uint8  Bcm_0x4a0UpdatedFlag;
   uint8  Bcm_0x4a0NeverReceFlag;
   uint8  Bcm_0x4a0MissingFlag;
   uint8  data[8];

   uint8  BCM_4A0_HIGH_BEAM_LIGHT_CMD;
   uint8  BCM_4A0_LOW_BEAM_LIGHT_CMD;
   uint8  BCM_4A0_FRONT_POSITION_LAMP_CMD;
   uint8  BCM_4A0_FRONT_FOG_LAMP_CMD;
   uint8  BCM_4A0_REAR_FOG_LAMP_CMD;
   uint8  BCM_4A0_LEFT_TRUN_LIGHT_CMD;
   uint8  BCM_4A0_RIGHT_TRUN_LIGHT_CMD;
   uint8  BCM_4A0_EXTERIOR_LAMP_SWITCH;
}bcm_0x4a0_struct;

EXTERN   bcm_0x4a0_struct    bcm_0x4a0;
#define  GET_BCM_0X4A0_MISSING_FLAG()    (bcm_0x4a0.Bcm_0x4a0MissingFlag)
#define  GET_BCM_0X4A0_NEVER_RECE_FLAG() (bcm_0x4a0.Bcm_0x4a0NeverReceFlag)
#define  GET_BCM_HIGH_BEAM_LIGHT_CMD()    (bcm_0x4a0.BCM_4A0_HIGH_BEAM_LIGHT_CMD)
#define  GET_BCM_LOW_BEAM_LIGHT_CMD()    (bcm_0x4a0.BCM_4A0_LOW_BEAM_LIGHT_CMD)
#define  GET_BCM_FRONT_POSITION_LAMP_CMD()    (bcm_0x4a0.BCM_4A0_FRONT_POSITION_LAMP_CMD)
#define  GET_BCM_FRONT_FOG_LAMP_CMD()    (bcm_0x4a0.BCM_4A0_FRONT_FOG_LAMP_CMD)
#define  GET_BCM_REAR_FOG_LAMP_CMD()    (bcm_0x4a0.BCM_4A0_REAR_FOG_LAMP_CMD)
#define  GET_BCM_LEFT_TRUN_LIGHT_CMD()    (bcm_0x4a0.BCM_4A0_LEFT_TRUN_LIGHT_CMD)
#define  GET_BCM_RIGHT_TRUN_LIGHT_CMD()    (bcm_0x4a0.BCM_4A0_RIGHT_TRUN_LIGHT_CMD)
#define  GET_BCM_EXTERIOR_LAMP_SWITCH()    (bcm_0x4a0.BCM_4A0_EXTERIOR_LAMP_SWITCH)

/*frame 0x4c9 struct define*/
typedef struct
{
   uint8  Uec_0x4c9UpdatedFlag;
   uint8  Uec_0x4c9NeverReceFlag;
   uint8  Uec_0x4c9MissingFlag;
   uint8  data[8];

   uint8  UEC_4C9_Hs_HLBeam_Lamp_Left_Err;
   uint8  UEC_4C9_Hs_HLBeam_Light_Left_Err;
   uint8  UEC_4C9_Hs_HLBeam_Lamp_Right_Err;
   uint8  UEC_4C9_Hs_HLBeam_Light_Right_Err;
   uint8  UEC_4C9_Hs_HLBeam_FDSF_Err;
   uint8  UEC_4C9_Hs_Position_Lamp_Err;
   uint8  UEC_4C9_Hs_Daytime_Light_Left_Err;
   uint8  UEC_4C9_Hs_Daytime_Light_Right_Err;
   uint8  UEC_4C9_Hs_FrontFog_Light_Left_Err;
   uint8  UEC_4C9_Hs_FrontFog_Light_Right_Err;
   uint8  UEC_4C9_Hs_LR_Brake_Light_Err;
   uint8  UEC_4C9_Hs_High_Brake_Light_Err;
}uec_0x4c9_struct;

EXTERN   uec_0x4c9_struct    uec_0x4c9;
#define  GET_UEC_0X4C9_MISSING_FLAG()    (uec_0x4c9.Uec_0x4c9MissingFlag)
#define  GET_UEC_0X4C9_NEVER_RECE_FLAG() (uec_0x4c9.Uec_0x4c9NeverReceFlag)
#define  GET_UEC_Hs_HLBeam_Lamp_Left_Err()    (uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Left_Err)
#define  GET_UEC_Hs_HLBeam_Light_Left_Err()    (uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Left_Err)
#define  GET_UEC_Hs_HLBeam_Lamp_Right_Err()    (uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Right_Err)
#define  GET_UEC_Hs_HLBeam_Light_Right_Err()    (uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Right_Err)
#define  GET_UEC_Hs_HLBeam_FDSF_Err()    (uec_0x4c9.UEC_4C9_Hs_HLBeam_FDSF_Err)
#define  GET_UEC_Hs_Position_Lamp_Err()    (uec_0x4c9.UEC_4C9_Hs_Position_Lamp_Err)
#define  GET_UEC_Hs_Daytime_Light_Left_Err()    (uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Left_Err)
#define  GET_UEC_Hs_Daytime_Light_Right_Err()    (uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Right_Err)
#define  GET_UEC_Hs_FrontFog_Light_Left_Err()    (uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Left_Err)
#define  GET_UEC_Hs_FrontFog_Light_Right_Err()    (uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Right_Err)
#define  GET_UEC_Hs_LR_Brake_Light_Err()    (uec_0x4c9.UEC_4C9_Hs_LR_Brake_Light_Err)
#define  GET_UEC_Hs_High_Brake_Light_Err()    (uec_0x4c9.UEC_4C9_Hs_High_Brake_Light_Err)

/*frame 0x570 struct define*/
typedef struct
{
   uint8  Peps_0x570UpdatedFlag;
   uint8  Peps_0x570NeverReceFlag;
   uint8  Peps_0x570MissingFlag;
   uint8  data[8];

   uint8  PEPS_570_Door_Lock_Cmd;
}peps_0x570_struct;

EXTERN   peps_0x570_struct    peps_0x570;
#define  GET_PEPS_0X570_MISSING_FLAG()    (peps_0x570.Peps_0x570MissingFlag)
#define  GET_PEPS_0X570_NEVER_RECE_FLAG() (peps_0x570.Peps_0x570NeverReceFlag)
#define  GET_PEPS_Door_Lock_Cmd()    (peps_0x570.PEPS_570_Door_Lock_Cmd)

/*frame 0x620 struct define*/
typedef struct
{
   uint8  data[8];

   uint8  ICM_620_DATA_VALID_ODO;
   uint8  ICM_620_ODOMETER_RESET_COUNTER;
   uint32  ICM_620_DISPLAYED_TOTAL_DISTANCE;
   uint8  ICM_620_ODOMETER_OFFSET;
}icm_0x620_struct;

EXTERN   icm_0x620_struct    icm_0x620;

/*frame 0x660 struct define*/
typedef struct
{
   uint8  Bcm_0x660UpdatedFlag;
   uint8  Bcm_0x660NeverReceFlag;
   uint8  Bcm_0x660MissingFlag;
   uint8  data[8];

   uint8  BCM_660_FD_DOOR_STS;
   uint8  BCM_660_FP_DOOR_STS;
   uint8  BCM_660_FOLLOW_ME_HOME_STS;
   uint8  BCM_660_TRUNK_STA;
}bcm_0x660_struct;

EXTERN   bcm_0x660_struct    bcm_0x660;
#define  GET_BCM_0X660_MISSING_FLAG()    (bcm_0x660.Bcm_0x660MissingFlag)
#define  GET_BCM_0X660_NEVER_RECE_FLAG() (bcm_0x660.Bcm_0x660NeverReceFlag)
#define  GET_BCM_FD_DOOR_STS()    (bcm_0x660.BCM_660_FD_DOOR_STS)
#define  GET_BCM_FP_DOOR_STS()    (bcm_0x660.BCM_660_FP_DOOR_STS)
#define  GET_BCM_FOLLOW_ME_HOME_STS()    (bcm_0x660.BCM_660_FOLLOW_ME_HOME_STS)
#define  GET_BCM_TRUNK_STA()    (bcm_0x660.BCM_660_TRUNK_STA)

/*frame 0x661 struct define*/
typedef struct
{
   uint8  Bcm_0x661UpdatedFlag;
   uint8  Bcm_0x661NeverReceFlag;
   uint8  Bcm_0x661MissingFlag;
   uint8  data[8];

   uint8  BCM_661_EB_ODO_VALID;
   uint8  BCM_661_ODOMETER_RESET_COUNTER;
   uint32  BCM_661_EB_ODO_DISTANCE;
   uint8  BCM_661_ODOMETER_OFFSET;
}bcm_0x661_struct;

EXTERN   bcm_0x661_struct    bcm_0x661;
#define  GET_BCM_0X661_MISSING_FLAG()    (bcm_0x661.Bcm_0x661MissingFlag)
#define  GET_BCM_0X661_NEVER_RECE_FLAG() (bcm_0x661.Bcm_0x661NeverReceFlag)
#define  GET_BCM_EB_ODO_VALID()    (bcm_0x661.BCM_661_EB_ODO_VALID)
#define  GET_BCM_ODOMETER_RESET_COUNTER()    (bcm_0x661.BCM_661_ODOMETER_RESET_COUNTER)
#define  GET_BCM_EB_ODO_DISTANCE()    (bcm_0x661.BCM_661_EB_ODO_DISTANCE)
#define  GET_BCM_ODOMETER_OFFSET()    (bcm_0x661.BCM_661_ODOMETER_OFFSET)

/*frame 0x6a0 struct define*/
typedef struct
{
   uint8  data[8];

   uint32  ICM_6A0_ODO;
}icm_0x6a0_struct;

EXTERN   icm_0x6a0_struct    icm_0x6a0;

/*frame 0x6a2 struct define*/
typedef struct
{
   uint8  data[8];

   uint8  ICM_6A2_IP_Fault;
   uint8  ICM_6A2_IP_Theme;
   uint32  ICM_6A2_Distance_To_Service;
   uint16  ICM_6A2_Day_To_Service;
}icm_0x6a2_struct;

EXTERN   icm_0x6a2_struct    icm_0x6a2;

/*frame 0x6af struct define*/
typedef struct
{
   uint8  data[8];

   uint8  ICM_6AF_CAL_VERS;
   uint32  ICM_6AF_PART_VERS;
   uint8  ICM_6AF_HW_VERS;
   uint8  ICM_6AF_SW_VERS;
}icm_0x6af_struct;

EXTERN   icm_0x6af_struct    icm_0x6af;

/*frame 0x6f2 struct define*/
typedef struct
{
   uint8  Tbox_0x6f2UpdatedFlag;
   uint8  Tbox_0x6f2NeverReceFlag;
   uint8  Tbox_0x6f2MissingFlag;
   uint8  data[8];

   uint8  TBOX_6F2_YEAR_TIME;
   uint8  TBOX_6F2_MONTH_TIME;
   uint8  TBOX_6F2_DAY_TIME;
   uint8  TBOX_6F2_HOUR_TIME;
   uint8  TBOX_6F2_MINUTE_TIME;
}tbox_0x6f2_struct;

EXTERN   tbox_0x6f2_struct    tbox_0x6f2;
#define  GET_TBOX_0X6F2_MISSING_FLAG()    (tbox_0x6f2.Tbox_0x6f2MissingFlag)
#define  GET_TBOX_0X6F2_NEVER_RECE_FLAG() (tbox_0x6f2.Tbox_0x6f2NeverReceFlag)
#define  GET_TBOX_YEAR_TIME()    (tbox_0x6f2.TBOX_6F2_YEAR_TIME)
#define  GET_TBOX_MONTH_TIME()    (tbox_0x6f2.TBOX_6F2_MONTH_TIME)
#define  GET_TBOX_DAY_TIME()    (tbox_0x6f2.TBOX_6F2_DAY_TIME)
#define  GET_TBOX_HOUR_TIME()    (tbox_0x6f2.TBOX_6F2_HOUR_TIME)
#define  GET_TBOX_MINUTE_TIME()    (tbox_0x6f2.TBOX_6F2_MINUTE_TIME)

/*************************************************************************
**                  Frame Signal Analysis Prototype                     **
**************************************************************************/
EXTERN void vcu_0x212SigAlysis(void);
EXTERN void vcu_0x214SigAlysis(void);
EXTERN void mcu_0x230SigAlysis(void);
EXTERN void abs_0x318SigAlysis(void);
EXTERN void mcu_0x430SigAlysis(void);
EXTERN void bms_0x450SigAlysis(void);
EXTERN void bms_0x451SigAlysis(void);
EXTERN void eps_0x470SigAlysis(void);
EXTERN void epb_0x4c8SigAlysis(void);
EXTERN void ecc_0x4e0SigAlysis(void);
EXTERN void ehu_0x585SigAlysis(void);
EXTERN void vcu_0x611SigAlysis(void);
EXTERN void vcu_0x615SigAlysis(void);
EXTERN void vcu_0x616SigAlysis(void);
EXTERN void vcu_0x617SigAlysis(void);
EXTERN void vcu_0x61dSigAlysis(void);
EXTERN void pdc_0x1b0SigAlysis(void);
EXTERN void vbus_vcu_0x214SigAlysis(void);
EXTERN void vbus_mcu_0x230SigAlysis(void);
EXTERN void tpms_0x2a0SigAlysis(void);
EXTERN void peps_0x479SigAlysis(void);
EXTERN void bcm_0x4a0SigAlysis(void);
EXTERN void uec_0x4c9SigAlysis(void);
EXTERN void peps_0x570SigAlysis(void);
EXTERN void bcm_0x660SigAlysis(void);
EXTERN void bcm_0x661SigAlysis(void);
EXTERN void tbox_0x6f2SigAlysis(void);

/*************************************************************************
**                  Set Signal Function Prototype                       **
**************************************************************************/
/*0x620  ICM_0x620*/
EXTERN void set_ICM_DATA_VALID_ODO( uint8 ICM_620_DATA_VALID_ODO);
EXTERN void set_ICM_ODOMETER_RESET_COUNTER( uint8 ICM_620_ODOMETER_RESET_COUNTER);
EXTERN void set_ICM_DISPLAYED_TOTAL_DISTANCE( uint32 ICM_620_DISPLAYED_TOTAL_DISTANCE);
EXTERN void set_ICM_ODOMETER_OFFSET( uint8 ICM_620_ODOMETER_OFFSET);
/*0x6a0  ICM_0x6A0*/
EXTERN void set_ICM_ODO( uint32 ICM_6A0_ODO);
/*0x6a2  ICM_0x6A2*/
EXTERN void set_ICM_IP_Fault( uint8 ICM_6A2_IP_Fault);
EXTERN void set_ICM_IP_Theme( uint8 ICM_6A2_IP_Theme);
EXTERN void set_ICM_Distance_To_Service( uint32 ICM_6A2_Distance_To_Service);
EXTERN void set_ICM_Day_To_Service( uint16 ICM_6A2_Day_To_Service);
/*0x6af  ICM_0x6AF*/
EXTERN void set_ICM_CAL_VERS( uint8 ICM_6AF_CAL_VERS);
EXTERN void set_ICM_PART_VERS( uint32 ICM_6AF_PART_VERS);
EXTERN void set_ICM_HW_VERS( uint8 ICM_6AF_HW_VERS);
EXTERN void set_ICM_SW_VERS( uint8 ICM_6AF_SW_VERS);


EXTERN void abus_receive_frame(uint16 frameID, uint8 *data);
EXTERN void vbus_receive_frame(uint16 frameID, uint8 *data);
EXTERN void CANProcess_Init(void);
EXTERN void frameMissingProcess(void);


#undef EXTERN
#endif
