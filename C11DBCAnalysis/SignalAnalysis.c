void vcu_0x212SigAlysis(void)
{
  vcu_0x212.VCU_212_SHIFT_POSITON = getuint8SigValue(vcu_0x212.data,4,34,36);
  vcu_0x212.VCU_212_SHIFT_ERROR_OP = getuint8SigValue(vcu_0x212.data,4,38,38);
}
void vcu_0x214SigAlysis(void)
{
  vcu_0x214.VCU_214_VEH_STATE = getuint16SigValue(vcu_0x214.data,1,16);
}
void mcu_0x230SigAlysis(void)
{
  mcu_0x230.MCU_230_SYS_FAULT_LAMP = getuint8SigValue(mcu_0x230.data,0,0,1);
  mcu_0x230.MCU_230_BRAKE_ENGERY_RECOV_STA = getuint8SigValue(mcu_0x230.data,0,2,2);
  mcu_0x230.MCU_230_MOT_FAULT_LAMP = getuint8SigValue(mcu_0x230.data,1,8,9);
  mcu_0x230.MCU_230_FAULT_ALARM = getuint8SigValue(mcu_0x230.data,1,10,11);
  mcu_0x230.MCU_230_LIMP_LAMP = getuint8SigValue(mcu_0x230.data,1,12,12);
  mcu_0x230.MCU_230_MOT_TEMP_H_IND = getuint8SigValue(mcu_0x230.data,1,13,13);
  mcu_0x230.MCU_230_MOT_FAULT_IND = getuint8SigValue(mcu_0x230.data,1,14,14);
  mcu_0x230.MCU_230_MOT_SYS_TEMP_HIGH_LAMP = getuint8SigValue(mcu_0x230.data,1,15,15);
  mcu_0x230.MCU_230_MCU_PWR_PENT = getuint8SigValue(mcu_0x230.data,6,48,55);
}
void abs_0x318SigAlysis(void)
{
  abs_0x318.ABS_318_ABSActive = getuint8SigValue(abs_0x318.data,2,22,22);
  abs_0x318.ABS_318_ABSFail = getuint8SigValue(abs_0x318.data,2,21,21);
  abs_0x318.ABS_318_EBDFail = getuint8SigValue(abs_0x318.data,2,20,20);
}
void mcu_0x430SigAlysis(void)
{
  mcu_0x430.MCU_430_MOT_SPD = getuint16SigValue(mcu_0x430.data,3,16);
}
void bms_0x450SigAlysis(void)
{
  bms_0x450.BMS_450_BATT_SOC = getuint8SigValue(bms_0x450.data,1,8,15);
}
void bms_0x451SigAlysis(void)
{
  bms_0x451.BMS_451_BATT_CUR = getuint16SigValue(bms_0x451.data,3,16);
  bms_0x451.BMS_451_BATT_VOLT_V2 = getuint16SigValue(bms_0x451.data,5,16);
}
void eps_0x470SigAlysis(void)
{
  eps_0x470.EPS_470_EPS_STA = getuint8SigValue(eps_0x470.data,0,1,2);
}
void epb_0x4c8SigAlysis(void)
{
  epb_0x4c8.EPB_4C8_EPB_ParkLampState = getuint8SigValue(epb_0x4c8.data,0,0,1);
  epb_0x4c8.EPB_4C8_EPB_WarningLampState = getuint8SigValue(epb_0x4c8.data,0,2,3);
}
void ecc_0x4e0SigAlysis(void)
{
  ecc_0x4e0.ECC_4E0_OUT_TEMP = getuint8SigValue(ecc_0x4e0.data,2,16,23);
}
void ehu_0x585SigAlysis(void)
{
  ehu_0x585.EHU_585_EHU_Theme = getuint8SigValue(ehu_0x585.data,6,48,49);
  ehu_0x585.EHU_585_EHU_State = getuint8SigValue(ehu_0x585.data,6,50,51);
}
void vcu_0x611SigAlysis(void)
{
  vcu_0x611.VCU_611_READY_LAMP = getuint8SigValue(vcu_0x611.data,0,3,3);
  vcu_0x611.VCU_611_BATT_PWRON = getuint8SigValue(vcu_0x611.data,0,6,6);
  vcu_0x611.VCU_611_OBC_ERR_IND = getuint8SigValue(vcu_0x611.data,1,8,8);
  vcu_0x611.VCU_611_FAULT_ALARM = getuint8SigValue(vcu_0x611.data,1,10,11);
  vcu_0x611.VCU_611_CHARG_CONNECT_LAMP = getuint8SigValue(vcu_0x611.data,1,12,12);
  vcu_0x611.VCU_611_Batt_FAULT_IND = getuint8SigValue(vcu_0x611.data,1,13,13);
  vcu_0x611.VCU_611_LIMP_LAMP = getuint8SigValue(vcu_0x611.data,3,24,24);
  vcu_0x611.VCU_611_VEH_INSULATION_FAULT_IND = getuint8SigValue(vcu_0x611.data,3,25,25);
  vcu_0x611.VCU_611_BATT_FAULT_IND = getuint8SigValue(vcu_0x611.data,3,28,28);
  vcu_0x611.VCU_611_BRAKE_FAULT_IND = getuint8SigValue(vcu_0x611.data,3,30,30);
  vcu_0x611.VCU_611_N_START_REQ = getuint8SigValue(vcu_0x611.data,4,35,35);
  vcu_0x611.VCU_611_BATT_FAULT_LAMP = getuint8SigValue(vcu_0x611.data,7,58,58);
  vcu_0x611.VCU_611_OBC_REMIND_LAMP = getuint8SigValue(vcu_0x611.data,7,60,60);
}
void vcu_0x615SigAlysis(void)
{
  vcu_0x615.VCU_615_ENERGY_CONSUM_AV = getuint16SigValue(vcu_0x615.data,7,16);
}
void vcu_0x616SigAlysis(void)
{
  vcu_0x616.VCU_616_DRIVE_RANGE = getuint16SigValue(vcu_0x616.data,1,16);
}
void vcu_0x617SigAlysis(void)
{
  vcu_0x617.VCU_617_SYS_FAULT_LAMP = getuint8SigValue(vcu_0x617.data,0,0,1);
  vcu_0x617.VCU_617_BRAKE_ENGERY_RECOV_LEVEL = getuint8SigValue(vcu_0x617.data,0,3,5);
  vcu_0x617.VCU_617_OBC_SOON = getuint8SigValue(vcu_0x617.data,0,6,6);
  vcu_0x617.VCU_617_VEH_SPD = getuint16SigValue(vcu_0x617.data,3,16);
  vcu_0x617.VCU_617_ENERGY_CONSUM_IN = getuint16SigValue(vcu_0x617.data,7,16);
}
void vcu_0x61dSigAlysis(void)
{
  vcu_0x61d.VCU_61D_CHG_STATE = getuint8SigValue(vcu_0x61d.data,1,10,12);
  vcu_0x61d.VCU_61D_BATT_HEAT_STA = getuint8SigValue(vcu_0x61d.data,2,18,19);
}
void pdc_0x1b0SigAlysis(void)
{
  pdc_0x1b0.PDC_1B0_SYSTEM_STATUS = getuint8SigValue(pdc_0x1b0.data,0,0,3);
  pdc_0x1b0.PDC_1B0_SYSTEM_ALARM_LEVEL = getuint8SigValue(pdc_0x1b0.data,0,4,7);
  pdc_0x1b0.PDC_1B0_MRL_OBSTACLE_DIS = getuint8SigValue(pdc_0x1b0.data,1,8,15);
  pdc_0x1b0.PDC_1B0_RL_OBSTACLE_DIS = getuint8SigValue(pdc_0x1b0.data,3,24,31);
  pdc_0x1b0.PDC_1B0_RR_OBSTACLE_DIS = getuint8SigValue(pdc_0x1b0.data,4,32,39);
  pdc_0x1b0.PDC_1B0_OBSTACLE_DIS_MIN = getuint8SigValue(pdc_0x1b0.data,5,40,47);
}
void vbus_vcu_0x214SigAlysis(void)
{
  vbus_vcu_0x214.VCU_214_VEH_STATE = getuint16SigValue(vbus_vcu_0x214.data,1,16);
}
void vbus_mcu_0x230SigAlysis(void)
{
  vbus_mcu_0x230.MCU_230_ASR_OFF_LAMP = getuint8SigValue(vbus_mcu_0x230.data,6,50,50);
  vbus_mcu_0x230.MCU_230_ASR_EN_LAMP = getuint8SigValue(vbus_mcu_0x230.data,4,35,42);
}
void tpms_0x2a0SigAlysis(void)
{
  tpms_0x2a0.TPMS_2A0_TIRE_POSITION = getuint8SigValue(tpms_0x2a0.data,0,0,3);
  tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_STATUS = getuint8SigValue(tpms_0x2a0.data,0,4,4);
  tpms_0x2a0.TPMS_2A0_SYSTEM_STATUS = getuint8SigValue(tpms_0x2a0.data,0,5,7);
  tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_LEAK_STATUS = getuint8SigValue(tpms_0x2a0.data,1,8,9);
  tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_PRESSURE_STATUS = getuint8SigValue(tpms_0x2a0.data,1,10,11);
  tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_TEMPERATURE = getuint8SigValue(tpms_0x2a0.data,1,12,13);
  tpms_0x2a0.TPMS_2A0_SIGNAL_SENSOR_SOC_STATUS = getuint8SigValue(tpms_0x2a0.data,1,14,15);
  tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_PRESSURE = getuint16SigValue(tpms_0x2a0.data,3,12);
  tpms_0x2a0.TPMS_2A0_SIGNAL_TIRE_TEMPERATURE_VEL = getuint16SigValue(tpms_0x2a0.data,5,12);
  tpms_0x2a0.TPMS_2A0_SIGNAL_SENSOR_SOC = getuint8SigValue(tpms_0x2a0.data,6,48,55);
  tpms_0x2a0.TPMS_2A0_ALARM_STATUS = getuint8SigValue(tpms_0x2a0.data,7,56,56);
}
void peps_0x479SigAlysis(void)
{
  peps_0x479.PEPS_479_POWER_MODE = getuint8SigValue(peps_0x479.data,1,8,9);
  peps_0x479.PEPS_479_RM_Key_LowBattery_Alert = getuint8SigValue(peps_0x479.data,3,28,28);
  peps_0x479.PEPS_479_AuthFailWarning = getuint8SigValue(peps_0x479.data,3,29,29);
  peps_0x479.PEPS_479_One_KeyStart_Swith_Error = getuint8SigValue(peps_0x479.data,3,30,30);
  peps_0x479.PEPS_479_Press_Brake_Pedal_Alert = getuint8SigValue(peps_0x479.data,3,31,31);
  peps_0x479.PEPS_479_ESCLWarning = getuint8SigValue(peps_0x479.data,4,32,32);
  peps_0x479.PEPS_479_ETWS_Alert = getuint8SigValue(peps_0x479.data,4,33,33);
  peps_0x479.PEPS_479_CID_Left_Alert = getuint8SigValue(peps_0x479.data,4,34,34);
  peps_0x479.PEPS_479_DOOR_Lock_Ig_NotOff_Alert = getuint8SigValue(peps_0x479.data,4,35,35);
  peps_0x479.PEPS_479_DOOR_Open_Lock_Alert = getuint8SigValue(peps_0x479.data,4,36,36);
  peps_0x479.PEPS_479_Key_Insid_Vehicle_Alert = getuint8SigValue(peps_0x479.data,4,37,37);
}
void bcm_0x4a0SigAlysis(void)
{
  bcm_0x4a0.BCM_4A0_HIGH_BEAM_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,0,0,0);
  bcm_0x4a0.BCM_4A0_LOW_BEAM_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,0,1,1);
  bcm_0x4a0.BCM_4A0_FRONT_POSITION_LAMP_CMD = getuint8SigValue(bcm_0x4a0.data,0,2,2);
  bcm_0x4a0.BCM_4A0_FRONT_FOG_LAMP_CMD = getuint8SigValue(bcm_0x4a0.data,0,3,3);
  bcm_0x4a0.BCM_4A0_REAR_FOG_LAMP_CMD = getuint8SigValue(bcm_0x4a0.data,0,7,7);
  bcm_0x4a0.BCM_4A0_LEFT_TRUN_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,1,14,14);
  bcm_0x4a0.BCM_4A0_RIGHT_TRUN_LIGHT_CMD = getuint8SigValue(bcm_0x4a0.data,1,15,15);
  bcm_0x4a0.BCM_4A0_EXTERIOR_LAMP_SWITCH = getuint8SigValue(bcm_0x4a0.data,2,21,22);
}
void uec_0x4c9SigAlysis(void)
{
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Left_Err = getuint8SigValue(uec_0x4c9.data,0,0,0);
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Left_Err = getuint8SigValue(uec_0x4c9.data,0,1,2);
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Lamp_Right_Err = getuint8SigValue(uec_0x4c9.data,0,3,3);
  uec_0x4c9.UEC_4C9_Hs_HLBeam_Light_Right_Err = getuint8SigValue(uec_0x4c9.data,0,4,5);
  uec_0x4c9.UEC_4C9_Hs_HLBeam_FDSF_Err = getuint8SigValue(uec_0x4c9.data,0,6,7);
  uec_0x4c9.UEC_4C9_Hs_Position_Lamp_Err = getuint8SigValue(uec_0x4c9.data,1,8,9);
  uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Left_Err = getuint8SigValue(uec_0x4c9.data,1,10,11);
  uec_0x4c9.UEC_4C9_Hs_Daytime_Light_Right_Err = getuint8SigValue(uec_0x4c9.data,1,12,13);
  uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Left_Err = getuint8SigValue(uec_0x4c9.data,1,14,15);
  uec_0x4c9.UEC_4C9_Hs_FrontFog_Light_Right_Err = getuint8SigValue(uec_0x4c9.data,2,16,17);
  uec_0x4c9.UEC_4C9_Hs_LR_Brake_Light_Err = getuint8SigValue(uec_0x4c9.data,2,18,19);
  uec_0x4c9.UEC_4C9_Hs_High_Brake_Light_Err = getuint8SigValue(uec_0x4c9.data,2,20,21);
}
void peps_0x570SigAlysis(void)
{
  peps_0x570.PEPS_570_Door_Lock_Cmd = getuint8SigValue(peps_0x570.data,0,0,1);
}
void bcm_0x660SigAlysis(void)
{
  bcm_0x660.BCM_660_FD_DOOR_STS = getuint8SigValue(bcm_0x660.data,0,2,2);
  bcm_0x660.BCM_660_FP_DOOR_STS = getuint8SigValue(bcm_0x660.data,0,3,3);
  bcm_0x660.BCM_660_FOLLOW_ME_HOME_STS = getuint8SigValue(bcm_0x660.data,0,6,6);
  bcm_0x660.BCM_660_TRUNK_STA = getuint8SigValue(bcm_0x660.data,0,7,7);
}
void bcm_0x661SigAlysis(void)
{
  bcm_0x661.BCM_661_EB_ODO_VALID = getuint8SigValue(bcm_0x661.data,1,8,8);
  bcm_0x661.BCM_661_ODOMETER_RESET_COUNTER = getuint8SigValue(bcm_0x661.data,1,9,10);
  bcm_0x661.BCM_661_EB_ODO_DISTANCE = getuint32SigValue(bcm_0x661.data,5,32);
  bcm_0x661.BCM_661_ODOMETER_OFFSET = getuint8SigValue(bcm_0x661.data,6,48,55);
}
void tbox_0x6f2SigAlysis(void)
{
  tbox_0x6f2.TBOX_6F2_YEAR_TIME = getuint8SigValue(tbox_0x6f2.data,0,0,7);
  tbox_0x6f2.TBOX_6F2_MONTH_TIME = getuint8SigValue(tbox_0x6f2.data,1,12,15);
  tbox_0x6f2.TBOX_6F2_DAY_TIME = getuint8SigValue(tbox_0x6f2.data,2,16,20);
  tbox_0x6f2.TBOX_6F2_HOUR_TIME = getuint8SigValue(tbox_0x6f2.data,3,27,31);
  tbox_0x6f2.TBOX_6F2_MINUTE_TIME = getuint8SigValue(tbox_0x6f2.data,4,32,37);
}
