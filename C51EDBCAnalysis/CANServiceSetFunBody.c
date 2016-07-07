/*BCM_GENERAL_STATUS missing default process*/
void set_CHECK_FRONT_FOG_LIGHT( uint8 CHECK_FRONT_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,2,17,1,CHECK_FRONT_FOG_LIGHT);
}

void set_CHECK_REAR_FOG_LIGHT( uint8 CHECK_REAR_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,2,18,1,CHECK_REAR_FOG_LIGHT);
}

void set_TELLTALE_FRONT_FOG_LIGHT( uint8 TELLTALE_FRONT_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,2,19,1,TELLTALE_FRONT_FOG_LIGHT);
}

void set_TELLTALE_REAR_FOG_LIGHT( uint8 TELLTALE_REAR_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,2,20,1,TELLTALE_REAR_FOG_LIGHT);
}

void set_REQ_RIGHT_DI_TELLTABLE( uint8 REQ_RIGHT_DI_TELLTABLE)
{
     setuint8SigValue(bcm_general_status.data,2,21,1,REQ_RIGHT_DI_TELLTABLE);
}

void set_REQ_LEFT_DI_TELLTABLE( uint8 REQ_LEFT_DI_TELLTABLE)
{
     setuint8SigValue(bcm_general_status.data,2,22,1,REQ_LEFT_DI_TELLTABLE);
}

void set_HOOD_LID_OPEN( uint8 HOOD_LID_OPEN)
{
     setuint8SigValue(bcm_general_status.data,3,24,1,HOOD_LID_OPEN);
}

void set_TRUNK_LID_OPEN( uint8 TRUNK_LID_OPEN)
{
     setuint8SigValue(bcm_general_status.data,3,25,1,TRUNK_LID_OPEN);
}

void set_REAR_RIGHT_DOOR_OPEN( uint8 REAR_RIGHT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,3,26,1,REAR_RIGHT_DOOR_OPEN);
}

void set_REAR_LEFT_DOOR_OPEN( uint8 REAR_LEFT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,3,27,1,REAR_LEFT_DOOR_OPEN);
}

void set_FRONT_RIGHT_DOOR_OPEN( uint8 FRONT_RIGHT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,3,28,1,FRONT_RIGHT_DOOR_OPEN);
}

void set_FRONT_LEFT_DOOR_OPEN( uint8 FRONT_LEFT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,3,29,1,FRONT_LEFT_DOOR_OPEN);
}

void set_DOOR_UNLOCK_REST( uint8 DOOR_UNLOCK_REST)
{
     setuint8SigValue(bcm_general_status.data,3,30,1,DOOR_UNLOCK_REST);
}

void set_DOOR_UNLOCK_DRIVER( uint8 DOOR_UNLOCK_DRIVER)
{
     setuint8SigValue(bcm_general_status.data,3,31,1,DOOR_UNLOCK_DRIVER);
}

void set_PARK_LIGHT_RIGHT_INDICATION( uint8 PARK_LIGHT_RIGHT_INDICATION)
{
     setuint8SigValue(bcm_general_status.data,4,32,1,PARK_LIGHT_RIGHT_INDICATION);
}

void set_PARK_LIGHT_LEFT_INDICATION( uint8 PARK_LIGHT_LEFT_INDICATION)
{
     setuint8SigValue(bcm_general_status.data,4,33,1,PARK_LIGHT_LEFT_INDICATION);
}

void set_CHK_THEFT_ALARM( uint8 CHK_THEFT_ALARM)
{
     setuint8SigValue(bcm_general_status.data,4,35,1,CHK_THEFT_ALARM);
}

void set_BRAKE_BULB_FAILURE( uint8 BRAKE_BULB_FAILURE)
{
     setuint8SigValue(bcm_general_status.data,4,37,1,BRAKE_BULB_FAILURE);
}

void set_PARK_BULB_FAILURE_RIGHT( uint8 PARK_BULB_FAILURE_RIGHT)
{
     setuint8SigValue(bcm_general_status.data,4,38,1,PARK_BULB_FAILURE_RIGHT);
}

void set_PARK_BULB_FAILURE_LEFT( uint8 PARK_BULB_FAILURE_LEFT)
{
     setuint8SigValue(bcm_general_status.data,4,39,1,PARK_BULB_FAILURE_LEFT);
}

void set_LOW_BEAM_INDICATOR( uint8 LOW_BEAM_INDICATOR)
{
     setuint8SigValue(bcm_general_status.data,5,40,1,LOW_BEAM_INDICATOR);
}

void set_HIGH_BEAM_INDICATOR( uint8 HIGH_BEAM_INDICATOR)
{
     setuint8SigValue(bcm_general_status.data,5,41,1,HIGH_BEAM_INDICATOR);
}

void set_TELLTALE_HAZARD_LIGHT( uint8 TELLTALE_HAZARD_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,5,42,1,TELLTALE_HAZARD_LIGHT);
}

void set_TURN_BULB_FAILURE_RIGHT( uint8 TURN_BULB_FAILURE_RIGHT)
{
     setuint8SigValue(bcm_general_status.data,5,43,1,TURN_BULB_FAILURE_RIGHT);
}

void set_TURN_BULB_FAILURE_LEFT( uint8 TURN_BULB_FAILURE_LEFT)
{
     setuint8SigValue(bcm_general_status.data,5,44,1,TURN_BULB_FAILURE_LEFT);
}

void set_PARK_RANGE_SWITCH( uint8 PARK_RANGE_SWITCH)
{
     setuint8SigValue(bcm_general_status.data,5,46,1,PARK_RANGE_SWITCH);
}

void set_BRAKE_LIGHT_ACTIVE( uint8 BRAKE_LIGHT_ACTIVE)
{
     setuint8SigValue(bcm_general_status.data,5,47,1,BRAKE_LIGHT_ACTIVE);
}

void set_CHECK_BRAKE_AUXILIARY_LIGHT( uint8 CHECK_BRAKE_AUXILIARY_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,6,48,1,CHECK_BRAKE_AUXILIARY_LIGHT);
}

void set_DRL_FAILURE( uint8 DRL_FAILURE)
{
     setuint8SigValue(bcm_general_status.data,6,49,1,DRL_FAILURE);
}

void set_POSITION_LIGHT_ON_WARNING( uint8 POSITION_LIGHT_ON_WARNING)
{
     setuint8SigValue(bcm_general_status.data,6,50,1,POSITION_LIGHT_ON_WARNING);
}

void set_ANTI_THELF_INDICATOR( uint8 ANTI_THELF_INDICATOR)
{
     setuint8SigValue(bcm_general_status.data,6,51,2,ANTI_THELF_INDICATOR);
}

/*HUM_GPS missing default process*/
void set_TIME_MODE_HUM( uint8 TIME_MODE_HUM)
{
     setuint8SigValue(hum_gps.data,0,0,2,TIME_MODE_HUM);
}

void set_MINUTES_HUM( uint8 MINUTES_HUM)
{
     setuint8SigValue(hum_gps.data,1,10,6,MINUTES_HUM);
}

void set_DAY_HUM( uint8 DAY_HUM)
{
     setuint8SigValue(hum_gps.data,1,13,5,DAY_HUM);
}

void set_WEEK_HUM( uint8 WEEK_HUM)
{
     setuint8SigValue(hum_gps.data,2,18,3,WEEK_HUM);
}

void set_YEAR_HUM( uint8 YEAR_HUM)
{
     setuint8SigValue(hum_gps.data,2,20,5,YEAR_HUM);
}

void set_MONTH_HUM( uint8 MONTH_HUM)
{
     setuint8SigValue(hum_gps.data,3,25,4,MONTH_HUM);
}

void set_SECOND_HUM( uint8 SECOND_HUM)
{
     setuint8SigValue(hum_gps.data,0,2,6,SECOND_HUM);
}

void set_HOUR_HUM( uint8 HOUR_HUM)
{
     setuint8SigValue(hum_gps.data,0,5,5,HOUR_HUM);
}

/*AC_CONTROL missing default process*/
void set_VALID_OTEMP( uint8 VALID_OTEMP)
{
     setuint8SigValue(ac_control.data,0,0,2,VALID_OTEMP);
}

void set_OUTSIDE_TEMP( uint8 OUTSIDE_TEMP)
{
     setuint8SigValue(ac_control.data,2,16,8,OUTSIDE_TEMP);
}

/*TPMS_SYS_STATUS missing default process*/
void set_LF_PRESSURE( uint8 LF_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,1,8,8,LF_PRESSURE);
}

void set_TIRE_POSITION( uint8 TIRE_POSITION)
{
     setuint8SigValue(tpms_sys_status.data,0,0,3,TIRE_POSITION);
}

void set_RF_PRESSURE( uint8 RF_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,2,16,8,RF_PRESSURE);
}

void set_RR_PRESSURE( uint8 RR_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,3,24,8,RR_PRESSURE);
}

void set_LR_PRESSURE( uint8 LR_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,4,32,8,LR_PRESSURE);
}

void set_TIRE_TEMPERATURE( uint8 TIRE_TEMPERATURE)
{
     setuint8SigValue(tpms_sys_status.data,5,40,8,TIRE_TEMPERATURE);
}

void set_RF_PRESSURE_WARNING( uint8 RF_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,6,50,3,RF_PRESSURE_WARNING);
}

void set_LF_PRESSURE_WARNING( uint8 LF_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,6,53,3,LF_PRESSURE_WARNING);
}

void set_SYSTEM_WARNING( uint8 SYSTEM_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,7,56,1,SYSTEM_WARNING);
}

void set_TEMPERATURE_WARNING( uint8 TEMPERATURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,7,57,1,TEMPERATURE_WARNING);
}

void set_LR_PRESSURE_WARNING( uint8 LR_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,7,58,3,LR_PRESSURE_WARNING);
}

void set_RR_PRESSURE_WARNING( uint8 RR_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,7,61,3,RR_PRESSURE_WARNING);
}

void set_SIGNAL_STATUS( uint8 SIGNAL_STATUS)
{
     setuint8SigValue(tpms_sys_status.data,0,7,1,SIGNAL_STATUS);
}

/*PEPS_GENERAL_STATUS missing default process*/
void set_REMOTE_START_RESPONSE_PEPS( uint8 REMOTE_START_RESPONSE_PEPS)
{
     setuint8SigValue(peps_general_status.data,0,0,1,REMOTE_START_RESPONSE_PEPS);
}

void set_REMOTE_START_STATUS( uint8 REMOTE_START_STATUS)
{
     setuint8SigValue(peps_general_status.data,2,18,2,REMOTE_START_STATUS);
}

/*ESCL_GENERAL_STATUS missing default process*/
void set_ESCL_TEXT_ROTATE_STEERING_WHEEL( uint8 ESCL_TEXT_ROTATE_STEERING_WHEEL)
{
     setuint8SigValue(escl_general_status.data,0,0,1,ESCL_TEXT_ROTATE_STEERING_WHEEL);
}

void set_ESCL_TEXT_GARAGE( uint8 ESCL_TEXT_GARAGE)
{
     setuint8SigValue(escl_general_status.data,0,1,1,ESCL_TEXT_GARAGE);
}

void set_ESCL_TEXT_STEERING_NOT_UNLOCKED( uint8 ESCL_TEXT_STEERING_NOT_UNLOCKED)
{
     setuint8SigValue(escl_general_status.data,1,15,1,ESCL_TEXT_STEERING_NOT_UNLOCKED);
}

void set_ESCL_TEXTDEECT( uint8 ESCL_TEXTDEECT)
{
     setuint8SigValue(escl_general_status.data,0,2,1,ESCL_TEXTDEECT);
}

void set_ESCL_LED_YELLOW( uint8 ESCL_LED_YELLOW)
{
     setuint8SigValue(escl_general_status.data,0,3,1,ESCL_LED_YELLOW);
}

void set_ESCL_LED_RED( uint8 ESCL_LED_RED)
{
     setuint8SigValue(escl_general_status.data,0,4,1,ESCL_LED_RED);
}

void set_ESCL_UNLOCKED( uint8 ESCL_UNLOCKED)
{
     setuint8SigValue(escl_general_status.data,0,5,1,ESCL_UNLOCKED);
}

void set_ESCL_LOCKED( uint8 ESCL_LOCKED)
{
     setuint8SigValue(escl_general_status.data,0,6,1,ESCL_LOCKED);
}

void set_ESCL_SERVICE_RELEVANT_FAILURE( uint8 ESCL_SERVICE_RELEVANT_FAILURE)
{
     setuint8SigValue(escl_general_status.data,0,7,1,ESCL_SERVICE_RELEVANT_FAILURE);
}

/*PEPS_GENERAL_STATUS_2 missing default process*/
void set_MIU_MSG_REQ_N7( uint8 MIU_MSG_REQ_N7)
{
     setuint8SigValue(peps_general_status_2.data,4,32,1,MIU_MSG_REQ_N7);
}

void set_MIU_MSG_REQ_N6( uint8 MIU_MSG_REQ_N6)
{
     setuint8SigValue(peps_general_status_2.data,4,33,1,MIU_MSG_REQ_N6);
}

void set_MIU_MSG_REQ_N5( uint8 MIU_MSG_REQ_N5)
{
     setuint8SigValue(peps_general_status_2.data,4,34,1,MIU_MSG_REQ_N5);
}

void set_MIU_MSG_REQ_N4( uint8 MIU_MSG_REQ_N4)
{
     setuint8SigValue(peps_general_status_2.data,4,35,1,MIU_MSG_REQ_N4);
}

void set_MIU_MSG_REQ_N3( uint8 MIU_MSG_REQ_N3)
{
     setuint8SigValue(peps_general_status_2.data,4,36,1,MIU_MSG_REQ_N3);
}

void set_MIU_MSG_REQ_N2( uint8 MIU_MSG_REQ_N2)
{
     setuint8SigValue(peps_general_status_2.data,4,37,1,MIU_MSG_REQ_N2);
}

void set_MIU_MSG_REQ_N1( uint8 MIU_MSG_REQ_N1)
{
     setuint8SigValue(peps_general_status_2.data,4,38,1,MIU_MSG_REQ_N1);
}

void set_MIU_MSG_REQ_N0( uint8 MIU_MSG_REQ_N0)
{
     setuint8SigValue(peps_general_status_2.data,4,39,1,MIU_MSG_REQ_N0);
}

void set_MIU_MSG_REQ_N15( uint8 MIU_MSG_REQ_N15)
{
     setuint8SigValue(peps_general_status_2.data,5,40,1,MIU_MSG_REQ_N15);
}

void set_MIU_MSG_REQ_N14( uint8 MIU_MSG_REQ_N14)
{
     setuint8SigValue(peps_general_status_2.data,5,41,1,MIU_MSG_REQ_N14);
}

void set_MIU_MSG_REQ_N13( uint8 MIU_MSG_REQ_N13)
{
     setuint8SigValue(peps_general_status_2.data,5,42,1,MIU_MSG_REQ_N13);
}

void set_MIU_MSG_REQ_N12( uint8 MIU_MSG_REQ_N12)
{
     setuint8SigValue(peps_general_status_2.data,5,43,1,MIU_MSG_REQ_N12);
}

void set_MIU_MSG_REQ_N11( uint8 MIU_MSG_REQ_N11)
{
     setuint8SigValue(peps_general_status_2.data,5,44,1,MIU_MSG_REQ_N11);
}

void set_MIU_MSG_REQ_N10( uint8 MIU_MSG_REQ_N10)
{
     setuint8SigValue(peps_general_status_2.data,5,45,1,MIU_MSG_REQ_N10);
}

void set_MIU_MSG_REQ_N9( uint8 MIU_MSG_REQ_N9)
{
     setuint8SigValue(peps_general_status_2.data,5,46,1,MIU_MSG_REQ_N9);
}

void set_MIU_MSG_REQ_N8( uint8 MIU_MSG_REQ_N8)
{
     setuint8SigValue(peps_general_status_2.data,5,47,1,MIU_MSG_REQ_N8);
}

void set_MIU_MSG_REQ_N16( uint8 MIU_MSG_REQ_N16)
{
     setuint8SigValue(peps_general_status_2.data,6,55,1,MIU_MSG_REQ_N16);
}

/*EMS_ENGINE_TEMP_AND_BARROMETER missing default process*/
void set_COOLANT_TEMPERATURE( uint8 COOLANT_TEMPERATURE)
{
     setuint8SigValue(ems_engine_temp_and_barrometer.data,1,8,8,COOLANT_TEMPERATURE);
}

void set_VALID_COOLANT( uint8 VALID_COOLANT)
{
     setuint8SigValue(ems_engine_temp_and_barrometer.data,0,4,2,VALID_COOLANT);
}

/*ICM_GENERAL_STATUS missing default process*/
void set_DATA_VALID( uint8 DATA_VALID)
{
     setuint8SigValue(icm_general_status.data,0,0,1,DATA_VALID);
}

void set_AIRBAG_WARNINGLAMP_STATUS( uint8 AIRBAG_WARNINGLAMP_STATUS)
{
     setuint8SigValue(icm_general_status.data,0,1,1,AIRBAG_WARNINGLAMP_STATUS);
}

void set_NIGHT_PANEL( uint8 NIGHT_PANEL)
{
     setuint8SigValue(icm_general_status.data,0,2,1,NIGHT_PANEL);
}

void set_DATA_VALID_RHEOSTAT( uint8 DATA_VALID_RHEOSTAT)
{
     setuint8SigValue(icm_general_status.data,0,3,2,DATA_VALID_RHEOSTAT);
}

void set_WASHER_FLUID_LEVEL_LOW( uint8 WASHER_FLUID_LEVEL_LOW)
{
     setuint8SigValue(icm_general_status.data,0,5,1,WASHER_FLUID_LEVEL_LOW);
}

void set_ODOMETER_RESET_COUNTER_ICM( uint8 ODOMETER_RESET_COUNTER_ICM)
{
     setuint8SigValue(icm_general_status.data,0,6,2,ODOMETER_RESET_COUNTER_ICM);
}

void set_RHEOSTAT_LEVEL( uint8 RHEOSTAT_LEVEL)
{
     setuint8SigValue(icm_general_status.data,1,8,8,RHEOSTAT_LEVEL);
}

void set_DISPLAYED_TOTAL_DISTANCE( uint32 DISPLAYED_TOTAL_DISTANCE)
{
     setuint32SigValue(icm_general_status.data,5,32,DISPLAYED_TOTAL_DISTANCE);
}

void set_BATTERY_VOLTAGE_LEVEL( uint8 BATTERY_VOLTAGE_LEVEL)
{
     setuint8SigValue(icm_general_status.data,6,48,8,BATTERY_VOLTAGE_LEVEL);
}

void set_ODOMETER_OFFSET_ICM( uint8 ODOMETER_OFFSET_ICM)
{
     setuint8SigValue(icm_general_status.data,7,56,8,ODOMETER_OFFSET_ICM);
}

/*ICM_GENERAL_STATUS_2 missing default process*/
void set_HAND_BRAKE_ICM( uint8 HAND_BRAKE_ICM)
{
     setuint8SigValue(icm_general_status_2.data,0,0,1,HAND_BRAKE_ICM);
}

void set_REMOTE_START_RESPONSE_ICM( uint8 REMOTE_START_RESPONSE_ICM)
{
     setuint8SigValue(icm_general_status_2.data,0,7,1,REMOTE_START_RESPONSE_ICM);
}

void set_FUELTANK_REMAINING( uint8 FUELTANK_REMAINING)
{
     setuint8SigValue(icm_general_status_2.data,1,8,8,FUELTANK_REMAINING);
}

/*AHL_GENERAL_STATUS missing default process*/
void set_AHL_FAULT_STATUS( uint8 AHL_FAULT_STATUS)
{
     setuint8SigValue(ahl_general_status.data,0,7,1,AHL_FAULT_STATUS);
}

/*BCM_GENERAL_STATUS_2 missing default process*/
void set_POWER_MODE_BCM( uint8 POWER_MODE_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,0,0,2,POWER_MODE_BCM);
}

void set_EB_ODO( uint32 EB_ODO)
{
     setuint32SigValue(bcm_general_status_2.data,4,32,EB_ODO);
}

void set_ODOMETER_OFFSET_BCM( uint8 ODOMETER_OFFSET_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,5,40,8,ODOMETER_OFFSET_BCM);
}

void set_EB_ODO_VALID( uint8 EB_ODO_VALID)
{
     setuint8SigValue(bcm_general_status_2.data,0,5,1,EB_ODO_VALID);
}

void set_POWER_MODE_VALIDITY_BCM( uint8 POWER_MODE_VALIDITY_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,7,59,2,POWER_MODE_VALIDITY_BCM);
}

void set_ODOMETER_RESET_COUNTER_BCM( uint8 ODOMETER_RESET_COUNTER_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,0,6,2,ODOMETER_RESET_COUNTER_BCM);
}

/*ICM_EVENT_COMMAND_2 missing default process*/
void set_FOLLOW_ME_HOME_SETTING( uint8 FOLLOW_ME_HOME_SETTING)
{
     setuint8SigValue(icm_event_command_2.data,0,0,3,FOLLOW_ME_HOME_SETTING);
}

void set_VSPEED_LOCKING( uint8 VSPEED_LOCKING)
{
     setuint8SigValue(icm_event_command_2.data,0,3,3,VSPEED_LOCKING);
}

void set_CUTOFF_UNLOCK_4_DOORS( uint8 CUTOFF_UNLOCK_4_DOORS)
{
     setuint8SigValue(icm_event_command_2.data,0,6,2,CUTOFF_UNLOCK_4_DOORS);
}

void set_LOCK_SUCCESS_SOUND( uint8 LOCK_SUCCESS_SOUND)
{
     setuint8SigValue(icm_event_command_2.data,1,12,2,LOCK_SUCCESS_SOUND);
}

void set_DRL_OPEN( uint8 DRL_OPEN)
{
     setuint8SigValue(icm_event_command_2.data,1,14,2,DRL_OPEN);
}

/*ICM_GENERAL_STATUS_3 missing default process*/
void set_INSTANT_FUEL_CONSUM( uint16 INSTANT_FUEL_CONSUM)
{
     setuint16SigValue(icm_general_status_3.data,1,12,INSTANT_FUEL_CONSUM);
}

void set_AVERAGE_FUEL_CONSUM( uint16 AVERAGE_FUEL_CONSUM)
{
     setuint16SigValue(icm_general_status_3.data,1,12,AVERAGE_FUEL_CONSUM);
}

void set_ENDURANCE_MILEAGE( uint16 ENDURANCE_MILEAGE)
{
     setuint16SigValue(icm_general_status_3.data,4,12,ENDURANCE_MILEAGE);
}

void set_REMAIN_MAINTAIN_MILEAGE( uint16 REMAIN_MAINTAIN_MILEAGE)
{
     setuint16SigValue(icm_general_status_3.data,6,16,REMAIN_MAINTAIN_MILEAGE);
}

/*TCU_ENGINE_TORQUE_REQUEST missing default process*/
void set_TRANSMISSION_OIL_TEMPERATURE( uint8 TRANSMISSION_OIL_TEMPERATURE)
{
     setuint8SigValue(tcu_engine_torque_request.data,5,40,8,TRANSMISSION_OIL_TEMPERATURE);
}

/*EMS_ENGINE_SPEED_AND_TORQUE missing default process*/
void set_ACTUAL_ENGINE_SPEED_UNFILTERED( uint16 ACTUAL_ENGINE_SPEED_UNFILTERED)
{
     setuint16SigValue(ems_engine_speed_and_torque.data,2,16,ACTUAL_ENGINE_SPEED_UNFILTERED);
}

void set_VALID_ESPEED( uint8 VALID_ESPEED)
{
     setuint8SigValue(ems_engine_speed_and_torque.data,0,4,1,VALID_ESPEED);
}

/*EMS_GENERAL_STATUS missing default process*/
void set_EMS_ACTUAL_GEAR( uint8 EMS_ACTUAL_GEAR)
{
     setuint8SigValue(ems_general_status.data,1,8,8,EMS_ACTUAL_GEAR);
}

void set_BRAKE_STATUS_EMS( uint8 BRAKE_STATUS_EMS)
{
     setuint8SigValue(ems_general_status.data,2,17,1,BRAKE_STATUS_EMS);
}

void set_HAND_BRAKE_EMS( uint8 HAND_BRAKE_EMS)
{
     setuint8SigValue(ems_general_status.data,0,2,1,HAND_BRAKE_EMS);
}

void set_REQ_SHIFT_DOWN_TELLTALE( uint8 REQ_SHIFT_DOWN_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,2,21,1,REQ_SHIFT_DOWN_TELLTALE);
}

void set_CRUISE_ACTIVE( uint8 CRUISE_ACTIVE)
{
     setuint8SigValue(ems_general_status.data,2,22,1,CRUISE_ACTIVE);
}

void set_ACTUAL_GEARBOX( uint8 ACTUAL_GEARBOX)
{
     setuint8SigValue(ems_general_status.data,3,29,1,ACTUAL_GEARBOX);
}

void set_VALID_BRAKE_STATUS_EMS( uint8 VALID_BRAKE_STATUS_EMS)
{
     setuint8SigValue(ems_general_status.data,0,3,1,VALID_BRAKE_STATUS_EMS);
}

void set_EMS_AUTHRESULT( uint8 EMS_AUTHRESULT)
{
     setuint8SigValue(ems_general_status.data,4,35,2,EMS_AUTHRESULT);
}

void set_REQ_CRUISE_TELLTALE( uint8 REQ_CRUISE_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,4,37,1,REQ_CRUISE_TELLTALE);
}

void set_REQ_SHIFT_UP_TELLTALE( uint8 REQ_SHIFT_UP_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,4,38,1,REQ_SHIFT_UP_TELLTALE);
}

void set_REQ_CHECK_ENGINE_TELLTALE( uint8 REQ_CHECK_ENGINE_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,4,39,1,REQ_CHECK_ENGINE_TELLTALE);
}

void set_ENGINE_RUNNING( uint8 ENGINE_RUNNING)
{
     setuint8SigValue(ems_general_status.data,5,46,2,ENGINE_RUNNING);
}

void set_VALID_ACTUAL_GEAR_EMS( uint8 VALID_ACTUAL_GEAR_EMS)
{
     setuint8SigValue(ems_general_status.data,0,4,2,VALID_ACTUAL_GEAR_EMS);
}

/*EMS_START_STOP missing default process*/
void set_SS_IDLE_STOP_STATUS( uint8 SS_IDLE_STOP_STATUS)
{
     setuint8SigValue(ems_start_stop.data,0,0,1,SS_IDLE_STOP_STATUS);
}

void set_SS_SYS_STS( uint8 SS_SYS_STS)
{
     setuint8SigValue(ems_start_stop.data,1,9,2,SS_SYS_STS);
}

void set_AUTO_STOP_REQUEST( uint8 AUTO_STOP_REQUEST)
{
     setuint8SigValue(ems_start_stop.data,1,11,1,AUTO_STOP_REQUEST);
}

void set_ENG_SS_STS( uint8 ENG_SS_STS)
{
     setuint8SigValue(ems_start_stop.data,1,12,4,ENG_SS_STS);
}

void set_SS_FAULT_LAMP( uint8 SS_FAULT_LAMP)
{
     setuint8SigValue(ems_start_stop.data,0,5,1,SS_FAULT_LAMP);
}

void set_SS_ENABLE_LAMP( uint8 SS_ENABLE_LAMP)
{
     setuint8SigValue(ems_start_stop.data,0,6,1,SS_ENABLE_LAMP);
}

/*GENERAL_STATUS_TCS_ESP missing default process*/
void set_REQ_TCS_ESP_FAILURE_TELLTALE( uint8 REQ_TCS_ESP_FAILURE_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,1,14,1,REQ_TCS_ESP_FAILURE_TELLTALE);
}

void set_REQ_TCS_ESP_ACTIVE_TELLTALE( uint8 REQ_TCS_ESP_ACTIVE_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,2,20,1,REQ_TCS_ESP_ACTIVE_TELLTALE);
}

void set_REQ_TCS_ESP_OFF_TELLTALE( uint8 REQ_TCS_ESP_OFF_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,2,21,1,REQ_TCS_ESP_OFF_TELLTALE);
}

void set_REQ_EBD_TELLTALE( uint8 REQ_EBD_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,2,22,1,REQ_EBD_TELLTALE);
}

void set_REQ_ABS_TELLTALE( uint8 REQ_ABS_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,2,23,1,REQ_ABS_TELLTALE);
}

void set_ODOMETER_ROLLING( uint16 ODOMETER_ROLLING)
{
     setuint16SigValue(general_status_tcs_esp.data,4,16,ODOMETER_ROLLING);
}

/*ECS_IMMO_RAND_NUMBER missing default process*/
void set_AUTH_RESULT( uint8 AUTH_RESULT)
{
     setuint8SigValue(ecs_immo_rand_number.data,5,40,8,AUTH_RESULT);
}

void set_IMMO_SID( uint8 IMMO_SID)
{
     setuint8SigValue(ecs_immo_rand_number.data,0,0,8,IMMO_SID);
}

/*ICM_EVENT_COMMAND missing default process*/
void set_MIRROR_FADE_IN_OUT( uint8 MIRROR_FADE_IN_OUT)
{
     setuint8SigValue(icm_event_command.data,0,0,2,MIRROR_FADE_IN_OUT);
}

void set_MEMO_OUTSIDE_RMIRROR_GND_PSTN( uint8 MEMO_OUTSIDE_RMIRROR_GND_PSTN)
{
     setuint8SigValue(icm_event_command.data,0,2,2,MEMO_OUTSIDE_RMIRROR_GND_PSTN);
}

void set_OUTSIDE_RMIRROR_SEE_GROUND( uint8 OUTSIDE_RMIRROR_SEE_GROUND)
{
     setuint8SigValue(icm_event_command.data,0,4,2,OUTSIDE_RMIRROR_SEE_GROUND);
}

void set_PAS_SYSTEM_SWITCH( uint8 PAS_SYSTEM_SWITCH)
{
     setuint8SigValue(icm_event_command.data,1,8,2,PAS_SYSTEM_SWITCH);
}

void set_SVA_SYSTEM_SWITCH( uint8 SVA_SYSTEM_SWITCH)
{
     setuint8SigValue(icm_event_command.data,1,10,2,SVA_SYSTEM_SWITCH);
}

void set_MINUTES_MIU( uint8 MINUTES_MIU)
{
     setuint8SigValue(icm_event_command.data,2,16,6,MINUTES_MIU);
}

void set_TIME_MODE_MIU( uint8 TIME_MODE_MIU)
{
     setuint8SigValue(icm_event_command.data,2,22,2,TIME_MODE_MIU);
}

void set_WEEK_MIU( uint8 WEEK_MIU)
{
     setuint8SigValue(icm_event_command.data,3,24,3,WEEK_MIU);
}

void set_HOUR_MIU( uint8 HOUR_MIU)
{
     setuint8SigValue(icm_event_command.data,3,27,5,HOUR_MIU);
}

void set_MONTH_MIU( uint8 MONTH_MIU)
{
     setuint8SigValue(icm_event_command.data,3,31,4,MONTH_MIU);
}

void set_DAY_MIU( uint8 DAY_MIU)
{
     setuint8SigValue(icm_event_command.data,4,35,5,DAY_MIU);
}

void set_YEAR_MIU( uint8 YEAR_MIU)
{
     setuint8SigValue(icm_event_command.data,5,42,5,YEAR_MIU);
}

/*EPS_STATUS missing default process*/
void set_STS_EPS_ACTIVE_STS( uint8 STS_EPS_ACTIVE_STS)
{
     setuint8SigValue(eps_status.data,0,3,1,STS_EPS_ACTIVE_STS);
}

void set_STS_EPS_FAULT_STS( uint8 STS_EPS_FAULT_STS)
{
     setuint8SigValue(eps_status.data,0,4,4,STS_EPS_FAULT_STS);
}

/*SDM_GENERAL_STATUS missing default process*/
void set_CHK_BELTS( uint8 CHK_BELTS)
{
     setuint8SigValue(sdm_general_status.data,0,0,1,CHK_BELTS);
}

void set_AIRBAG_WARNINGLAMP( uint8 AIRBAG_WARNINGLAMP)
{
     setuint8SigValue(sdm_general_status.data,0,1,1,AIRBAG_WARNINGLAMP);
}

void set_PASSENGER_AIRBAG_OFF( uint8 PASSENGER_AIRBAG_OFF)
{
     setuint8SigValue(sdm_general_status.data,1,11,1,PASSENGER_AIRBAG_OFF);
}

void set_SEATBELT_PA_ATT( uint8 SEATBELT_PA_ATT)
{
     setuint8SigValue(sdm_general_status.data,0,6,1,SEATBELT_PA_ATT);
}

void set_SEATBELT_DR_ATT( uint8 SEATBELT_DR_ATT)
{
     setuint8SigValue(sdm_general_status.data,0,7,1,SEATBELT_DR_ATT);
}

/*EMS_ENGINE_FUEL_AND_TURBO missing default process*/
void set_ENGINE_FUEAL_INJECTED( uint16 ENGINE_FUEAL_INJECTED)
{
     setuint16SigValue(ems_engine_fuel_and_turbo.data,2,16,ENGINE_FUEAL_INJECTED);
}

void set_VALID_TURBO( uint8 VALID_TURBO)
{
     setuint8SigValue(ems_engine_fuel_and_turbo.data,0,2,2,VALID_TURBO);
}

void set_TURBO_PRESENTATION( uint8 TURBO_PRESENTATION)
{
     setuint8SigValue(ems_engine_fuel_and_turbo.data,3,24,8,TURBO_PRESENTATION);
}

void set_VALID_FUEL_INJ( uint8 VALID_FUEL_INJ)
{
     setuint8SigValue(ems_engine_fuel_and_turbo.data,0,4,2,VALID_FUEL_INJ);
}

/*EMS_ENGINE_IDLE_AND_VSPEED missing default process*/
void set_VALID_VEHICLE_SPEED( uint8 VALID_VEHICLE_SPEED)
{
     setuint8SigValue(ems_engine_idle_and_vspeed.data,0,2,2,VALID_VEHICLE_SPEED);
}

void set_VEHICLE_SPEED( uint16 VEHICLE_SPEED)
{
     setuint16SigValue(ems_engine_idle_and_vspeed.data,4,16,VEHICLE_SPEED);
}

/*TCU_GENERAL_STATUS missing default process*/
void set_TCU_TARGET_GEAR( uint8 TCU_TARGET_GEAR)
{
     setuint8SigValue(tcu_general_status.data,1,8,8,TCU_TARGET_GEAR);
}

void set_TCU_SELECTED_GEAR( uint8 TCU_SELECTED_GEAR)
{
     setuint8SigValue(tcu_general_status.data,2,16,8,TCU_SELECTED_GEAR);
}

void set_REQ_MIL_ACTIVE( uint8 REQ_MIL_ACTIVE)
{
     setuint8SigValue(tcu_general_status.data,3,24,1,REQ_MIL_ACTIVE);
}

void set_REQ_WINTER_TELLTALE( uint8 REQ_WINTER_TELLTALE)
{
     setuint8SigValue(tcu_general_status.data,3,29,1,REQ_WINTER_TELLTALE);
}

void set_VALID_SELECTED_GEAR( uint8 VALID_SELECTED_GEAR)
{
     setuint8SigValue(tcu_general_status.data,0,2,2,VALID_SELECTED_GEAR);
}

void set_REQ_SPORTS_TELLTALE( uint8 REQ_SPORTS_TELLTALE)
{
     setuint8SigValue(tcu_general_status.data,3,30,1,REQ_SPORTS_TELLTALE);
}

void set_REQ_CHK_GEARBOX_TELLTALE( uint8 REQ_CHK_GEARBOX_TELLTALE)
{
     setuint8SigValue(tcu_general_status.data,3,31,1,REQ_CHK_GEARBOX_TELLTALE);
}

void set_CHK_HIGH_OIL_TEMP( uint8 CHK_HIGH_OIL_TEMP)
{
     setuint8SigValue(tcu_general_status.data,4,39,1,CHK_HIGH_OIL_TEMP);
}

void set_TRANS_SHIFT_PATTERN_STATUS( uint8 TRANS_SHIFT_PATTERN_STATUS)
{
     setuint8SigValue(tcu_general_status.data,5,40,8,TRANS_SHIFT_PATTERN_STATUS);
}

void set_VALID_ACTUAL_GEAR_TCU( uint8 VALID_ACTUAL_GEAR_TCU)
{
     setuint8SigValue(tcu_general_status.data,0,4,2,VALID_ACTUAL_GEAR_TCU);
}

void set_GEAR_INDICATION( uint8 GEAR_INDICATION)
{
     setuint8SigValue(tcu_general_status.data,6,48,8,GEAR_INDICATION);
}

