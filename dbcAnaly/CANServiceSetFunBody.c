/*VCU_0x212 missing default process*/
void set_VCU_212_SHIFT_POSITON( uint8 VCU_212_SHIFT_POSITON)
{
     setuint8SigValue(vcu_0x212.data,4,34,3,VCU_212_SHIFT_POSITON);
}

void set_VCU_212_SHIFT_ERROR_OP( uint8 VCU_212_SHIFT_ERROR_OP)
{
     setuint8SigValue(vcu_0x212.data,4,38,1,VCU_212_SHIFT_ERROR_OP);
}

/*VCU_0x214 missing default process*/
void set_VCU_214_VEH_STATE( uint16 VCU_214_VEH_STATE)
{
     setuint16SigValue(vcu_0x214.data,1,16,VCU_214_VEH_STATE);
}

void set_VCU_214_REMOTE_SWITCH_STA( uint8 VCU_214_REMOTE_SWITCH_STA)
{
     setuint8SigValue(vcu_0x214.data,3,28,1,VCU_214_REMOTE_SWITCH_STA);
}

/*MCU_0x230 missing default process*/
void set_MCU_230_SYS_FAULT_LAMP( uint8 MCU_230_SYS_FAULT_LAMP)
{
     setuint8SigValue(mcu_0x230.data,0,0,2,MCU_230_SYS_FAULT_LAMP);
}

void set_MCU_230_BRAKE_ENGERY_RECOV_STA( uint8 MCU_230_BRAKE_ENGERY_RECOV_STA)
{
     setuint8SigValue(mcu_0x230.data,0,2,1,MCU_230_BRAKE_ENGERY_RECOV_STA);
}

void set_MCU_230_MOT_FAULT_LAMP( uint8 MCU_230_MOT_FAULT_LAMP)
{
     setuint8SigValue(mcu_0x230.data,1,8,2,MCU_230_MOT_FAULT_LAMP);
}

void set_MCU_230_FAULT_ALARM( uint8 MCU_230_FAULT_ALARM)
{
     setuint8SigValue(mcu_0x230.data,1,10,2,MCU_230_FAULT_ALARM);
}

void set_MCU_230_LIMP_LAMP( uint8 MCU_230_LIMP_LAMP)
{
     setuint8SigValue(mcu_0x230.data,1,12,1,MCU_230_LIMP_LAMP);
}

void set_MCU_230_MOT_TEMP_H_IND( uint8 MCU_230_MOT_TEMP_H_IND)
{
     setuint8SigValue(mcu_0x230.data,1,13,1,MCU_230_MOT_TEMP_H_IND);
}

void set_MCU_230_MOT_FAULT_IND( uint8 MCU_230_MOT_FAULT_IND)
{
     setuint8SigValue(mcu_0x230.data,1,14,1,MCU_230_MOT_FAULT_IND);
}

void set_MCU_230_MOT_SYS_TEMP_HIGH_LAMP( uint8 MCU_230_MOT_SYS_TEMP_HIGH_LAMP)
{
     setuint8SigValue(mcu_0x230.data,1,15,1,MCU_230_MOT_SYS_TEMP_HIGH_LAMP);
}

void set_MCU_230_MCU_PWR_PENT( uint8 MCU_230_MCU_PWR_PENT)
{
     setuint8SigValue(mcu_0x230.data,6,48,8,MCU_230_MCU_PWR_PENT);
}

/*ABS_0x318 missing default process*/
void set_ABS_318_VehSpd( uint16 ABS_318_VehSpd)
{
     setuint16SigValue(abs_0x318.data,4,16,ABS_318_VehSpd);
}

void set_ABS_318_VehicleSpeedValid( uint8 ABS_318_VehicleSpeedValid)
{
     setuint8SigValue(abs_0x318.data,2,23,1,ABS_318_VehicleSpeedValid);
}

void set_ABS_318_ABSActive( uint8 ABS_318_ABSActive)
{
     setuint8SigValue(abs_0x318.data,2,22,1,ABS_318_ABSActive);
}

void set_ABS_318_ABSFail( uint8 ABS_318_ABSFail)
{
     setuint8SigValue(abs_0x318.data,2,21,1,ABS_318_ABSFail);
}

void set_ABS_318_EBDFail( uint8 ABS_318_EBDFail)
{
     setuint8SigValue(abs_0x318.data,2,20,1,ABS_318_EBDFail);
}

/*MCU_0x430 missing default process*/
void set_MCU_430_MOT_SPD( uint16 MCU_430_MOT_SPD)
{
     setuint16SigValue(mcu_0x430.data,3,16,MCU_430_MOT_SPD);
}

/*BMS_0x450 missing default process*/
void set_BMS_450_BATT_SOC( uint8 BMS_450_BATT_SOC)
{
     setuint8SigValue(bms_0x450.data,1,8,8,BMS_450_BATT_SOC);
}

/*BMS_0x451 missing default process*/
void set_BMS_451_BATT_CUR( uint16 BMS_451_BATT_CUR)
{
     setuint16SigValue(bms_0x451.data,3,16,BMS_451_BATT_CUR);
}

void set_BMS_451_BATT_VOLT_V2( uint16 BMS_451_BATT_VOLT_V2)
{
     setuint16SigValue(bms_0x451.data,5,16,BMS_451_BATT_VOLT_V2);
}

/*BMS_0x458 missing default process*/
void set_BMS_458_BATT_CHG_TYPE( uint8 BMS_458_BATT_CHG_TYPE)
{
     setuint8SigValue(bms_0x458.data,0,3,2,BMS_458_BATT_CHG_TYPE);
}

/*EPS_0x470 missing default process*/
void set_EPS_470_EPS_STA( uint8 EPS_470_EPS_STA)
{
     setuint8SigValue(eps_0x470.data,0,1,2,EPS_470_EPS_STA);
}

/*EPB_0x4C8 missing default process*/
void set_EPB_4C8_EPB_ParkLampState( uint8 EPB_4C8_EPB_ParkLampState)
{
     setuint8SigValue(epb_0x4c8.data,0,0,2,EPB_4C8_EPB_ParkLampState);
}

void set_EPB_4C8_EPB_WarningLampState( uint8 EPB_4C8_EPB_WarningLampState)
{
     setuint8SigValue(epb_0x4c8.data,0,2,2,EPB_4C8_EPB_WarningLampState);
}

/*ECC_0x4E0 missing default process*/
void set_ECC_4E0_OUT_TEMP( uint8 ECC_4E0_OUT_TEMP)
{
     setuint8SigValue(ecc_0x4e0.data,2,16,8,ECC_4E0_OUT_TEMP);
}

/*EHU_0x585 missing default process*/
void set_EHU_585_EHU_Theme( uint8 EHU_585_EHU_Theme)
{
     setuint8SigValue(ehu_0x585.data,6,48,2,EHU_585_EHU_Theme);
}

void set_EHU_585_EHU_State( uint8 EHU_585_EHU_State)
{
     setuint8SigValue(ehu_0x585.data,6,50,2,EHU_585_EHU_State);
}

/*VCU_0x611 missing default process*/
void set_VCU_611_READY_LAMP( uint8 VCU_611_READY_LAMP)
{
     setuint8SigValue(vcu_0x611.data,0,3,1,VCU_611_READY_LAMP);
}

void set_VCU_611_PARKING_IND( uint8 VCU_611_PARKING_IND)
{
     setuint8SigValue(vcu_0x611.data,0,5,1,VCU_611_PARKING_IND);
}

void set_VCU_611_BATT_PWRON( uint8 VCU_611_BATT_PWRON)
{
     setuint8SigValue(vcu_0x611.data,0,6,1,VCU_611_BATT_PWRON);
}

void set_VCU_611_FAULT_ALARM( uint8 VCU_611_FAULT_ALARM)
{
     setuint8SigValue(vcu_0x611.data,1,10,2,VCU_611_FAULT_ALARM);
}

void set_VCU_611_CHARG_CONNECT_LAMP( uint8 VCU_611_CHARG_CONNECT_LAMP)
{
     setuint8SigValue(vcu_0x611.data,1,12,1,VCU_611_CHARG_CONNECT_LAMP);
}

void set_VCU_611_Batt_FAULT_IND( uint8 VCU_611_Batt_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,1,13,1,VCU_611_Batt_FAULT_IND);
}

void set_VCU_611_LIMP_LAMP( uint8 VCU_611_LIMP_LAMP)
{
     setuint8SigValue(vcu_0x611.data,3,24,1,VCU_611_LIMP_LAMP);
}

void set_VCU_611_VEH_INSULATION_FAULT_IND( uint8 VCU_611_VEH_INSULATION_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,3,25,1,VCU_611_VEH_INSULATION_FAULT_IND);
}

void set_VCU_611_BATT_FAULT_IND( uint8 VCU_611_BATT_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,3,28,1,VCU_611_BATT_FAULT_IND);
}

void set_VCU_611_BRAKE_FAULT_IND( uint8 VCU_611_BRAKE_FAULT_IND)
{
     setuint8SigValue(vcu_0x611.data,3,30,1,VCU_611_BRAKE_FAULT_IND);
}

void set_VCU_611_N_START_REQ( uint8 VCU_611_N_START_REQ)
{
     setuint8SigValue(vcu_0x611.data,4,35,1,VCU_611_N_START_REQ);
}

void set_VCU_611_VEH_MODE( uint8 VCU_611_VEH_MODE)
{
     setuint8SigValue(vcu_0x611.data,6,48,8,VCU_611_VEH_MODE);
}

void set_VCU_611_BATT_FAULT_LAMP( uint8 VCU_611_BATT_FAULT_LAMP)
{
     setuint8SigValue(vcu_0x611.data,7,58,1,VCU_611_BATT_FAULT_LAMP);
}

void set_VCU_611_CHG_REMIND_LAMP( uint8 VCU_611_CHG_REMIND_LAMP)
{
     setuint8SigValue(vcu_0x611.data,7,60,1,VCU_611_CHG_REMIND_LAMP);
}

/*VCU_0x615 missing default process*/
void set_VCU_615_ENERGY_CONSUM_AV( uint16 VCU_615_ENERGY_CONSUM_AV)
{
     setuint16SigValue(vcu_0x615.data,7,16,VCU_615_ENERGY_CONSUM_AV);
}

/*VCU_0x616 missing default process*/
void set_VCU_616_DRIVE_RANGE( uint16 VCU_616_DRIVE_RANGE)
{
     setuint16SigValue(vcu_0x616.data,1,16,VCU_616_DRIVE_RANGE);
}

/*VCU_0x617 missing default process*/
void set_VCU_617_SYS_FAULT_LAMP( uint8 VCU_617_SYS_FAULT_LAMP)
{
     setuint8SigValue(vcu_0x617.data,0,0,2,VCU_617_SYS_FAULT_LAMP);
}

void set_VCU_617_BRAKE_ENGERY_RECOV_LEVEL( uint8 VCU_617_BRAKE_ENGERY_RECOV_LEVEL)
{
     setuint8SigValue(vcu_0x617.data,0,3,3,VCU_617_BRAKE_ENGERY_RECOV_LEVEL);
}

void set_VCU_617_ENERGY_CONSUM_IN( uint16 VCU_617_ENERGY_CONSUM_IN)
{
     setuint16SigValue(vcu_0x617.data,7,16,VCU_617_ENERGY_CONSUM_IN);
}

/*BMS_0x650 missing default process*/
void set_BMS_650_BATT_HEAT_STA( uint8 BMS_650_BATT_HEAT_STA)
{
     setuint8SigValue(bms_0x650.data,0,4,2,BMS_650_BATT_HEAT_STA);
}

/*ICM_0x6A0 missing default process*/
void set_ICM_6A0_ODO( uint32 ICM_6A0_ODO)
{
     setuint32SigValue(icm_0x6a0.data,3,24,ICM_6A0_ODO);
}

/*ICM_0x6A2 missing default process*/
void set_ICM_6A2_IP_Fault( uint8 ICM_6A2_IP_Fault)
{
     setuint8SigValue(icm_0x6a2.data,0,2,1,ICM_6A2_IP_Fault);
}

void set_ICM_6A2_IP_Theme( uint8 ICM_6A2_IP_Theme)
{
     setuint8SigValue(icm_0x6a2.data,0,3,2,ICM_6A2_IP_Theme);
}

void set_ICM_6A2_Distance_To_Service( uint32 ICM_6A2_Distance_To_Service)
{
     setuint32SigValue(icm_0x6a2.data,3,24,ICM_6A2_Distance_To_Service);
}

void set_ICM_6A2_Day_To_Service( uint16 ICM_6A2_Day_To_Service)
{
     setuint16SigValue(icm_0x6a2.data,6,16,ICM_6A2_Day_To_Service);
}

/*ICM_0x6AF missing default process*/
void set_ICM_6AF_CAL_VERS( uint8 ICM_6AF_CAL_VERS)
{
     setuint8SigValue(icm_0x6af.data,1,8,8,ICM_6AF_CAL_VERS);
}

void set_ICM_6AF_PART_VERS( uint32 ICM_6AF_PART_VERS)
{
     setuint32SigValue(icm_0x6af.data,5,32,ICM_6AF_PART_VERS);
}

void set_ICM_6AF_HW_VERS( uint8 ICM_6AF_HW_VERS)
{
     setuint8SigValue(icm_0x6af.data,6,48,8,ICM_6AF_HW_VERS);
}

void set_ICM_6AF_SW_VERS( uint8 ICM_6AF_SW_VERS)
{
     setuint8SigValue(icm_0x6af.data,7,56,8,ICM_6AF_SW_VERS);
}

/*CHG_0x6D0 missing default process*/
void set_CHG_6D0_CHG_STA( uint8 CHG_6D0_CHG_STA)
{
     setuint8SigValue(chg_0x6d0.data,0,0,4,CHG_6D0_CHG_STA);
}

/*VCU_0x214 missing default process*/
void set_VCU_214_VEH_STATE( uint16 VCU_214_VEH_STATE)
{
     setuint16SigValue(vcu_0x214.data,1,16,VCU_214_VEH_STATE);
}

/*PEPS_0x479 missing default process*/
void set_PEPS_479_POWER_MODE( uint8 PEPS_479_POWER_MODE)
{
     setuint8SigValue(peps_0x479.data,1,8,2,PEPS_479_POWER_MODE);
}

void set_PEPS_479_RM_Key_LowBattery_Alert( uint8 PEPS_479_RM_Key_LowBattery_Alert)
{
     setuint8SigValue(peps_0x479.data,3,28,1,PEPS_479_RM_Key_LowBattery_Alert);
}

void set_PEPS_479_AuthFailWarning( uint8 PEPS_479_AuthFailWarning)
{
     setuint8SigValue(peps_0x479.data,3,29,1,PEPS_479_AuthFailWarning);
}

void set_PEPS_479_One_KeyStart_Swith_Error( uint8 PEPS_479_One_KeyStart_Swith_Error)
{
     setuint8SigValue(peps_0x479.data,3,30,1,PEPS_479_One_KeyStart_Swith_Error);
}

void set_PEPS_479_Press_Brake_Pedal_Alert( uint8 PEPS_479_Press_Brake_Pedal_Alert)
{
     setuint8SigValue(peps_0x479.data,3,31,1,PEPS_479_Press_Brake_Pedal_Alert);
}

void set_PEPS_479_ESCLWarning( uint8 PEPS_479_ESCLWarning)
{
     setuint8SigValue(peps_0x479.data,4,32,1,PEPS_479_ESCLWarning);
}

void set_PEPS_479_ETWS_Alert( uint8 PEPS_479_ETWS_Alert)
{
     setuint8SigValue(peps_0x479.data,4,33,1,PEPS_479_ETWS_Alert);
}

void set_PEPS_479_CID_Left_Alert( uint8 PEPS_479_CID_Left_Alert)
{
     setuint8SigValue(peps_0x479.data,4,34,1,PEPS_479_CID_Left_Alert);
}

void set_PEPS_479_DOOR_Lock_Ig_NotOff_Alert( uint8 PEPS_479_DOOR_Lock_Ig_NotOff_Alert)
{
     setuint8SigValue(peps_0x479.data,4,35,1,PEPS_479_DOOR_Lock_Ig_NotOff_Alert);
}

void set_PEPS_479_DOOR_Open_Lock_Alert( uint8 PEPS_479_DOOR_Open_Lock_Alert)
{
     setuint8SigValue(peps_0x479.data,4,36,1,PEPS_479_DOOR_Open_Lock_Alert);
}

void set_PEPS_479_Key_Insid_Vehicle_Alert( uint8 PEPS_479_Key_Insid_Vehicle_Alert)
{
     setuint8SigValue(peps_0x479.data,4,37,1,PEPS_479_Key_Insid_Vehicle_Alert);
}

/*BCM_0x4A0 missing default process*/
void set_BCM_4A0_HIGH_BEAM_LIGHT_CMD( uint8 BCM_4A0_HIGH_BEAM_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,0,1,BCM_4A0_HIGH_BEAM_LIGHT_CMD);
}

void set_BCM_4A0_LOW_BEAM_LIGHT_CMD( uint8 BCM_4A0_LOW_BEAM_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,1,1,BCM_4A0_LOW_BEAM_LIGHT_CMD);
}

void set_BCM_4A0_FRONT_POSITION_LAMP_CMD( uint8 BCM_4A0_FRONT_POSITION_LAMP_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,2,1,BCM_4A0_FRONT_POSITION_LAMP_CMD);
}

void set_BCM_4A0_FRONT_FOG_LAMP_CMD( uint8 BCM_4A0_FRONT_FOG_LAMP_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,3,1,BCM_4A0_FRONT_FOG_LAMP_CMD);
}

void set_BCM_4A0_REAR_FOG_LAMP_CMD( uint8 BCM_4A0_REAR_FOG_LAMP_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,0,7,1,BCM_4A0_REAR_FOG_LAMP_CMD);
}

void set_BCM_4A0_LEFT_TRUN_LIGHT_CMD( uint8 BCM_4A0_LEFT_TRUN_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,1,14,1,BCM_4A0_LEFT_TRUN_LIGHT_CMD);
}

void set_BCM_4A0_RIGHT_TRUN_LIGHT_CMD( uint8 BCM_4A0_RIGHT_TRUN_LIGHT_CMD)
{
     setuint8SigValue(bcm_0x4a0.data,1,15,1,BCM_4A0_RIGHT_TRUN_LIGHT_CMD);
}

void set_BCM_4A0_EXTERIOR_LAMP_SWITCH( uint8 BCM_4A0_EXTERIOR_LAMP_SWITCH)
{
     setuint8SigValue(bcm_0x4a0.data,2,21,2,BCM_4A0_EXTERIOR_LAMP_SWITCH);
}

void set_BCM_4A0_REAR_FOG_LAMP_SWITCH( uint8 BCM_4A0_REAR_FOG_LAMP_SWITCH)
{
     setuint8SigValue(bcm_0x4a0.data,3,27,1,BCM_4A0_REAR_FOG_LAMP_SWITCH);
}

/*UEC_0x4C9 missing default process*/
void set_UEC_4C9_Hs_HLBeam_Lamp_Left_Err( uint8 UEC_4C9_Hs_HLBeam_Lamp_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,0,1,UEC_4C9_Hs_HLBeam_Lamp_Left_Err);
}

void set_UEC_4C9_Hs_HLBeam_Light_Left_Err( uint8 UEC_4C9_Hs_HLBeam_Light_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,1,2,UEC_4C9_Hs_HLBeam_Light_Left_Err);
}

void set_UEC_4C9_Hs_HLBeam_Lamp_Right_Err( uint8 UEC_4C9_Hs_HLBeam_Lamp_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,3,1,UEC_4C9_Hs_HLBeam_Lamp_Right_Err);
}

void set_UEC_4C9_Hs_HLBeam_Light_Right_Err( uint8 UEC_4C9_Hs_HLBeam_Light_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,4,2,UEC_4C9_Hs_HLBeam_Light_Right_Err);
}

void set_UEC_4C9_Hs_HLBeam_FDSF_Err( uint8 UEC_4C9_Hs_HLBeam_FDSF_Err)
{
     setuint8SigValue(uec_0x4c9.data,0,6,2,UEC_4C9_Hs_HLBeam_FDSF_Err);
}

void set_UEC_4C9_Hs_Position_Lamp_Err( uint8 UEC_4C9_Hs_Position_Lamp_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,8,2,UEC_4C9_Hs_Position_Lamp_Err);
}

void set_UEC_4C9_Hs_Daytime_Light_Left_Err( uint8 UEC_4C9_Hs_Daytime_Light_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,10,2,UEC_4C9_Hs_Daytime_Light_Left_Err);
}

void set_UEC_4C9_Hs_Daytime_Light_Right_Err( uint8 UEC_4C9_Hs_Daytime_Light_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,12,2,UEC_4C9_Hs_Daytime_Light_Right_Err);
}

void set_UEC_4C9_Hs_FrontFog_Light_Left_Err( uint8 UEC_4C9_Hs_FrontFog_Light_Left_Err)
{
     setuint8SigValue(uec_0x4c9.data,1,14,2,UEC_4C9_Hs_FrontFog_Light_Left_Err);
}

void set_UEC_4C9_Hs_FrontFog_Light_Right_Err( uint8 UEC_4C9_Hs_FrontFog_Light_Right_Err)
{
     setuint8SigValue(uec_0x4c9.data,2,16,2,UEC_4C9_Hs_FrontFog_Light_Right_Err);
}

void set_UEC_4C9_Hs_LR_Brake_Light_Err( uint8 UEC_4C9_Hs_LR_Brake_Light_Err)
{
     setuint8SigValue(uec_0x4c9.data,2,18,2,UEC_4C9_Hs_LR_Brake_Light_Err);
}

void set_UEC_4C9_Hs_High_Brake_Light_Err( uint8 UEC_4C9_Hs_High_Brake_Light_Err)
{
     setuint8SigValue(uec_0x4c9.data,2,20,2,UEC_4C9_Hs_High_Brake_Light_Err);
}

/*PEPS_0x570 missing default process*/
void set_PEPS_570_Door_Lock_Cmd( uint8 PEPS_570_Door_Lock_Cmd)
{
     setuint8SigValue(peps_0x570.data,0,0,2,PEPS_570_Door_Lock_Cmd);
}

/*ICM_0x620 missing default process*/
void set_ICM_620_DATA_VALID_ODO( uint8 ICM_620_DATA_VALID_ODO)
{
     setuint8SigValue(icm_0x620.data,0,1,1,ICM_620_DATA_VALID_ODO);
}

void set_ICM_620_ODOMETER_RESET_COUNTER( uint8 ICM_620_ODOMETER_RESET_COUNTER)
{
     setuint8SigValue(icm_0x620.data,0,2,2,ICM_620_ODOMETER_RESET_COUNTER);
}

void set_ICM_620_DISPLAYED_TOTAL_DISTANCE( uint32 ICM_620_DISPLAYED_TOTAL_DISTANCE)
{
     setuint32SigValue(icm_0x620.data,4,32,ICM_620_DISPLAYED_TOTAL_DISTANCE);
}

void set_ICM_620_ODOMETER_OFFSET( uint8 ICM_620_ODOMETER_OFFSET)
{
     setuint8SigValue(icm_0x620.data,5,40,8,ICM_620_ODOMETER_OFFSET);
}

/*BCM_0x660 missing default process*/
void set_BCM_660_FD_DOOR_STS( uint8 BCM_660_FD_DOOR_STS)
{
     setuint8SigValue(bcm_0x660.data,0,2,1,BCM_660_FD_DOOR_STS);
}

void set_BCM_660_FP_DOOR_STS( uint8 BCM_660_FP_DOOR_STS)
{
     setuint8SigValue(bcm_0x660.data,0,3,1,BCM_660_FP_DOOR_STS);
}

void set_BCM_660_FOLLOW_ME_HOME_STS( uint8 BCM_660_FOLLOW_ME_HOME_STS)
{
     setuint8SigValue(bcm_0x660.data,0,6,1,BCM_660_FOLLOW_ME_HOME_STS);
}

void set_BCM_660_TRUNK_STA( uint8 BCM_660_TRUNK_STA)
{
     setuint8SigValue(bcm_0x660.data,0,7,1,BCM_660_TRUNK_STA);
}

/*BCM_0x661 missing default process*/
void set_BCM_661_EB_ODO_VALID( uint8 BCM_661_EB_ODO_VALID)
{
     setuint8SigValue(bcm_0x661.data,1,8,1,BCM_661_EB_ODO_VALID);
}

void set_BCM_661_ODOMETER_RESET_COUNTER( uint8 BCM_661_ODOMETER_RESET_COUNTER)
{
     setuint8SigValue(bcm_0x661.data,1,9,2,BCM_661_ODOMETER_RESET_COUNTER);
}

void set_BCM_661_EB_ODO_DISTANCE( uint32 BCM_661_EB_ODO_DISTANCE)
{
     setuint32SigValue(bcm_0x661.data,5,32,BCM_661_EB_ODO_DISTANCE);
}

void set_BCM_661_ODOMETER_OFFSET( uint8 BCM_661_ODOMETER_OFFSET)
{
     setuint8SigValue(bcm_0x661.data,6,48,8,BCM_661_ODOMETER_OFFSET);
}

/*RMS_0x6F2 missing default process*/
void set_RMS_6F2_YEAR_TIME( uint8 RMS_6F2_YEAR_TIME)
{
     setuint8SigValue(rms_0x6f2.data,0,0,8,RMS_6F2_YEAR_TIME);
}

void set_RMS_6F2_MONTH_TIME( uint8 RMS_6F2_MONTH_TIME)
{
     setuint8SigValue(rms_0x6f2.data,1,12,4,RMS_6F2_MONTH_TIME);
}

void set_RMS_6F2_DAY_TIME( uint8 RMS_6F2_DAY_TIME)
{
     setuint8SigValue(rms_0x6f2.data,2,16,5,RMS_6F2_DAY_TIME);
}

void set_RMS_6F2_HOUR_TIME( uint8 RMS_6F2_HOUR_TIME)
{
     setuint8SigValue(rms_0x6f2.data,3,27,5,RMS_6F2_HOUR_TIME);
}

void set_RMS_6F2_MINUTE_TIME( uint8 RMS_6F2_MINUTE_TIME)
{
     setuint8SigValue(rms_0x6f2.data,4,32,6,RMS_6F2_MINUTE_TIME);
}

