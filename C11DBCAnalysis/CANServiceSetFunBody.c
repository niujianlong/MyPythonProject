/*VCU_0x212 missing default process*/
void set_VCU_SHIFT_POSITON( uint8 VCU_212_SHIFT_POSITON)
{
     setuint8SigValue(vcu_0x212.data,4,34,3,VCU_212_SHIFT_POSITON);
}

void set_VCU_SHIFT_ERROR_OP( uint8 VCU_212_SHIFT_ERROR_OP)
{
     setuint8SigValue(vcu_0x212.data,4,38,1,VCU_212_SHIFT_ERROR_OP);
}

/*VCU_0x214 missing default process*/
void set_VCU_VEH_STATE( uint16 VCU_214_VEH_STATE)
{
     setuint16SigValue(vcu_0x214.data,1,16,VCU_214_VEH_STATE);
}

/*MCU_0x230 missing default process*/
void set_MCU_SYS_FAULT_LAMP( uint8 MCU_230_SYS_FAULT_LAMP)
{
     setuint8SigValue(mcu_0x230.data,0,0,2,MCU_230_SYS_FAULT_LAMP);
}

void set_MCU_BRAKE_ENGERY_RECOV_STA( uint8 MCU_230_BRAKE_ENGERY_RECOV_STA)
{
     setuint8SigValue(mcu_0x230.data,0,2,1,MCU_230_BRAKE_ENGERY_RECOV_STA);
}

void set_MCU_MOT_FAULT_LAMP( uint8 MCU_230_MOT_FAULT_LAMP)
{
     setuint8SigValue(mcu_0x230.data,1,8,2,MCU_230_MOT_FAULT_LAMP);
}

void set_MCU_FAULT_ALARM( uint8 MCU_230_FAULT_ALARM)
{
     setuint8SigValue(mcu_0x230.data,1,10,2,MCU_230_FAULT_ALARM);
}

void set_MCU_LIMP_LAMP( uint8 MCU_230_LIMP_LAMP)
{
     setuint8SigValue(mcu_0x230.data,1,12,1,MCU_230_LIMP_LAMP);
}

void set_MCU_MOT_TEMP_H_IND( uint8 MCU_230_MOT_TEMP_H_IND)
{
     setuint8SigValue(mcu_0x230.data,1,13,1,MCU_230_MOT_TEMP_H_IND);
}

void set_MCU_MOT_FAULT_IND( uint8 MCU_230_MOT_FAULT_IND)
{
     setuint8SigValue(mcu_0x230.data,1,14,1,MCU_230_MOT_FAULT_IND);
}

void set_MCU_MOT_SYS_TEMP_HIGH_LAMP( uint8 MCU_230_MOT_SYS_TEMP_HIGH_LAMP)
{
     setuint8SigValue(mcu_0x230.data,1,15,1,MCU_230_MOT_SYS_TEMP_HIGH_LAMP);
}

void set_MCU_MCU_PWR_PENT( uint8 MCU_230_MCU_PWR_PENT)
{
     setuint8SigValue(mcu_0x230.data,6,48,8,MCU_230_MCU_PWR_PENT);
}

/*ABS_0x318 missing default process*/
void set_ABS_ABSActive( uint8 ABS_318_ABSActive)
{
     setuint8SigValue(abs_0x318.data,2,22,1,ABS_318_ABSActive);
}

void set_ABS_ABSFail( uint8 ABS_318_ABSFail)
{
     setuint8SigValue(abs_0x318.data,2,21,1,ABS_318_ABSFail);
}

void set_ABS_EBDFail( uint8 ABS_318_EBDFail)
{
     setuint8SigValue(abs_0x318.data,2,20,1,ABS_318_EBDFail);
}

/*MCU_0x430 missing default process*/
void set_MCU_MOT_SPD( uint16 MCU_430_MOT_SPD)
{
     setuint16SigValue(mcu_0x430.data,3,16,MCU_430_MOT_SPD);
}

/*BMS_0x450 missing default process*/
void set_BMS_BATT_SOC( uint8 BMS_450_BATT_SOC)
{
     setuint8SigValue(bms_0x450.data,1,8,8,BMS_450_BATT_SOC);
}

/*BMS_0x451 missing default process*/
void set_BMS_BATT_CUR( uint16 BMS_451_BATT_CUR)
{
     setuint16SigValue(bms_0x451.data,3,16,BMS_451_BATT_CUR);
}

void set_BMS_BATT_VOLT_V2( uint16 BMS_451_BATT_VOLT_V2)
{
     setuint16SigValue(bms_0x451.data,5,16,BMS_451_BATT_VOLT_V2);
}

/*EPS_0x470 missing default process*/
void set_EPS_EPS_STA( uint8 EPS_470_EPS_STA)
{
     setuint8SigValue(eps_0x470.data,0,1,2,EPS_470_EPS_STA);
}

/*EPB_0x4C8 missing default process*/
void set_EPB_EPB_ParkLampState( uint8 EPB_4C8_EPB_ParkLampState)
{
     setuint8SigValue(epb_0x4c8.data,0,0,2,EPB_4C8_EPB_ParkLampState);
}

void set_EPB_EPB_WarningLampState( uint8 EPB_4C8_EPB_WarningLampState)
{
     setuint8SigValue(epb_0x4c8.data,0,2,2,EPB_4C8_EPB_WarningLampState);
}

/*ECC_0x4E0 missing default process*/
void set_ECC_OUT_TEMP( uint8 ECC_4E0_OUT_TEMP)
{
     setuint8SigValue(ecc_0x4e0.data,2,16,8,ECC_4E0_OUT_TEMP);
}

/*EHU_0x585 missing default process*/
void set_EHU_EHU_Theme( uint8 EHU_585_EHU_Theme)
{
     setuint8SigValue(ehu_0x585.data,6,48,2,EHU_585_EHU_Theme);
}

void set_EHU_EHU_State( uint8 EHU_585_EHU_State)
{
     setuint8SigValue(ehu_0x585.data,6,50,2,EHU_585_EHU_State);
}

/*VCU_0x611 missing default process*/
void set_VCU_READY_LAMP( uint8 VCU_611_READY_LAMP)
{
     setuint8SigValue(vcu_0x611.data,0,3,1,VCU_611_READY_LAMP);
}

void set_VCU_BATT_PWRON( uint8 VCU_611_BATT_PWRON)
{
     setuint8SigValue(vcu_0x611.data,0,6,1,VCU_611_BATT_PWRON);
}

void set_VCU_OBC_ERR_IND( uint8 VCU_611_OBC_ERR_IND)
{
     setuint8SigValue(vcu_0x611.data,1,8,1,VCU_611_OBC_ERR_IND);
}

void set_VCU_FAULT_ALARM( uint8 VCU_611_FAULT_ALARM)
{
     setuint8SigValue(vcu_0x611.data,1,10,2,VCU_611_FAULT_ALARM);
}

void set_VCU_CHARG_CONNECT_LAMP( uint8 VCU_611_CHARG_CONNECT_LAMP)
{
     setuint8SigValue(vcu_0x611.data,1,12,1,VCU_611_CHARG_CONNECT_LAMP);
}

void set_VCU_Batt_FAULT_IND( uint8 VCU_611_Batt_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,1,13,1,VCU_611_Batt_FAULT_IND);
}

void set_VCU_LIMP_LAMP( uint8 VCU_611_LIMP_LAMP)
{
     setuint8SigValue(vcu_0x611.data,3,24,1,VCU_611_LIMP_LAMP);
}

void set_VCU_VEH_INSULATION_FAULT_IND( uint8 VCU_611_VEH_INSULATION_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,3,25,1,VCU_611_VEH_INSULATION_FAULT_IND);
}

void set_VCU_BATT_FAULT_IND( uint8 VCU_611_BATT_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,3,28,1,VCU_611_BATT_FAULT_IND);
}

void set_VCU_BRAKE_FAULT_IND( uint8 VCU_611_BRAKE_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,3,30,1,VCU_611_BRAKE_FAULT_IND);
}

void set_VCU_N_START_REQ( uint8 VCU_611_N_START_REQ)
{
     setuint8SigValue(vcu_0x611.data,4,35,1,VCU_611_N_START_REQ);
}

void set_VCU_BATT_FAULT_LAMP( uint8 VCU_611_BATT_FAULT_LAMP)
{
     setuint8SigValue(vcu_0x611.data,7,58,1,VCU_611_BATT_FAULT_LAMP);
}

void set_VCU_OBC_REMIND_LAMP( uint8 VCU_611_OBC_REMIND_LAMP)
{
     setuint8SigValue(vcu_0x611.data,7,60,1,VCU_611_OBC_REMIND_LAMP);
}

/*VCU_0x615 missing default process*/
void set_VCU_ENERGY_CONSUM_AV( uint16 VCU_615_ENERGY_CONSUM_AV)
{
     setuint16SigValue(vcu_0x615.data,7,16,VCU_615_ENERGY_CONSUM_AV);
}

/*VCU_0x616 missing default process*/
void set_VCU_DRIVE_RANGE( uint16 VCU_616_DRIVE_RANGE)
{
     setuint16SigValue(vcu_0x616.data,1,16,VCU_616_DRIVE_RANGE);
}

/*VCU_0x617 missing default process*/
void set_VCU_SYS_FAULT_LAMP( uint8 VCU_617_SYS_FAULT_LAMP)
{
     setuint8SigValue(vcu_0x617.data,0,0,2,VCU_617_SYS_FAULT_LAMP);
}

void set_VCU_BRAKE_ENGERY_RECOV_LEVEL( uint8 VCU_617_BRAKE_ENGERY_RECOV_LEVEL)
{
     setuint8SigValue(vcu_0x617.data,0,3,3,VCU_617_BRAKE_ENGERY_RECOV_LEVEL);
}

void set_VCU_OBC_SOON( uint8 VCU_617_OBC_SOON)
{
     setuint8SigValue(vcu_0x617.data,0,6,1,VCU_617_OBC_SOON);
}

void set_VCU_VEH_SPD( uint16 VCU_617_VEH_SPD)
{
     setuint16SigValue(vcu_0x617.data,3,16,VCU_617_VEH_SPD);
}

void set_VCU_ENERGY_CONSUM_IN( uint16 VCU_617_ENERGY_CONSUM_IN)
{
     setuint16SigValue(vcu_0x617.data,7,16,VCU_617_ENERGY_CONSUM_IN);
}

/*VCU_0x61D missing default process*/
void set_VCU_CHG_STATE( uint8 VCU_61D_CHG_STATE)
{
     setuint8SigValue(vcu_0x61d.data,1,10,3,VCU_61D_CHG_STATE);
}

void set_VCU_BATT_HEAT_STA( uint8 VCU_61D_BATT_HEAT_STA)
{
     setuint8SigValue(vcu_0x61d.data,2,18,2,VCU_61D_BATT_HEAT_STA);
}

/*PDC_0x1B0 missing default process*/
void set_PDC_SYSTEM_STATUS( uint8 PDC_1B0_SYSTEM_STATUS)
{
     setuint8SigValue(pdc_0x1b0.data,0,0,4,PDC_1B0_SYSTEM_STATUS);
}

void set_PDC_SYSTEM_ALARM_LEVEL( uint8 PDC_1B0_SYSTEM_ALARM_LEVEL)
{
     setuint8SigValue(pdc_0x1b0.data,0,4,4,PDC_1B0_SYSTEM_ALARM_LEVEL);
}

void set_PDC_MRL_OBSTACLE_DIS( uint8 PDC_1B0_MRL_OBSTACLE_DIS)
{
     setuint8SigValue(pdc_0x1b0.data,1,8,8,PDC_1B0_MRL_OBSTACLE_DIS);
}

void set_PDC_RL_OBSTACLE_DIS( uint8 PDC_1B0_RL_OBSTACLE_DIS)
{
     setuint8SigValue(pdc_0x1b0.data,3,24,8,PDC_1B0_RL_OBSTACLE_DIS);
}

void set_PDC_RR_OBSTACLE_DIS( uint8 PDC_1B0_RR_OBSTACLE_DIS)
{
     setuint8SigValue(pdc_0x1b0.data,4,32,8,PDC_1B0_RR_OBSTACLE_DIS);
}

void set_PDC_OBSTACLE_DIS_MIN( uint8 PDC_1B0_OBSTACLE_DIS_MIN)
{
     setuint8SigValue(pdc_0x1b0.data,5,40,8,PDC_1B0_OBSTACLE_DIS_MIN);
}

/*vbus_VCU_0x214 missing default process*/
void setvbus_VCU_VEH_STATE( uint16 VCU_214_VEH_STATE)
{
     setuint16SigValue(vbus_vcu_0x214.data,1,16,VCU_214_VEH_STATE);
}

/*vbus_MCU_0x230 missing default process*/
void setvbus_MCU_ASR_OFF_LAMP( uint8 MCU_230_ASR_OFF_LAMP)
{
     setuint8SigValue(vbus_mcu_0x230.data,6,50,1,MCU_230_ASR_OFF_LAMP);
}

void setvbus_MCU_ASR_EN_LAMP( uint8 MCU_230_ASR_EN_LAMP)
{
     setuint8SigValue(vbus_mcu_0x230.data,4,35,8,MCU_230_ASR_EN_LAMP);
}

/*TPMS_0x2A0 missing default process*/
void set_TPMS_TIRE_POSITION( uint8 TPMS_2A0_TIRE_POSITION)
{
     setuint8SigValue(tpms_0x2a0.data,0,0,4,TPMS_2A0_TIRE_POSITION);
}

void set_TPMS_SIGNAL_TIRE_STATUS( uint8 TPMS_2A0_SIGNAL_TIRE_STATUS)
{
     setuint8SigValue(tpms_0x2a0.data,0,4,1,TPMS_2A0_SIGNAL_TIRE_STATUS);
}

void set_TPMS_SYSTEM_STATUS( uint8 TPMS_2A0_SYSTEM_STATUS)
{
     setuint8SigValue(tpms_0x2a0.data,0,5,3,TPMS_2A0_SYSTEM_STATUS);
}

void set_TPMS_SIGNAL_TIRE_LEAK_STATUS( uint8 TPMS_2A0_SIGNAL_TIRE_LEAK_STATUS)
{
     setuint8SigValue(tpms_0x2a0.data,1,8,2,TPMS_2A0_SIGNAL_TIRE_LEAK_STATUS);
}

void set_TPMS_SIGNAL_TIRE_PRESSURE_STATUS( uint8 TPMS_2A0_SIGNAL_TIRE_PRESSURE_STATUS)
{
     setuint8SigValue(tpms_0x2a0.data,1,10,2,TPMS_2A0_SIGNAL_TIRE_PRESSURE_STATUS);
}

void set_TPMS_SIGNAL_TIRE_TEMPERATURE( uint8 TPMS_2A0_SIGNAL_TIRE_TEMPERATURE)
{
     setuint8SigValue(tpms_0x2a0.data,1,12,2,TPMS_2A0_SIGNAL_TIRE_TEMPERATURE);
}

void set_TPMS_SIGNAL_SENSOR_SOC_STATUS( uint8 TPMS_2A0_SIGNAL_SENSOR_SOC_STATUS)
{
     setuint8SigValue(tpms_0x2a0.data,1,14,2,TPMS_2A0_SIGNAL_SENSOR_SOC_STATUS);
}

void set_TPMS_SIGNAL_TIRE_PRESSURE( uint16 TPMS_2A0_SIGNAL_TIRE_PRESSURE)
{
     setuint16SigValue(tpms_0x2a0.data,3,12,TPMS_2A0_SIGNAL_TIRE_PRESSURE);
}

void set_TPMS_SIGNAL_TIRE_TEMPERATURE_VEL( uint16 TPMS_2A0_SIGNAL_TIRE_TEMPERATURE_VEL)
{
     setuint16SigValue(tpms_0x2a0.data,5,12,TPMS_2A0_SIGNAL_TIRE_TEMPERATURE_VEL);
}

void set_TPMS_SIGNAL_SENSOR_SOC( uint8 TPMS_2A0_SIGNAL_SENSOR_SOC)
{
     setuint8SigValue(tpms_0x2a0.data,6,48,8,TPMS_2A0_SIGNAL_SENSOR_SOC);
}

void set_TPMS_ALARM_STATUS( uint8 TPMS_2A0_ALARM_STATUS)
{
     setuint8SigValue(tpms_0x2a0.data,7,56,1,TPMS_2A0_ALARM_STATUS);
}

/*PEPS_0x479 missing default process*/
void set_PEPS_POWER_MODE( uint8 PEPS_479_POWER_MODE)
{
     setuint8SigValue(peps_0x479.data,1,8,2,PEPS_479_POWER_MODE);
}

void set_PEPS_RM_Key_LowBattery_Alert( uint8 PEPS_479_RM_Key_LowBattery_Alert)
{
     setuint8SigValue(peps_0x479.data,3,28,1,PEPS_479_RM_Key_LowBattery_Alert);
}

void set_PEPS_AuthFailWarning( uint8 PEPS_479_AuthFailWarning)
{
     setuint8SigValue(peps_0x479.data,3,29,1,PEPS_479_AuthFailWarning);
}

void set_PEPS_One_KeyStart_Swith_Error( uint8 PEPS_479_One_KeyStart_Swith_Error)
{
     setuint8SigValue(peps_0x479.data,3,30,1,PEPS_479_One_KeyStart_Swith_Error);
}

void set_PEPS_Press_Brake_Pedal_Alert( uint8 PEPS_479_Press_Brake_Pedal_Alert)
{
     setuint8SigValue(peps_0x479.data,3,31,1,PEPS_479_Press_Brake_Pedal_Alert);
}

void set_PEPS_ESCLWarning( uint8 PEPS_479_ESCLWarning)
{
     setuint8SigValue(peps_0x479.data,4,32,1,PEPS_479_ESCLWarning);
}

void set_PEPS_ETWS_Alert( uint8 PEPS_479_ETWS_Alert)
{
     setuint8SigValue(peps_0x479.data,4,33,1,PEPS_479_ETWS_Alert);
}

void set_PEPS_CID_Left_Alert( uint8 PEPS_479_CID_Left_Alert)
{
     setuint8SigValue(peps_0x479.data,4,34,1,PEPS_479_CID_Left_Alert);
}

void set_PEPS_DOOR_Lock_Ig_NotOff_Alert( uint8 PEPS_479_DOOR_Lock_Ig_NotOff_Alert)
{
     setuint8SigValue(peps_0x479.data,4,35,1,PEPS_479_DOOR_Lock_Ig_NotOff_Alert);
}

void set_PEPS_DOOR_Open_Lock_Alert( uint8 PEPS_479_DOOR_Open_Lock_Alert)
{
     setuint8SigValue(peps_0x479.data,4,36,1,PEPS_479_DOOR_Open_Lock_Alert);
}

void set_PEPS_Key_Insid_Vehicle_Alert( uint8 PEPS_479_Key_Insid_Vehicle_Alert)
{
     setuint8SigValue(peps_0x479.data,4,37,1,PEPS_479_Key_Insid_Vehicle_Alert);
}

/*BCM_0x4A0 missing default process*/
void set_BCM_HIGH_BEAM_LIGHT_CMD( uint8 BCM_4A0_HIGH_BEAM_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,0,1,BCM_4A0_HIGH_BEAM_LIGHT_CMD);
}

void set_BCM_LOW_BEAM_LIGHT_CMD( uint8 BCM_4A0_LOW_BEAM_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,1,1,BCM_4A0_LOW_BEAM_LIGHT_CMD);
}

void set_BCM_FRONT_POSITION_LAMP_CMD( uint8 BCM_4A0_FRONT_POSITION_LAMP_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,2,1,BCM_4A0_FRONT_POSITION_LAMP_CMD);
}

void set_BCM_FRONT_FOG_LAMP_CMD( uint8 BCM_4A0_FRONT_FOG_LAMP_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,3,1,BCM_4A0_FRONT_FOG_LAMP_CMD);
}

void set_BCM_REAR_FOG_LAMP_CMD( uint8 BCM_4A0_REAR_FOG_LAMP_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,7,1,BCM_4A0_REAR_FOG_LAMP_CMD);
}

void set_BCM_LEFT_TRUN_LIGHT_CMD( uint8 BCM_4A0_LEFT_TRUN_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,1,14,1,BCM_4A0_LEFT_TRUN_LIGHT_CMD);
}

void set_BCM_RIGHT_TRUN_LIGHT_CMD( uint8 BCM_4A0_RIGHT_TRUN_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,1,15,1,BCM_4A0_RIGHT_TRUN_LIGHT_CMD);
}

void set_BCM_EXTERIOR_LAMP_SWITCH( uint8 BCM_4A0_EXTERIOR_LAMP_SWITCH)
{
     setuint8SigValue(bcm_0x4a0.data,2,21,2,BCM_4A0_EXTERIOR_LAMP_SWITCH);
}

/*UEC_0x4C9 missing default process*/
void set_UEC_Hs_HLBeam_Lamp_Left_Err( uint8 UEC_4C9_Hs_HLBeam_Lamp_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,0,1,UEC_4C9_Hs_HLBeam_Lamp_Left_Err);
}

void set_UEC_Hs_HLBeam_Light_Left_Err( uint8 UEC_4C9_Hs_HLBeam_Light_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,1,2,UEC_4C9_Hs_HLBeam_Light_Left_Err);
}

void set_UEC_Hs_HLBeam_Lamp_Right_Err( uint8 UEC_4C9_Hs_HLBeam_Lamp_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,3,1,UEC_4C9_Hs_HLBeam_Lamp_Right_Err);
}

void set_UEC_Hs_HLBeam_Light_Right_Err( uint8 UEC_4C9_Hs_HLBeam_Light_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,4,2,UEC_4C9_Hs_HLBeam_Light_Right_Err);
}

void set_UEC_Hs_HLBeam_FDSF_Err( uint8 UEC_4C9_Hs_HLBeam_FDSF_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,6,2,UEC_4C9_Hs_HLBeam_FDSF_Err);
}

void set_UEC_Hs_Position_Lamp_Err( uint8 UEC_4C9_Hs_Position_Lamp_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,8,2,UEC_4C9_Hs_Position_Lamp_Err);
}

void set_UEC_Hs_Daytime_Light_Left_Err( uint8 UEC_4C9_Hs_Daytime_Light_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,10,2,UEC_4C9_Hs_Daytime_Light_Left_Err);
}

void set_UEC_Hs_Daytime_Light_Right_Err( uint8 UEC_4C9_Hs_Daytime_Light_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,12,2,UEC_4C9_Hs_Daytime_Light_Right_Err);
}

void set_UEC_Hs_FrontFog_Light_Left_Err( uint8 UEC_4C9_Hs_FrontFog_Light_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,14,2,UEC_4C9_Hs_FrontFog_Light_Left_Err);
}

void set_UEC_Hs_FrontFog_Light_Right_Err( uint8 UEC_4C9_Hs_FrontFog_Light_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,2,16,2,UEC_4C9_Hs_FrontFog_Light_Right_Err);
}

void set_UEC_Hs_LR_Brake_Light_Err( uint8 UEC_4C9_Hs_LR_Brake_Light_Err)
{
     setuint8SigValue(uec_0x4c9.data,2,18,2,UEC_4C9_Hs_LR_Brake_Light_Err);
}

void set_UEC_Hs_High_Brake_Light_Err( uint8 UEC_4C9_Hs_High_Brake_Light_Err)
{
     setuint8SigValue(uec_0x4c9.data,2,20,2,UEC_4C9_Hs_High_Brake_Light_Err);
}

/*PEPS_0x570 missing default process*/
void set_PEPS_Door_Lock_Cmd( uint8 PEPS_570_Door_Lock_Cmd)
{
     setuint8SigValue(peps_0x570.data,0,0,2,PEPS_570_Door_Lock_Cmd);
}

/*ICM_0x620 missing default process*/
void set_ICM_DATA_VALID_ODO( uint8 ICM_620_DATA_VALID_ODO)
{
     setuint8SigValue(icm_0x620.data,0,1,1,ICM_620_DATA_VALID_ODO);
}

void set_ICM_ODOMETER_RESET_COUNTER( uint8 ICM_620_ODOMETER_RESET_COUNTER)
{
     setuint8SigValue(icm_0x620.data,0,2,2,ICM_620_ODOMETER_RESET_COUNTER);
}

void set_ICM_DISPLAYED_TOTAL_DISTANCE( uint32 ICM_620_DISPLAYED_TOTAL_DISTANCE)
{
     setuint32SigValue(icm_0x620.data,4,32,ICM_620_DISPLAYED_TOTAL_DISTANCE);
}

void set_ICM_ODOMETER_OFFSET( uint8 ICM_620_ODOMETER_OFFSET)
{
     setuint8SigValue(icm_0x620.data,5,40,8,ICM_620_ODOMETER_OFFSET);
}

/*BCM_0x660 missing default process*/
void set_BCM_FD_DOOR_STS( uint8 BCM_660_FD_DOOR_STS)
{
     setuint8SigValue(bcm_0x660.data,0,2,1,BCM_660_FD_DOOR_STS);
}

void set_BCM_FP_DOOR_STS( uint8 BCM_660_FP_DOOR_STS)
{
     setuint8SigValue(bcm_0x660.data,0,3,1,BCM_660_FP_DOOR_STS);
}

void set_BCM_FOLLOW_ME_HOME_STS( uint8 BCM_660_FOLLOW_ME_HOME_STS)
{
     setuint8SigValue(bcm_0x660.data,0,6,1,BCM_660_FOLLOW_ME_HOME_STS);
}

void set_BCM_TRUNK_STA( uint8 BCM_660_TRUNK_STA)
{
     setuint8SigValue(bcm_0x660.data,0,7,1,BCM_660_TRUNK_STA);
}

/*BCM_0x661 missing default process*/
void set_BCM_EB_ODO_VALID( uint8 BCM_661_EB_ODO_VALID)
{
     setuint8SigValue(bcm_0x661.data,1,8,1,BCM_661_EB_ODO_VALID);
}

void set_BCM_ODOMETER_RESET_COUNTER( uint8 BCM_661_ODOMETER_RESET_COUNTER)
{
     setuint8SigValue(bcm_0x661.data,1,9,2,BCM_661_ODOMETER_RESET_COUNTER);
}

void set_BCM_EB_ODO_DISTANCE( uint32 BCM_661_EB_ODO_DISTANCE)
{
     setuint32SigValue(bcm_0x661.data,5,32,BCM_661_EB_ODO_DISTANCE);
}

void set_BCM_ODOMETER_OFFSET( uint8 BCM_661_ODOMETER_OFFSET)
{
     setuint8SigValue(bcm_0x661.data,6,48,8,BCM_661_ODOMETER_OFFSET);
}

/*ICM_0x6A0 missing default process*/
void set_ICM_ODO( uint32 ICM_6A0_ODO)
{
     setuint32SigValue(icm_0x6a0.data,3,24,ICM_6A0_ODO);
}

/*ICM_0x6A2 missing default process*/
void set_ICM_IP_Fault( uint8 ICM_6A2_IP_Fault)
{
     setuint8SigValue(icm_0x6a2.data,0,2,1,ICM_6A2_IP_Fault);
}

void set_ICM_IP_Theme( uint8 ICM_6A2_IP_Theme)
{
     setuint8SigValue(icm_0x6a2.data,0,3,2,ICM_6A2_IP_Theme);
}

void set_ICM_Distance_To_Service( uint32 ICM_6A2_Distance_To_Service)
{
     setuint32SigValue(icm_0x6a2.data,3,24,ICM_6A2_Distance_To_Service);
}

void set_ICM_Day_To_Service( uint16 ICM_6A2_Day_To_Service)
{
     setuint16SigValue(icm_0x6a2.data,6,16,ICM_6A2_Day_To_Service);
}

/*ICM_0x6AF missing default process*/
void set_ICM_CAL_VERS( uint8 ICM_6AF_CAL_VERS)
{
     setuint8SigValue(icm_0x6af.data,1,8,8,ICM_6AF_CAL_VERS);
}

void set_ICM_PART_VERS( uint32 ICM_6AF_PART_VERS)
{
     setuint32SigValue(icm_0x6af.data,5,32,ICM_6AF_PART_VERS);
}

void set_ICM_HW_VERS( uint8 ICM_6AF_HW_VERS)
{
     setuint8SigValue(icm_0x6af.data,6,48,8,ICM_6AF_HW_VERS);
}

void set_ICM_SW_VERS( uint8 ICM_6AF_SW_VERS)
{
     setuint8SigValue(icm_0x6af.data,7,56,8,ICM_6AF_SW_VERS);
}

/*TBOX_0x6F2 missing default process*/
void set_TBOX_YEAR_TIME( uint8 TBOX_6F2_YEAR_TIME)
{
     setuint8SigValue(tbox_0x6f2.data,0,0,8,TBOX_6F2_YEAR_TIME);
}

void set_TBOX_MONTH_TIME( uint8 TBOX_6F2_MONTH_TIME)
{
     setuint8SigValue(tbox_0x6f2.data,1,12,4,TBOX_6F2_MONTH_TIME);
}

void set_TBOX_DAY_TIME( uint8 TBOX_6F2_DAY_TIME)
{
     setuint8SigValue(tbox_0x6f2.data,2,16,5,TBOX_6F2_DAY_TIME);
}

void set_TBOX_HOUR_TIME( uint8 TBOX_6F2_HOUR_TIME)
{
     setuint8SigValue(tbox_0x6f2.data,3,27,5,TBOX_6F2_HOUR_TIME);
}

void set_TBOX_MINUTE_TIME( uint8 TBOX_6F2_MINUTE_TIME)
{
     setuint8SigValue(tbox_0x6f2.data,4,32,6,TBOX_6F2_MINUTE_TIME);
}

