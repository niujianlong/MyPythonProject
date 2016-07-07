uint8  get_VCU_SHIFT_POSITON()
{
  vcu_0x212.VCU_212_SHIFT_POSITON = getuint8SigValue(vcu_0x212.data,4,34,36);
  return vcu_0x212.VCU_212_SHIFT_POSITON;
}

uint8  get_VCU_SHIFT_ERROR_OP()
{
  vcu_0x212.VCU_212_SHIFT_ERROR_OP = getuint8SigValue(vcu_0x212.data,4,38,38);
  return vcu_0x212.VCU_212_SHIFT_ERROR_OP;
}

uint16  get_VCU_VEH_STATE()
{
  vcu_0x214.VCU_214_VEH_STATE = getuint16SigValue(vcu_0x214.data,1,16);
  return vcu_0x214.VCU_214_VEH_STATE;
}

uint8  get_VCU_REMOTE_SWITCH_STA()
{
  vcu_0x214.VCU_214_REMOTE_SWITCH_STA = getuint8SigValue(vcu_0x214.data,3,28,28);
  return vcu_0x214.VCU_214_REMOTE_SWITCH_STA;
}

uint8  get_MCU_SYS_FAULT_LAMP()
{
  mcu_0x230.MCU_230_SYS_FAULT_LAMP = getuint8SigValue(mcu_0x230.data,0,0,1);
  return mcu_0x230.MCU_230_SYS_FAULT_LAMP;
}

uint8  get_MCU_BRAKE_ENGERY_RECOV_STA()
{
  mcu_0x230.MCU_230_BRAKE_ENGERY_RECOV_STA = getuint8SigValue(mcu_0x230.data,0,2,2);
  return mcu_0x230.MCU_230_BRAKE_ENGERY_RECOV_STA;
}

uint8  get_MCU_MOT_FAULT_LAMP()
{
  mcu_0x230.MCU_230_MOT_FAULT_LAMP = getuint8SigValue(mcu_0x230.data,1,8,9);
  return mcu_0x230.MCU_230_MOT_FAULT_LAMP;
}

uint8  get_MCU_FAULT_ALARM()
{
  mcu_0x230.MCU_230_FAULT_ALARM = getuint8SigValue(mcu_0x230.data,1,10,11);
  return mcu_0x230.MCU_230_FAULT_ALARM;
}

uint8  get_MCU_LIMP_LAMP()
{
  mcu_0x230.MCU_230_LIMP_LAMP = getuint8SigValue(mcu_0x230.data,1,12,12);
  return mcu_0x230.MCU_230_LIMP_LAMP;
}

uint8  get_MCU_MOT_TEMP_H_IND()
{
  mcu_0x230.MCU_230_MOT_TEMP_H_IND = getuint8SigValue(mcu_0x230.data,1,13,13);
  return mcu_0x230.MCU_230_MOT_TEMP_H_IND;
}

uint8  get_MCU_MOT_FAULT_IND()
{
  mcu_0x230.MCU_230_MOT_FAULT_IND = getuint8SigValue(mcu_0x230.data,1,14,14);
  return mcu_0x230.MCU_230_MOT_FAULT_IND;
}

uint8  get_MCU_MOT_SYS_TEMP_HIGH_LAMP()
{
  mcu_0x230.MCU_230_MOT_SYS_TEMP_HIGH_LAMP = getuint8SigValue(mcu_0x230.data,1,15,15);
  return mcu_0x230.MCU_230_MOT_SYS_TEMP_HIGH_LAMP;
}

uint8  get_MCU_MCU_PWR_PENT()
{
  mcu_0x230.MCU_230_MCU_PWR_PENT = getuint8SigValue(mcu_0x230.data,6,48,55);
  return mcu_0x230.MCU_230_MCU_PWR_PENT;
}

uint16  get_ABS_VehSpd()
{
  abs_0x318.ABS_318_VehSpd = getuint16SigValue(abs_0x318.data,4,16);
  return abs_0x318.ABS_318_VehSpd;
}

uint8  get_ABS_VehicleSpeedValid()
{
  abs_0x318.ABS_318_VehicleSpeedValid = getuint8SigValue(abs_0x318.data,2,23,23);
  return abs_0x318.ABS_318_VehicleSpeedValid;
}

uint8  get_ABS_ABSActive()
{
  abs_0x318.ABS_318_ABSActive = getuint8SigValue(abs_0x318.data,2,22,22);
  return abs_0x318.ABS_318_ABSActive;
}

uint8  get_ABS_ABSFail()
{
  abs_0x318.ABS_318_ABSFail = getuint8SigValue(abs_0x318.data,2,21,21);
  return abs_0x318.ABS_318_ABSFail;
}

uint8  get_ABS_EBDFail()
{
  abs_0x318.ABS_318_EBDFail = getuint8SigValue(abs_0x318.data,2,20,20);
  return abs_0x318.ABS_318_EBDFail;
}

uint16  get_MCU_MOT_SPD()
{
  mcu_0x430.MCU_430_MOT_SPD = getuint16SigValue(mcu_0x430.data,3,16);
  return mcu_0x430.MCU_430_MOT_SPD;
}

uint8  get_BMS_BATT_SOC()
{
  bms_0x450.BMS_450_BATT_SOC = getuint8SigValue(bms_0x450.data,1,8,15);
  return bms_0x450.BMS_450_BATT_SOC;
}

uint16  get_BMS_BATT_CUR()
{
  bms_0x451.BMS_451_BATT_CUR = getuint16SigValue(bms_0x451.data,3,16);
  return bms_0x451.BMS_451_BATT_CUR;
}

uint16  get_BMS_BATT_VOLT_V2()
{
  bms_0x451.BMS_451_BATT_VOLT_V2 = getuint16SigValue(bms_0x451.data,5,16);
  return bms_0x451.BMS_451_BATT_VOLT_V2;
}

uint8  get_BMS_BATT_CHG_TYPE()
{
  bms_0x458.BMS_458_BATT_CHG_TYPE = getuint8SigValue(bms_0x458.data,0,3,4);
  return bms_0x458.BMS_458_BATT_CHG_TYPE;
}

uint8  get_EPS_EPS_STA()
{
  eps_0x470.EPS_470_EPS_STA = getuint8SigValue(eps_0x470.data,0,1,2);
  return eps_0x470.EPS_470_EPS_STA;
}

uint8  get_EPB_EPB_ParkLampState()
{
  epb_0x4c8.EPB_4C8_EPB_ParkLampState = getuint8SigValue(epb_0x4c8.data,0,0,1);
  return epb_0x4c8.EPB_4C8_EPB_ParkLampState;
}

uint8  get_EPB_EPB_WarningLampState()
{
  epb_0x4c8.EPB_4C8_EPB_WarningLampState = getuint8SigValue(epb_0x4c8.data,0,2,3);
  return epb_0x4c8.EPB_4C8_EPB_WarningLampState;
}

uint8  get_ECC_OUT_TEMP()
{
  ecc_0x4e0.ECC_4E0_OUT_TEMP = getuint8SigValue(ecc_0x4e0.data,2,16,23);
  return ecc_0x4e0.ECC_4E0_OUT_TEMP;
}

uint8  get_EHU_EHU_Theme()
{
  ehu_0x585.EHU_585_EHU_Theme = getuint8SigValue(ehu_0x585.data,6,48,49);
  return ehu_0x585.EHU_585_EHU_Theme;
}

uint8  get_EHU_EHU_State()
{
  ehu_0x585.EHU_585_EHU_State = getuint8SigValue(ehu_0x585.data,6,50,51);
  return ehu_0x585.EHU_585_EHU_State;
}

uint8  get_VCU_READY_LAMP()
{
  vcu_0x611.VCU_611_READY_LAMP = getuint8SigValue(vcu_0x611.data,0,3,3);
  return vcu_0x611.VCU_611_READY_LAMP;
}

uint8  get_VCU_PARKING_IND()
{
  vcu_0x611.VCU_611_PARKING_IND = getuint8SigValue(vcu_0x611.data,0,5,5);
  return vcu_0x611.VCU_611_PARKING_IND;
}

uint8  get_VCU_BATT_PWRON()
{
  vcu_0x611.VCU_611_BATT_PWRON = getuint8SigValue(vcu_0x611.data,0,6,6);
  return vcu_0x611.VCU_611_BATT_PWRON;
}

uint8  get_VCU_FAULT_ALARM()
{
  vcu_0x611.VCU_611_FAULT_ALARM = getuint8SigValue(vcu_0x611.data,1,10,11);
  return vcu_0x611.VCU_611_FAULT_ALARM;
}

uint8  get_VCU_CHARG_CONNECT_LAMP()
{
  vcu_0x611.VCU_611_CHARG_CONNECT_LAMP = getuint8SigValue(vcu_0x611.data,1,12,12);
  return vcu_0x611.VCU_611_CHARG_CONNECT_LAMP;
}

uint8  get_VCU_Batt_FAULT_IND()
{
  vcu_0x611.VCU_611_Batt_FAULT_IND = getuint8SigValue(vcu_0x611.data,1,13,13);
  return vcu_0x611.VCU_611_Batt_FAULT_IND;
}

uint8  get_VCU_LIMP_LAMP()
{
  vcu_0x611.VCU_611_LIMP_LAMP = getuint8SigValue(vcu_0x611.data,3,24,24);
  return vcu_0x611.VCU_611_LIMP_LAMP;
}

uint8  get_VCU_VEH_INSULATION_FAULT_IND()
{
  vcu_0x611.VCU_611_VEH_INSULATION_FAULT_IND = getuint8SigValue(vcu_0x611.data,3,25,25);
  return vcu_0x611.VCU_611_VEH_INSULATION_FAULT_IND;
}

uint8  get_VCU_BATT_FAULT_IND()
{
  vcu_0x611.VCU_611_BATT_FAULT_IND = getuint8SigValue(vcu_0x611.data,3,28,28);
  return vcu_0x611.VCU_611_BATT_FAULT_IND;
}

uint8  get_VCU_BRAKE_FAULT_IND()
{
  vcu_0x611.VCU_611_BRAKE_FAULT_IND = getuint8SigValue(vcu_0x611.data,3,30,30);
  return vcu_0x611.VCU_611_BRAKE_FAULT_IND;
}

uint8  get_VCU_N_START_REQ()
{
  vcu_0x611.VCU_611_N_START_REQ = getuint8SigValue(vcu_0x611.data,4,35,35);
  return vcu_0x611.VCU_611_N_START_REQ;
}

uint8  get_VCU_VEH_MODE()
{
  vcu_0x611.VCU_611_VEH_MODE = getuint8SigValue(vcu_0x611.data,6,48,55);
  return vcu_0x611.VCU_611_VEH_MODE;
}

uint8  get_VCU_BATT_FAULT_LAMP()
{
  vcu_0x611.VCU_611_BATT_FAULT_LAMP = getuint8SigValue(vcu_0x611.data,7,58,58);
  return vcu_0x611.VCU_611_BATT_FAULT_LAMP;
}

uint8  get_VCU_CHG_REMIND_LAMP()
{
  vcu_0x611.VCU_611_CHG_REMIND_LAMP = getuint8SigValue(vcu_0x611.data,7,60,60);
  return vcu_0x611.VCU_611_CHG_REMIND_LAMP;
}

uint16  get_VCU_ENERGY_CONSUM_AV()
{
  vcu_0x615.VCU_615_ENERGY_CONSUM_AV = getuint16SigValue(vcu_0x615.data,7,16);
  return vcu_0x615.VCU_615_ENERGY_CONSUM_AV;
}

uint16  get_VCU_DRIVE_RANGE()
{
  vcu_0x616.VCU_616_DRIVE_RANGE = getuint16SigValue(vcu_0x616.data,1,16);
  return vcu_0x616.VCU_616_DRIVE_RANGE;
}

uint8  get_VCU_SYS_FAULT_LAMP()
{
  vcu_0x617.VCU_617_SYS_FAULT_LAMP = getuint8SigValue(vcu_0x617.data,0,0,1);
  return vcu_0x617.VCU_617_SYS_FAULT_LAMP;
}

uint8  get_VCU_BRAKE_ENGERY_RECOV_LEVEL()
{
  vcu_0x617.VCU_617_BRAKE_ENGERY_RECOV_LEVEL = getuint8SigValue(vcu_0x617.data,0,3,5);
  return vcu_0x617.VCU_617_BRAKE_ENGERY_RECOV_LEVEL;
}

uint16  get_VCU_ENERGY_CONSUM_IN()
{
  vcu_0x617.VCU_617_ENERGY_CONSUM_IN = getuint16SigValue(vcu_0x617.data,7,16);
  return vcu_0x617.VCU_617_ENERGY_CONSUM_IN;
}

uint8  get_BMS_BATT_HEAT_STA()
{
  bms_0x650.BMS_650_BATT_HEAT_STA = getuint8SigValue(bms_0x650.data,0,4,5);
  return bms_0x650.BMS_650_BATT_HEAT_STA;
}

uint32  get_ICM_ODO()
{
  icm_0x6a0.ICM_6A0_ODO = getuint32SigValue(icm_0x6a0.data,3,24);
  return icm_0x6a0.ICM_6A0_ODO;
}

uint8  get_ICM_IP_Fault()
{
  icm_0x6a2.ICM_6A2_IP_Fault = getuint8SigValue(icm_0x6a2.data,0,2,2);
  return icm_0x6a2.ICM_6A2_IP_Fault;
}

uint8  get_ICM_IP_Theme()
{
  icm_0x6a2.ICM_6A2_IP_Theme = getuint8SigValue(icm_0x6a2.data,0,3,4);
  return icm_0x6a2.ICM_6A2_IP_Theme;
}

uint32  get_ICM_Distance_To_Service()
{
  icm_0x6a2.ICM_6A2_Distance_To_Service = getuint32SigValue(icm_0x6a2.data,3,24);
  return icm_0x6a2.ICM_6A2_Distance_To_Service;
}

uint16  get_ICM_Day_To_Service()
{
  icm_0x6a2.ICM_6A2_Day_To_Service = getuint16SigValue(icm_0x6a2.data,6,16);
  return icm_0x6a2.ICM_6A2_Day_To_Service;
}

uint8  get_ICM_CAL_VERS()
{
  icm_0x6af.ICM_6AF_CAL_VERS = getuint8SigValue(icm_0x6af.data,1,8,15);
  return icm_0x6af.ICM_6AF_CAL_VERS;
}

uint32  get_ICM_PART_VERS()
{
  icm_0x6af.ICM_6AF_PART_VERS = getuint32SigValue(icm_0x6af.data,5,32);
  return icm_0x6af.ICM_6AF_PART_VERS;
}

uint8  get_ICM_HW_VERS()
{
  icm_0x6af.ICM_6AF_HW_VERS = getuint8SigValue(icm_0x6af.data,6,48,55);
  return icm_0x6af.ICM_6AF_HW_VERS;
}

uint8  get_ICM_SW_VERS()
{
  icm_0x6af.ICM_6AF_SW_VERS = getuint8SigValue(icm_0x6af.data,7,56,63);
  return icm_0x6af.ICM_6AF_SW_VERS;
}

uint8  get_CHG_CHG_STA()
{
  chg_0x6d0.CHG_6D0_CHG_STA = getuint8SigValue(chg_0x6d0.data,0,0,3);
  return chg_0x6d0.CHG_6D0_CHG_STA;
}

uint16  get_VCU_VEH_STATE()
{
  vcu_0x214.VCU_214_VEH_STATE = getuint16SigValue(vcu_0x214.data,1,16);
  return vcu_0x214.VCU_214_VEH_STATE;
}

uint8  get_PEPS_POWER_MODE()
{
  peps_0x479.PEPS_479_POWER_MODE = getuint8SigValue(peps_0x479.data,1,8,9);
  return peps_0x479.PEPS_479_POWER_MODE;
}

uint8  get_PEPS_RM_Key_LowBattery_Alert()
{
  peps_0x479.PEPS_479_RM_Key_LowBattery_Alert = getuint8SigValue(peps_0x479.data,3,28,28);
  return peps_0x479.PEPS_479_RM_Key_LowBattery_Alert;
}

uint8  get_PEPS_AuthFailWarning()
{
  peps_0x479.PEPS_479_AuthFailWarning = getuint8SigValue(peps_0x479.data,3,29,29);
  return peps_0x479.PEPS_479_AuthFailWarning;
}

uint8  get_PEPS_One_KeyStart_Swith_Error()
{
  peps_0x479.PEPS_479_One_KeyStart_Swith_Error = getuint8SigValue(peps_0x479.data,3,30,30);
  return peps_0x479.PEPS_479_One_KeyStart_Swith_Error;
}

uint8  get_PEPS_Press_Brake_Pedal_Alert()
{
  peps_0x479.PEPS_479_Press_Brake_Pedal_Alert = getuint8SigValue(peps_0x479.data,3,31,31);
  return peps_0x479.PEPS_479_Press_Brake_Pedal_Alert;
}

uint8  get_PEPS_ESCLWarning()
{
  peps_0x479.PEPS_479_ESCLWarning = getuint8SigValue(peps_0x479.data,4,32,32);
  return peps_0x479.PEPS_479_ESCLWarning;
}

uint8  get_PEPS_ETWS_Alert()
{
  peps_0x479.PEPS_479_ETWS_Alert = getuint8SigValue(peps_0x479.data,4,33,33);
  return peps_0x479.PEPS_479_ETWS_Alert;
}

uint8  get_PEPS_CID_Left_Alert()
{
  peps_0x479.PEPS_479_CID_Left_Alert = getuint8SigValue(peps_0x479.data,4,34,34);
  return peps_0x479.PEPS_479_CID_Left_Alert;
}

uint8  get_PEPS_DOOR_Lock_Ig_NotOff_Alert()
{
  peps_0x479.PEPS_479_DOOR_Lock_Ig_NotOff_Alert = getuint8SigValue(peps_0x479.data,4,35,35);
  return peps_0x479.PEPS_479_DOOR_Lock_Ig_NotOff_Alert;
}

uint8  get_PEPS_DOOR_Open_Lock_Alert()
{
  peps_0x479.PEPS_479_DOOR_Open_Lock_Alert = getuint8SigValue(peps_0x479.data,4,36,36);
  return peps_0x479.PEPS_479_DOOR_Open_Lock_Alert;
}

uint8  get_PEPS_Key_Insid_Vehicle_Alert()
{
  peps_0x479.PEPS_479_Key_Insid_Vehicle_Alert = getuint8SigValue(peps_0x479.data,4,37,37);
  return peps_0x479.PEPS_479_Key_Insid_Vehicle_Alert;
}

uint8  get_BCM_HIGH_BEAM_LIGHT_CMD()
{
  bcm_0x4a0.BCM_4A0_HIGH_BEAM_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,0,0,0);
  return bcm_0x4a0.BCM_4A0_HIGH_BEAM_LIGHT_CMD;
}

uint8  get_BCM_LOW_BEAM_LIGHT_CMD()
{
  bcm_0x4a0.BCM_4A0_LOW_BEAM_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,0,1,1);
  return bcm_0x4a0.BCM_4A0_LOW_BEAM_LIGHT_CMD;
}

uint8  get_BCM_FRONT_POSITION_LAMP_CMD()
{
  bcm_0x4a0.BCM_4A0_FRONT_POSITION_LAMP_CMD = getuint8SigValue(bcm_0x4a0.data,0,2,2);
  return bcm_0x4a0.BCM_4A0_FRONT_POSITION_LAMP_CMD;
}

uint8  get_BCM_FRONT_FOG_LAMP_CMD()
{
  bcm_0x4a0.BCM_4A0_FRONT_FOG_LAMP_CMD = getuint8SigValue(bcm_0x4a0.data,0,3,3);
  return bcm_0x4a0.BCM_4A0_FRONT_FOG_LAMP_CMD;
}

uint8  get_BCM_REAR_FOG_LAMP_CMD()
{
  bcm_0x4a0.BCM_4A0_REAR_FOG_LAMP_CMD = getuint8SigValue(bcm_0x4a0.data,0,7,7);
  return bcm_0x4a0.BCM_4A0_REAR_FOG_LAMP_CMD;
}

uint8  get_BCM_LEFT_TRUN_LIGHT_CMD()
{
  bcm_0x4a0.BCM_4A0_LEFT_TRUN_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,1,14,14);
  return bcm_0x4a0.BCM_4A0_LEFT_TRUN_LIGHT_CMD;
}

uint8  get_BCM_RIGHT_TRUN_LIGHT_CMD()
{
  bcm_0x4a0.BCM_4A0_RIGHT_TRUN_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,1,15,15);
  return bcm_0x4a0.BCM_4A0_RIGHT_TRUN_LIGHT_CMD;
}

uint8  get_BCM_EXTERIOR_LAMP_SWITCH()
{
  bcm_0x4a0.BCM_4A0_EXTERIOR_LAMP_SWITCH = getuint8SigValue(bcm_0x4a0.data,2,21,22);
  return bcm_0x4a0.BCM_4A0_EXTERIOR_LAMP_SWITCH;
}

uint8  get_BCM_REAR_FOG_LAMP_SWITCH()
{
  bcm_0x4a0.BCM_4A0_REAR_FOG_LAMP_SWITCH = getuint8SigValue(bcm_0x4a0.data,3,27,27);
  return bcm_0x4a0.BCM_4A0_REAR_FOG_LAMP_SWITCH;
}

uint8  get_UEC_Hs_HLBeam_Lamp_Left_Err()
{
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Left_Err = getuint8SigValue(uec_0x4c9.data,0,0,0);
  return uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Left_Err;
}

uint8  get_UEC_Hs_HLBeam_Light_Left_Err()
{
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Left_Err = getuint8SigValue(uec_0x4c9.data,0,1,2);
  return uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Left_Err;
}

uint8  get_UEC_Hs_HLBeam_Lamp_Right_Err()
{
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Right_Err = getuint8SigValue(uec_0x4c9.data,0,3,3);
  return uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Right_Err;
}

uint8  get_UEC_Hs_HLBeam_Light_Right_Err()
{
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Right_Err = getuint8SigValue(uec_0x4c9.data,0,4,5);
  return uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Right_Err;
}

uint8  get_UEC_Hs_HLBeam_FDSF_Err()
{
  uec_0x4c9.UEC_4C9_Hs_HLBeam_FDSF_Err = getuint8SigValue(uec_0x4c9.data,0,6,7);
  return uec_0x4c9.UEC_4C9_Hs_HLBeam_FDSF_Err;
}

uint8  get_UEC_Hs_Position_Lamp_Err()
{
  uec_0x4c9.UEC_4C9_Hs_Position_Lamp_Err = getuint8SigValue(uec_0x4c9.data,1,8,9);
  return uec_0x4c9.UEC_4C9_Hs_Position_Lamp_Err;
}

uint8  get_UEC_Hs_Daytime_Light_Left_Err()
{
  uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Left_Err = getuint8SigValue(uec_0x4c9.data,1,10,11);
  return uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Left_Err;
}

uint8  get_UEC_Hs_Daytime_Light_Right_Err()
{
  uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Right_Err = getuint8SigValue(uec_0x4c9.data,1,12,13);
  return uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Right_Err;
}

uint8  get_UEC_Hs_FrontFog_Light_Left_Err()
{
  uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Left_Err = getuint8SigValue(uec_0x4c9.data,1,14,15);
  return uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Left_Err;
}

uint8  get_UEC_Hs_FrontFog_Light_Right_Err()
{
  uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Right_Err = getuint8SigValue(uec_0x4c9.data,2,16,17);
  return uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Right_Err;
}

uint8  get_UEC_Hs_LR_Brake_Light_Err()
{
  uec_0x4c9.UEC_4C9_Hs_LR_Brake_Light_Err = getuint8SigValue(uec_0x4c9.data,2,18,19);
  return uec_0x4c9.UEC_4C9_Hs_LR_Brake_Light_Err;
}

uint8  get_UEC_Hs_High_Brake_Light_Err()
{
  uec_0x4c9.UEC_4C9_Hs_High_Brake_Light_Err = getuint8SigValue(uec_0x4c9.data,2,20,21);
  return uec_0x4c9.UEC_4C9_Hs_High_Brake_Light_Err;
}

uint8  get_PEPS_Door_Lock_Cmd()
{
  peps_0x570.PEPS_570_Door_Lock_Cmd = getuint8SigValue(peps_0x570.data,0,0,1);
  return peps_0x570.PEPS_570_Door_Lock_Cmd;
}

uint8  get_ICM_DATA_VALID_ODO()
{
  icm_0x620.ICM_620_DATA_VALID_ODO = getuint8SigValue(icm_0x620.data,0,1,1);
  return icm_0x620.ICM_620_DATA_VALID_ODO;
}

uint8  get_ICM_ODOMETER_RESET_COUNTER()
{
  icm_0x620.ICM_620_ODOMETER_RESET_COUNTER = getuint8SigValue(icm_0x620.data,0,2,3);
  return icm_0x620.ICM_620_ODOMETER_RESET_COUNTER;
}

uint32  get_ICM_DISPLAYED_TOTAL_DISTANCE()
{
  icm_0x620.ICM_620_DISPLAYED_TOTAL_DISTANCE = getuint32SigValue(icm_0x620.data,4,32);
  return icm_0x620.ICM_620_DISPLAYED_TOTAL_DISTANCE;
}

uint8  get_ICM_ODOMETER_OFFSET()
{
  icm_0x620.ICM_620_ODOMETER_OFFSET = getuint8SigValue(icm_0x620.data,5,40,47);
  return icm_0x620.ICM_620_ODOMETER_OFFSET;
}

uint8  get_BCM_FD_DOOR_STS()
{
  bcm_0x660.BCM_660_FD_DOOR_STS = getuint8SigValue(bcm_0x660.data,0,2,2);
  return bcm_0x660.BCM_660_FD_DOOR_STS;
}

uint8  get_BCM_FP_DOOR_STS()
{
  bcm_0x660.BCM_660_FP_DOOR_STS = getuint8SigValue(bcm_0x660.data,0,3,3);
  return bcm_0x660.BCM_660_FP_DOOR_STS;
}

uint8  get_BCM_FOLLOW_ME_HOME_STS()
{
  bcm_0x660.BCM_660_FOLLOW_ME_HOME_STS = getuint8SigValue(bcm_0x660.data,0,6,6);
  return bcm_0x660.BCM_660_FOLLOW_ME_HOME_STS;
}

uint8  get_BCM_TRUNK_STA()
{
  bcm_0x660.BCM_660_TRUNK_STA = getuint8SigValue(bcm_0x660.data,0,7,7);
  return bcm_0x660.BCM_660_TRUNK_STA;
}

uint8  get_BCM_EB_ODO_VALID()
{
  bcm_0x661.BCM_661_EB_ODO_VALID = getuint8SigValue(bcm_0x661.data,1,8,8);
  return bcm_0x661.BCM_661_EB_ODO_VALID;
}

uint8  get_BCM_ODOMETER_RESET_COUNTER()
{
  bcm_0x661.BCM_661_ODOMETER_RESET_COUNTER = getuint8SigValue(bcm_0x661.data,1,9,10);
  return bcm_0x661.BCM_661_ODOMETER_RESET_COUNTER;
}

uint32  get_BCM_EB_ODO_DISTANCE()
{
  bcm_0x661.BCM_661_EB_ODO_DISTANCE = getuint32SigValue(bcm_0x661.data,5,32);
  return bcm_0x661.BCM_661_EB_ODO_DISTANCE;
}

uint8  get_BCM_ODOMETER_OFFSET()
{
  bcm_0x661.BCM_661_ODOMETER_OFFSET = getuint8SigValue(bcm_0x661.data,6,48,55);
  return bcm_0x661.BCM_661_ODOMETER_OFFSET;
}

uint8  get_RMS_YEAR_TIME()
{
  rms_0x6f2.RMS_6F2_YEAR_TIME = getuint8SigValue(rms_0x6f2.data,0,0,7);
  return rms_0x6f2.RMS_6F2_YEAR_TIME;
}

uint8  get_RMS_MONTH_TIME()
{
  rms_0x6f2.RMS_6F2_MONTH_TIME = getuint8SigValue(rms_0x6f2.data,1,12,15);
  return rms_0x6f2.RMS_6F2_MONTH_TIME;
}

uint8  get_RMS_DAY_TIME()
{
  rms_0x6f2.RMS_6F2_DAY_TIME = getuint8SigValue(rms_0x6f2.data,2,16,20);
  return rms_0x6f2.RMS_6F2_DAY_TIME;
}

uint8  get_RMS_HOUR_TIME()
{
  rms_0x6f2.RMS_6F2_HOUR_TIME = getuint8SigValue(rms_0x6f2.data,3,27,31);
  return rms_0x6f2.RMS_6F2_HOUR_TIME;
}

uint8  get_RMS_MINUTE_TIME()
{
  rms_0x6f2.RMS_6F2_MINUTE_TIME = getuint8SigValue(rms_0x6f2.data,4,32,37);
  return rms_0x6f2.RMS_6F2_MINUTE_TIME;
}

