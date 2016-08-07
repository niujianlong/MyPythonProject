/*ECS_IMMO_RAND_NUMBER missing default process*/
void set_AUTH_RESULT( uint8 AUTH_RESULT)
{
     setuint8SigValue(ecs_immo_rand_number.data,47,8,AUTH_RESULT);
}

void set_IMMO_SID( uint8 IMMO_SID)
{
     setuint8SigValue(ecs_immo_rand_number.data,7,8,IMMO_SID);
}

/*TCU_ENGINE_TORQUE_REQUEST missing default process*/
void set_TRANSMISSION_OIL_TEMPERATURE( uint8 TRANSMISSION_OIL_TEMPERATURE)
{
     setuint8SigValue(tcu_engine_torque_request.data,47,8,TRANSMISSION_OIL_TEMPERATURE);
}

/*EMS_ENGINE_SPEED_AND_TORQUE missing default process*/
void set_ACTUAL_ENGINE_SPEED_UNFILTERED( uint16 ACTUAL_ENGINE_SPEED_UNFILTERED)
{
     setuint16SigValue(ems_engine_speed_and_torque.data,15,16,ACTUAL_ENGINE_SPEED_UNFILTERED);
}

void set_VALID_ESPEED( uint8 VALID_ESPEED)
{
     setuint8SigValue(ems_engine_speed_and_torque.data,4,1,VALID_ESPEED);
}

/*EMS_GENERAL_STATUS missing default process*/
void set_EMS_ACTUAL_GEAR( uint8 EMS_ACTUAL_GEAR)
{
     setuint8SigValue(ems_general_status.data,15,8,EMS_ACTUAL_GEAR);
}

void set_BRAKE_STATUS_EMS( uint8 BRAKE_STATUS_EMS)
{
     setuint8SigValue(ems_general_status.data,17,1,BRAKE_STATUS_EMS);
}

void set_HAND_BRAKE_EMS( uint8 HAND_BRAKE_EMS)
{
     setuint8SigValue(ems_general_status.data,2,1,HAND_BRAKE_EMS);
}

void set_REQ_SHIFT_DOWN_TELLTALE( uint8 REQ_SHIFT_DOWN_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,21,1,REQ_SHIFT_DOWN_TELLTALE);
}

void set_CRUISE_ACTIVE( uint8 CRUISE_ACTIVE)
{
     setuint8SigValue(ems_general_status.data,22,1,CRUISE_ACTIVE);
}

void set_ACTUAL_GEARBOX( uint8 ACTUAL_GEARBOX)
{
     setuint8SigValue(ems_general_status.data,29,1,ACTUAL_GEARBOX);
}

void set_VALID_BRAKE_STATUS_EMS( uint8 VALID_BRAKE_STATUS_EMS)
{
     setuint8SigValue(ems_general_status.data,3,1,VALID_BRAKE_STATUS_EMS);
}

void set_EMS_AUTHRESULT( uint8 EMS_AUTHRESULT)
{
     setuint8SigValue(ems_general_status.data,36,2,EMS_AUTHRESULT);
}

void set_REQ_CRUISE_TELLTALE( uint8 REQ_CRUISE_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,37,1,REQ_CRUISE_TELLTALE);
}

void set_REQ_SHIFT_UP_TELLTALE( uint8 REQ_SHIFT_UP_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,38,1,REQ_SHIFT_UP_TELLTALE);
}

void set_REQ_CHECK_ENGINE_TELLTALE( uint8 REQ_CHECK_ENGINE_TELLTALE)
{
     setuint8SigValue(ems_general_status.data,39,1,REQ_CHECK_ENGINE_TELLTALE);
}

void set_ENGINE_RUNNING( uint8 ENGINE_RUNNING)
{
     setuint8SigValue(ems_general_status.data,47,2,ENGINE_RUNNING);
}

void set_VALID_ACTUAL_GEAR_EMS( uint8 VALID_ACTUAL_GEAR_EMS)
{
     setuint8SigValue(ems_general_status.data,5,2,VALID_ACTUAL_GEAR_EMS);
}

void set_GEAR_SWITCH_INDICATOR( uint8 GEAR_SWITCH_INDICATOR)
{
     setuint8SigValue(ems_general_status.data,59,4,GEAR_SWITCH_INDICATOR);
}

/*EMS_START_STOP missing default process*/
void set_SS_IDLE_STOP_STATUS( uint8 SS_IDLE_STOP_STATUS)
{
     setuint8SigValue(ems_start_stop.data,0,1,SS_IDLE_STOP_STATUS);
}

void set_SS_SYS_STS( uint8 SS_SYS_STS)
{
     setuint8SigValue(ems_start_stop.data,10,2,SS_SYS_STS);
}

void set_AUTO_STOP_REQUEST( uint8 AUTO_STOP_REQUEST)
{
     setuint8SigValue(ems_start_stop.data,11,1,AUTO_STOP_REQUEST);
}

void set_ENG_SS_STS( uint8 ENG_SS_STS)
{
     setuint8SigValue(ems_start_stop.data,15,4,ENG_SS_STS);
}

void set_SS_FAULT_LAMP( uint8 SS_FAULT_LAMP)
{
     setuint8SigValue(ems_start_stop.data,5,1,SS_FAULT_LAMP);
}

void set_SS_ENABLE_LAMP( uint8 SS_ENABLE_LAMP)
{
     setuint8SigValue(ems_start_stop.data,6,1,SS_ENABLE_LAMP);
}

/*GENERAL_STATUS_TCS_ESP missing default process*/
void set_REQ_TCS_ESP_FAILURE_TELLTALE( uint8 REQ_TCS_ESP_FAILURE_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,14,1,REQ_TCS_ESP_FAILURE_TELLTALE);
}

void set_REQ_TCS_ESP_ACTIVE_TELLTALE( uint8 REQ_TCS_ESP_ACTIVE_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,20,1,REQ_TCS_ESP_ACTIVE_TELLTALE);
}

void set_REQ_TCS_ESP_OFF_TELLTALE( uint8 REQ_TCS_ESP_OFF_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,21,1,REQ_TCS_ESP_OFF_TELLTALE);
}

void set_REQ_EBD_TELLTALE( uint8 REQ_EBD_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,22,1,REQ_EBD_TELLTALE);
}

void set_REQ_ABS_TELLTALE( uint8 REQ_ABS_TELLTALE)
{
     setuint8SigValue(general_status_tcs_esp.data,23,1,REQ_ABS_TELLTALE);
}

void set_ODOMETER_ROLLING( uint16 ODOMETER_ROLLING)
{
     setuint16SigValue(general_status_tcs_esp.data,31,16,ODOMETER_ROLLING);
}

/*ICM_EVENT_COMMAND missing default process*/
void set_MIRROR_FADE_IN_OUT( uint8 MIRROR_FADE_IN_OUT)
{
     setuint8SigValue(icm_event_command.data,1,2,MIRROR_FADE_IN_OUT);
}

void set_MEMO_OUTSIDE_RMIRROR_GND_PSTN( uint8 MEMO_OUTSIDE_RMIRROR_GND_PSTN)
{
     setuint8SigValue(icm_event_command.data,3,2,MEMO_OUTSIDE_RMIRROR_GND_PSTN);
}

void set_OUTSIDE_RMIRROR_SEE_GROUND( uint8 OUTSIDE_RMIRROR_SEE_GROUND)
{
     setuint8SigValue(icm_event_command.data,5,2,OUTSIDE_RMIRROR_SEE_GROUND);
}

void set_PAS_SYSTEM_SWITCH( uint8 PAS_SYSTEM_SWITCH)
{
     setuint8SigValue(icm_event_command.data,9,2,PAS_SYSTEM_SWITCH);
}

void set_SVA_SYSTEM_SWITCH( uint8 SVA_SYSTEM_SWITCH)
{
     setuint8SigValue(icm_event_command.data,11,2,SVA_SYSTEM_SWITCH);
}

void set_MINUTES_MIU( uint8 MINUTES_MIU)
{
     setuint8SigValue(icm_event_command.data,21,6,MINUTES_MIU);
}

void set_TIME_MODE_MIU( uint8 TIME_MODE_MIU)
{
     setuint8SigValue(icm_event_command.data,23,2,TIME_MODE_MIU);
}

void set_WEEK_MIU( uint8 WEEK_MIU)
{
     setuint8SigValue(icm_event_command.data,26,3,WEEK_MIU);
}

void set_HOUR_MIU( uint8 HOUR_MIU)
{
     setuint8SigValue(icm_event_command.data,31,5,HOUR_MIU);
}

void set_MONTH_MIU( uint8 MONTH_MIU)
{
     setuint8SigValue(icm_event_command.data,34,4,MONTH_MIU);
}

void set_DAY_MIU( uint8 DAY_MIU)
{
     setuint8SigValue(icm_event_command.data,39,5,DAY_MIU);
}

void set_YEAR_MIU( uint8 YEAR_MIU)
{
     setuint8SigValue(icm_event_command.data,46,5,YEAR_MIU);
}

/*EPS_STATUS missing default process*/
void set_STS_EPS_ACTIVE_STS( uint8 STS_EPS_ACTIVE_STS)
{
     setuint8SigValue(eps_status.data,3,1,STS_EPS_ACTIVE_STS);
}

void set_STS_EPS_FAULT_STS( uint8 STS_EPS_FAULT_STS)
{
     setuint8SigValue(eps_status.data,7,4,STS_EPS_FAULT_STS);
}

/*SDM_GENERAL_STATUS missing default process*/
void set_CHK_BELTS( uint8 CHK_BELTS)
{
     setuint8SigValue(sdm_general_status.data,0,1,CHK_BELTS);
}

void set_AIRBAG_WARNINGLAMP( uint8 AIRBAG_WARNINGLAMP)
{
     setuint8SigValue(sdm_general_status.data,1,1,AIRBAG_WARNINGLAMP);
}

void set_PASSENGER_AIRBAG_OFF( uint8 PASSENGER_AIRBAG_OFF)
{
     setuint8SigValue(sdm_general_status.data,11,1,PASSENGER_AIRBAG_OFF);
}

void set_SEATBELT_PA_ATT( uint8 SEATBELT_PA_ATT)
{
     setuint8SigValue(sdm_general_status.data,6,1,SEATBELT_PA_ATT);
}

void set_SEATBELT_DR_ATT( uint8 SEATBELT_DR_ATT)
{
     setuint8SigValue(sdm_general_status.data,7,1,SEATBELT_DR_ATT);
}

/*EMS_ENGINE_FUEL_AND_TURBO missing default process*/
void set_ENGINE_FUEAL_INJECTED( uint16 ENGINE_FUEAL_INJECTED)
{
     setuint16SigValue(ems_engine_fuel_and_turbo.data,15,16,ENGINE_FUEAL_INJECTED);
}

void set_VALID_TURBO( uint8 VALID_TURBO)
{
     setuint8SigValue(ems_engine_fuel_and_turbo.data,3,2,VALID_TURBO);
}

void set_TURBO_PRESENTATION( uint8 TURBO_PRESENTATION)
{
     setuint8SigValue(ems_engine_fuel_and_turbo.data,31,8,TURBO_PRESENTATION);
}

void set_VALID_FUEL_INJ( uint8 VALID_FUEL_INJ)
{
     setuint8SigValue(ems_engine_fuel_and_turbo.data,5,2,VALID_FUEL_INJ);
}

/*EMS_ENGINE_IDLE_AND_VSPEED missing default process*/
void set_VALID_VEHICLE_SPEED( uint8 VALID_VEHICLE_SPEED)
{
     setuint8SigValue(ems_engine_idle_and_vspeed.data,3,2,VALID_VEHICLE_SPEED);
}

void set_VEHICLE_SPEED( uint16 VEHICLE_SPEED)
{
     setuint16SigValue(ems_engine_idle_and_vspeed.data,31,16,VEHICLE_SPEED);
}

/*TCU_GENERAL_STATUS missing default process*/
void set_TCU_TARGET_GEAR( uint8 TCU_TARGET_GEAR)
{
     setuint8SigValue(tcu_general_status.data,15,8,TCU_TARGET_GEAR);
}

void set_TCU_SELECTED_GEAR( uint8 TCU_SELECTED_GEAR)
{
     setuint8SigValue(tcu_general_status.data,23,8,TCU_SELECTED_GEAR);
}

void set_REQ_MIL_ACTIVE( uint8 REQ_MIL_ACTIVE)
{
     setuint8SigValue(tcu_general_status.data,24,1,REQ_MIL_ACTIVE);
}

void set_REQ_WINTER_TELLTALE( uint8 REQ_WINTER_TELLTALE)
{
     setuint8SigValue(tcu_general_status.data,29,1,REQ_WINTER_TELLTALE);
}

void set_VALID_SELECTED_GEAR( uint8 VALID_SELECTED_GEAR)
{
     setuint8SigValue(tcu_general_status.data,3,2,VALID_SELECTED_GEAR);
}

void set_REQ_SPORTS_TELLTALE( uint8 REQ_SPORTS_TELLTALE)
{
     setuint8SigValue(tcu_general_status.data,30,1,REQ_SPORTS_TELLTALE);
}

void set_REQ_CHK_GEARBOX_TELLTALE( uint8 REQ_CHK_GEARBOX_TELLTALE)
{
     setuint8SigValue(tcu_general_status.data,31,1,REQ_CHK_GEARBOX_TELLTALE);
}

void set_CHK_HIGH_OIL_TEMP( uint8 CHK_HIGH_OIL_TEMP)
{
     setuint8SigValue(tcu_general_status.data,39,1,CHK_HIGH_OIL_TEMP);
}

void set_TRANS_SHIFT_PATTERN_STATUS( uint8 TRANS_SHIFT_PATTERN_STATUS)
{
     setuint8SigValue(tcu_general_status.data,47,8,TRANS_SHIFT_PATTERN_STATUS);
}

void set_VALID_ACTUAL_GEAR_TCU( uint8 VALID_ACTUAL_GEAR_TCU)
{
     setuint8SigValue(tcu_general_status.data,5,2,VALID_ACTUAL_GEAR_TCU);
}

void set_GEAR_INDICATION( uint8 GEAR_INDICATION)
{
     setuint8SigValue(tcu_general_status.data,55,8,GEAR_INDICATION);
}

/*BCM_GENERAL_STATUS missing default process*/
void set_CHECK_FRONT_FOG_LIGHT( uint8 CHECK_FRONT_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,17,1,CHECK_FRONT_FOG_LIGHT);
}

void set_CHECK_REAR_FOG_LIGHT( uint8 CHECK_REAR_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,18,1,CHECK_REAR_FOG_LIGHT);
}

void set_TELLTALE_FRONT_FOG_LIGHT( uint8 TELLTALE_FRONT_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,19,1,TELLTALE_FRONT_FOG_LIGHT);
}

void set_TELLTALE_REAR_FOG_LIGHT( uint8 TELLTALE_REAR_FOG_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,20,1,TELLTALE_REAR_FOG_LIGHT);
}

void set_REQ_RIGHT_DI_TELLTABLE( uint8 REQ_RIGHT_DI_TELLTABLE)
{
     setuint8SigValue(bcm_general_status.data,21,1,REQ_RIGHT_DI_TELLTABLE);
}

void set_REQ_LEFT_DI_TELLTABLE( uint8 REQ_LEFT_DI_TELLTABLE)
{
     setuint8SigValue(bcm_general_status.data,22,1,REQ_LEFT_DI_TELLTABLE);
}

void set_HOOD_LID_OPEN( uint8 HOOD_LID_OPEN)
{
     setuint8SigValue(bcm_general_status.data,24,1,HOOD_LID_OPEN);
}

void set_TRUNK_LID_OPEN( uint8 TRUNK_LID_OPEN)
{
     setuint8SigValue(bcm_general_status.data,25,1,TRUNK_LID_OPEN);
}

void set_REAR_RIGHT_DOOR_OPEN( uint8 REAR_RIGHT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,26,1,REAR_RIGHT_DOOR_OPEN);
}

void set_REAR_LEFT_DOOR_OPEN( uint8 REAR_LEFT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,27,1,REAR_LEFT_DOOR_OPEN);
}

void set_FRONT_RIGHT_DOOR_OPEN( uint8 FRONT_RIGHT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,28,1,FRONT_RIGHT_DOOR_OPEN);
}

void set_FRONT_LEFT_DOOR_OPEN( uint8 FRONT_LEFT_DOOR_OPEN)
{
     setuint8SigValue(bcm_general_status.data,29,1,FRONT_LEFT_DOOR_OPEN);
}

void set_DOOR_UNLOCK_REST( uint8 DOOR_UNLOCK_REST)
{
     setuint8SigValue(bcm_general_status.data,30,1,DOOR_UNLOCK_REST);
}

void set_DOOR_UNLOCK_DRIVER( uint8 DOOR_UNLOCK_DRIVER)
{
     setuint8SigValue(bcm_general_status.data,31,1,DOOR_UNLOCK_DRIVER);
}

void set_PARK_LIGHT_RIGHT_INDICATION( uint8 PARK_LIGHT_RIGHT_INDICATION)
{
     setuint8SigValue(bcm_general_status.data,32,1,PARK_LIGHT_RIGHT_INDICATION);
}

void set_PARK_LIGHT_LEFT_INDICATION( uint8 PARK_LIGHT_LEFT_INDICATION)
{
     setuint8SigValue(bcm_general_status.data,33,1,PARK_LIGHT_LEFT_INDICATION);
}

void set_CHK_THEFT_ALARM( uint8 CHK_THEFT_ALARM)
{
     setuint8SigValue(bcm_general_status.data,35,1,CHK_THEFT_ALARM);
}

void set_BRAKE_BULB_FAILURE( uint8 BRAKE_BULB_FAILURE)
{
     setuint8SigValue(bcm_general_status.data,37,1,BRAKE_BULB_FAILURE);
}

void set_PARK_BULB_FAILURE_RIGHT( uint8 PARK_BULB_FAILURE_RIGHT)
{
     setuint8SigValue(bcm_general_status.data,38,1,PARK_BULB_FAILURE_RIGHT);
}

void set_PARK_BULB_FAILURE_LEFT( uint8 PARK_BULB_FAILURE_LEFT)
{
     setuint8SigValue(bcm_general_status.data,39,1,PARK_BULB_FAILURE_LEFT);
}

void set_LOW_BEAM_INDICATOR( uint8 LOW_BEAM_INDICATOR)
{
     setuint8SigValue(bcm_general_status.data,40,1,LOW_BEAM_INDICATOR);
}

void set_HIGH_BEAM_INDICATOR( uint8 HIGH_BEAM_INDICATOR)
{
     setuint8SigValue(bcm_general_status.data,41,1,HIGH_BEAM_INDICATOR);
}

void set_TELLTALE_HAZARD_LIGHT( uint8 TELLTALE_HAZARD_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,42,1,TELLTALE_HAZARD_LIGHT);
}

void set_TURN_BULB_FAILURE_RIGHT( uint8 TURN_BULB_FAILURE_RIGHT)
{
     setuint8SigValue(bcm_general_status.data,43,1,TURN_BULB_FAILURE_RIGHT);
}

void set_TURN_BULB_FAILURE_LEFT( uint8 TURN_BULB_FAILURE_LEFT)
{
     setuint8SigValue(bcm_general_status.data,44,1,TURN_BULB_FAILURE_LEFT);
}

void set_PARK_RANGE_SWITCH( uint8 PARK_RANGE_SWITCH)
{
     setuint8SigValue(bcm_general_status.data,46,1,PARK_RANGE_SWITCH);
}

void set_BRAKE_LIGHT_ACTIVE( uint8 BRAKE_LIGHT_ACTIVE)
{
     setuint8SigValue(bcm_general_status.data,47,1,BRAKE_LIGHT_ACTIVE);
}

void set_CHECK_BRAKE_AUXILIARY_LIGHT( uint8 CHECK_BRAKE_AUXILIARY_LIGHT)
{
     setuint8SigValue(bcm_general_status.data,48,1,CHECK_BRAKE_AUXILIARY_LIGHT);
}

void set_DRL_FAILURE( uint8 DRL_FAILURE)
{
     setuint8SigValue(bcm_general_status.data,49,1,DRL_FAILURE);
}

void set_POSITION_LIGHT_ON_WARNING( uint8 POSITION_LIGHT_ON_WARNING)
{
     setuint8SigValue(bcm_general_status.data,50,1,POSITION_LIGHT_ON_WARNING);
}

void set_ANTI_THELF_INDICATOR( uint8 ANTI_THELF_INDICATOR)
{
     setuint8SigValue(bcm_general_status.data,52,2,ANTI_THELF_INDICATOR);
}

/*HUM_TIME missing default process*/
void set_TIME_MODE_HUM( uint8 TIME_MODE_HUM)
{
     setuint8SigValue(hum_time.data,1,2,TIME_MODE_HUM);
}

void set_MINUTES_HUM( uint8 MINUTES_HUM)
{
     setuint8SigValue(hum_time.data,15,6,MINUTES_HUM);
}

void set_DAY_HUM( uint8 DAY_HUM)
{
     setuint8SigValue(hum_time.data,17,5,DAY_HUM);
}

void set_WEEK_HUM( uint8 WEEK_HUM)
{
     setuint8SigValue(hum_time.data,20,3,WEEK_HUM);
}

void set_YEAR_HUM( uint8 YEAR_HUM)
{
     setuint8SigValue(hum_time.data,24,5,YEAR_HUM);
}

void set_MONTH_HUM( uint8 MONTH_HUM)
{
     setuint8SigValue(hum_time.data,28,4,MONTH_HUM);
}

void set_SECOND_HUM( uint8 SECOND_HUM)
{
     setuint8SigValue(hum_time.data,7,6,SECOND_HUM);
}

void set_HOUR_HUM( uint8 HOUR_HUM)
{
     setuint8SigValue(hum_time.data,9,5,HOUR_HUM);
}

/*AC_CONTROL missing default process*/
void set_VALID_OTEMP( uint8 VALID_OTEMP)
{
     setuint8SigValue(ac_control.data,1,2,VALID_OTEMP);
}

void set_OUTSIDE_TEMP( uint8 OUTSIDE_TEMP)
{
     setuint8SigValue(ac_control.data,23,8,OUTSIDE_TEMP);
}

/*TPMS_SYS_STATUS missing default process*/
void set_LF_PRESSURE( uint8 LF_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,15,8,LF_PRESSURE);
}

void set_TIRE_POSITION( uint8 TIRE_POSITION)
{
     setuint8SigValue(tpms_sys_status.data,2,3,TIRE_POSITION);
}

void set_RF_PRESSURE( uint8 RF_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,23,8,RF_PRESSURE);
}

void set_RR_PRESSURE( uint8 RR_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,31,8,RR_PRESSURE);
}

void set_LR_PRESSURE( uint8 LR_PRESSURE)
{
     setuint8SigValue(tpms_sys_status.data,39,8,LR_PRESSURE);
}

void set_TIRE_TEMPERATURE( uint8 TIRE_TEMPERATURE)
{
     setuint8SigValue(tpms_sys_status.data,47,8,TIRE_TEMPERATURE);
}

void set_RF_PRESSURE_WARNING( uint8 RF_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,52,3,RF_PRESSURE_WARNING);
}

void set_LF_PRESSURE_WARNING( uint8 LF_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,55,3,LF_PRESSURE_WARNING);
}

void set_SYSTEM_WARNING( uint8 SYSTEM_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,56,1,SYSTEM_WARNING);
}

void set_TEMPERATURE_WARNING( uint8 TEMPERATURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,57,1,TEMPERATURE_WARNING);
}

void set_LR_PRESSURE_WARNING( uint8 LR_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,60,3,LR_PRESSURE_WARNING);
}

void set_RR_PRESSURE_WARNING( uint8 RR_PRESSURE_WARNING)
{
     setuint8SigValue(tpms_sys_status.data,63,3,RR_PRESSURE_WARNING);
}

void set_SIGNAL_STATUS( uint8 SIGNAL_STATUS)
{
     setuint8SigValue(tpms_sys_status.data,7,1,SIGNAL_STATUS);
}

/*PAS_GENERAL_STATUS missing default process*/
void set_PAS_SYS_STATUS( uint8 PAS_SYS_STATUS)
{
     setuint8SigValue(pas_general_status.data,1,2,PAS_SYS_STATUS);
}

void set_SVA_SYS_STATUS( uint8 SVA_SYS_STATUS)
{
     setuint8SigValue(pas_general_status.data,3,2,SVA_SYS_STATUS);
}

void set_PA_FRONT_SYS_STATUS( uint8 PA_FRONT_SYS_STATUS)
{
     setuint8SigValue(pas_general_status.data,5,2,PA_FRONT_SYS_STATUS);
}

void set_PA_REAR_SYS_STATUS( uint8 PA_REAR_SYS_STATUS)
{
     setuint8SigValue(pas_general_status.data,7,2,PA_REAR_SYS_STATUS);
}

void set_PA_REARMIDLEFT_REG_OBJ_STATUS( uint8 PA_REARMIDLEFT_REG_OBJ_STATUS)
{
     setuint8SigValue(pas_general_status.data,11,4,PA_REARMIDLEFT_REG_OBJ_STATUS);
}

void set_PA_REARLEFT_REG_OBJ_STATUS( uint8 PA_REARLEFT_REG_OBJ_STATUS)
{
     setuint8SigValue(pas_general_status.data,15,4,PA_REARLEFT_REG_OBJ_STATUS);
}

void set_PA_FRONTLEFT_REG_OBJ_STATUS( uint8 PA_FRONTLEFT_REG_OBJ_STATUS)
{
     setuint8SigValue(pas_general_status.data,19,4,PA_FRONTLEFT_REG_OBJ_STATUS);
}

void set_PA_REARRIGHT_REG_OBJ_STATUS( uint8 PA_REARRIGHT_REG_OBJ_STATUS)
{
     setuint8SigValue(pas_general_status.data,23,4,PA_REARRIGHT_REG_OBJ_STATUS);
}

void set_PA_FRONTRIGHT_REG_OBJ_STATUS( uint8 PA_FRONTRIGHT_REG_OBJ_STATUS)
{
     setuint8SigValue(pas_general_status.data,27,4,PA_FRONTRIGHT_REG_OBJ_STATUS);
}

void set_PA_FRONTMIDLEFT_REG_OBJ_STATUS( uint8 PA_FRONTMIDLEFT_REG_OBJ_STATUS)
{
     setuint8SigValue(pas_general_status.data,31,4,PA_FRONTMIDLEFT_REG_OBJ_STATUS);
}

void set_REAR_MINI_PAS_DISTANCE( uint8 REAR_MINI_PAS_DISTANCE)
{
     setuint8SigValue(pas_general_status.data,39,8,REAR_MINI_PAS_DISTANCE);
}

void set_FRONT_MINI_PAS_DISTANCE( uint8 FRONT_MINI_PAS_DISTANCE)
{
     setuint8SigValue(pas_general_status.data,47,8,FRONT_MINI_PAS_DISTANCE);
}

void set_PA_REARMIDRIGHT_REG_OBJ_ST( uint8 PA_REARMIDRIGHT_REG_OBJ_ST)
{
     setuint8SigValue(pas_general_status.data,51,4,PA_REARMIDRIGHT_REG_OBJ_ST);
}

void set_SVA_WARNING_STATUS_RIGHT( uint8 SVA_WARNING_STATUS_RIGHT)
{
     setuint8SigValue(pas_general_status.data,53,2,SVA_WARNING_STATUS_RIGHT);
}

void set_SVA_WARNING_STATUS_LEFT( uint8 SVA_WARNING_STATUS_LEFT)
{
     setuint8SigValue(pas_general_status.data,55,2,SVA_WARNING_STATUS_LEFT);
}

void set_NEAREST_REAR_PAS( uint8 NEAREST_REAR_PAS)
{
     setuint8SigValue(pas_general_status.data,57,2,NEAREST_REAR_PAS);
}

void set_PA_PAS_SW_STATUS( uint8 PA_PAS_SW_STATUS)
{
     setuint8SigValue(pas_general_status.data,59,2,PA_PAS_SW_STATUS);
}

void set_PA_FRONTMIDRIGHT_REG_OBJ_ST( uint8 PA_FRONTMIDRIGHT_REG_OBJ_ST)
{
     setuint8SigValue(pas_general_status.data,63,4,PA_FRONTMIDRIGHT_REG_OBJ_ST);
}

/*PEPS_GENERAL_STATUS missing default process*/
void set_REMOTE_START_RESPONSE_PEPS( uint8 REMOTE_START_RESPONSE_PEPS)
{
     setuint8SigValue(peps_general_status.data,0,1,REMOTE_START_RESPONSE_PEPS);
}

void set_REMOTE_START_STATUS( uint8 REMOTE_START_STATUS)
{
     setuint8SigValue(peps_general_status.data,19,2,REMOTE_START_STATUS);
}

/*ESCL_GENERAL_STATUS missing default process*/
void set_ESCL_TEXT_ROTATE_STEERING_WHEEL( uint8 ESCL_TEXT_ROTATE_STEERING_WHEEL)
{
     setuint8SigValue(escl_general_status.data,0,1,ESCL_TEXT_ROTATE_STEERING_WHEEL);
}

void set_ESCL_TEXT_GARAGE( uint8 ESCL_TEXT_GARAGE)
{
     setuint8SigValue(escl_general_status.data,1,1,ESCL_TEXT_GARAGE);
}

void set_ESCL_TEXT_STEERING_NOT_UNLOCKED( uint8 ESCL_TEXT_STEERING_NOT_UNLOCKED)
{
     setuint8SigValue(escl_general_status.data,15,1,ESCL_TEXT_STEERING_NOT_UNLOCKED);
}

void set_ESCL_TEXTDEECT( uint8 ESCL_TEXTDEECT)
{
     setuint8SigValue(escl_general_status.data,2,1,ESCL_TEXTDEECT);
}

void set_ESCL_LED_YELLOW( uint8 ESCL_LED_YELLOW)
{
     setuint8SigValue(escl_general_status.data,3,1,ESCL_LED_YELLOW);
}

void set_ESCL_LED_RED( uint8 ESCL_LED_RED)
{
     setuint8SigValue(escl_general_status.data,4,1,ESCL_LED_RED);
}

void set_ESCL_UNLOCKED( uint8 ESCL_UNLOCKED)
{
     setuint8SigValue(escl_general_status.data,5,1,ESCL_UNLOCKED);
}

void set_ESCL_LOCKED( uint8 ESCL_LOCKED)
{
     setuint8SigValue(escl_general_status.data,6,1,ESCL_LOCKED);
}

void set_ESCL_SERVICE_RELEVANT_FAILURE( uint8 ESCL_SERVICE_RELEVANT_FAILURE)
{
     setuint8SigValue(escl_general_status.data,7,1,ESCL_SERVICE_RELEVANT_FAILURE);
}

/*PEPS_GENERAL_STATUS_2 missing default process*/
void set_MIU_MSG_REQ_N7( uint8 MIU_MSG_REQ_N7)
{
     setuint8SigValue(peps_general_status_2.data,32,1,MIU_MSG_REQ_N7);
}

void set_MIU_MSG_REQ_N6( uint8 MIU_MSG_REQ_N6)
{
     setuint8SigValue(peps_general_status_2.data,33,1,MIU_MSG_REQ_N6);
}

void set_MIU_MSG_REQ_N5( uint8 MIU_MSG_REQ_N5)
{
     setuint8SigValue(peps_general_status_2.data,34,1,MIU_MSG_REQ_N5);
}

void set_MIU_MSG_REQ_N4( uint8 MIU_MSG_REQ_N4)
{
     setuint8SigValue(peps_general_status_2.data,35,1,MIU_MSG_REQ_N4);
}

void set_MIU_MSG_REQ_N3( uint8 MIU_MSG_REQ_N3)
{
     setuint8SigValue(peps_general_status_2.data,36,1,MIU_MSG_REQ_N3);
}

void set_MIU_MSG_REQ_N2( uint8 MIU_MSG_REQ_N2)
{
     setuint8SigValue(peps_general_status_2.data,37,1,MIU_MSG_REQ_N2);
}

void set_MIU_MSG_REQ_N1( uint8 MIU_MSG_REQ_N1)
{
     setuint8SigValue(peps_general_status_2.data,38,1,MIU_MSG_REQ_N1);
}

void set_MIU_MSG_REQ_N0( uint8 MIU_MSG_REQ_N0)
{
     setuint8SigValue(peps_general_status_2.data,39,1,MIU_MSG_REQ_N0);
}

void set_MIU_MSG_REQ_N15( uint8 MIU_MSG_REQ_N15)
{
     setuint8SigValue(peps_general_status_2.data,40,1,MIU_MSG_REQ_N15);
}

void set_MIU_MSG_REQ_N14( uint8 MIU_MSG_REQ_N14)
{
     setuint8SigValue(peps_general_status_2.data,41,1,MIU_MSG_REQ_N14);
}

void set_MIU_MSG_REQ_N13( uint8 MIU_MSG_REQ_N13)
{
     setuint8SigValue(peps_general_status_2.data,42,1,MIU_MSG_REQ_N13);
}

void set_MIU_MSG_REQ_N12( uint8 MIU_MSG_REQ_N12)
{
     setuint8SigValue(peps_general_status_2.data,43,1,MIU_MSG_REQ_N12);
}

void set_MIU_MSG_REQ_N11( uint8 MIU_MSG_REQ_N11)
{
     setuint8SigValue(peps_general_status_2.data,44,1,MIU_MSG_REQ_N11);
}

void set_MIU_MSG_REQ_N10( uint8 MIU_MSG_REQ_N10)
{
     setuint8SigValue(peps_general_status_2.data,45,1,MIU_MSG_REQ_N10);
}

void set_MIU_MSG_REQ_N9( uint8 MIU_MSG_REQ_N9)
{
     setuint8SigValue(peps_general_status_2.data,46,1,MIU_MSG_REQ_N9);
}

void set_MIU_MSG_REQ_N8( uint8 MIU_MSG_REQ_N8)
{
     setuint8SigValue(peps_general_status_2.data,47,1,MIU_MSG_REQ_N8);
}

void set_MIU_MSG_REQ_N16( uint8 MIU_MSG_REQ_N16)
{
     setuint8SigValue(peps_general_status_2.data,55,1,MIU_MSG_REQ_N16);
}

/*AVM_GENERAL_STATUS missing default process*/
void set_AVM_HMI_INDEX( uint8 AVM_HMI_INDEX)
{
     setuint8SigValue(avm_general_status.data,11,4,AVM_HMI_INDEX);
}

void set_AVM_DISPLAY_REQ( uint8 AVM_DISPLAY_REQ)
{
     setuint8SigValue(avm_general_status.data,13,2,AVM_DISPLAY_REQ);
}

void set_FRONT_CAMERA_INPUT_FAILED( uint8 FRONT_CAMERA_INPUT_FAILED)
{
     setuint8SigValue(avm_general_status.data,16,1,FRONT_CAMERA_INPUT_FAILED);
}

void set_REAR_CAMERA_INPUT_FAILED( uint8 REAR_CAMERA_INPUT_FAILED)
{
     setuint8SigValue(avm_general_status.data,17,1,REAR_CAMERA_INPUT_FAILED);
}

void set_LEFT_CAMERA_INPUT_FAILED( uint8 LEFT_CAMERA_INPUT_FAILED)
{
     setuint8SigValue(avm_general_status.data,18,1,LEFT_CAMERA_INPUT_FAILED);
}

void set_RIGHT_CAMERA_INPUT_FAILED( uint8 RIGHT_CAMERA_INPUT_FAILED)
{
     setuint8SigValue(avm_general_status.data,19,1,RIGHT_CAMERA_INPUT_FAILED);
}

void set_VIDEO_OUTPUT_FAILED( uint8 VIDEO_OUTPUT_FAILED)
{
     setuint8SigValue(avm_general_status.data,20,1,VIDEO_OUTPUT_FAILED);
}

void set_CONTROLLER_OP_FAILED( uint8 CONTROLLER_OP_FAILED)
{
     setuint8SigValue(avm_general_status.data,21,1,CONTROLLER_OP_FAILED);
}

void set_CAN_COM_FAILED( uint8 CAN_COM_FAILED)
{
     setuint8SigValue(avm_general_status.data,22,1,CAN_COM_FAILED);
}

void set_OVERLAY_OP_FAILED( uint8 OVERLAY_OP_FAILED)
{
     setuint8SigValue(avm_general_status.data,23,1,OVERLAY_OP_FAILED);
}

void set_LDW_OP_STATUS( uint8 LDW_OP_STATUS)
{
     setuint8SigValue(avm_general_status.data,27,2,LDW_OP_STATUS);
}

void set_BSD_OP_STATUS( uint8 BSD_OP_STATUS)
{
     setuint8SigValue(avm_general_status.data,29,2,BSD_OP_STATUS);
}

void set_AVM_STATUS( uint8 AVM_STATUS)
{
     setuint8SigValue(avm_general_status.data,3,4,AVM_STATUS);
}

void set_LDW_LANE_AVALIABILITY( uint8 LDW_LANE_AVALIABILITY)
{
     setuint8SigValue(avm_general_status.data,31,2,LDW_LANE_AVALIABILITY);
}

void set_LDW_WARNING_STATUS( uint8 LDW_WARNING_STATUS)
{
     setuint8SigValue(avm_general_status.data,35,4,LDW_WARNING_STATUS);
}

void set_BSD_LEFT_WARNING_STATUS( uint8 BSD_LEFT_WARNING_STATUS)
{
     setuint8SigValue(avm_general_status.data,37,2,BSD_LEFT_WARNING_STATUS);
}

void set_BSD_RIGHT_WARNING_STATUS( uint8 BSD_RIGHT_WARNING_STATUS)
{
     setuint8SigValue(avm_general_status.data,39,2,BSD_RIGHT_WARNING_STATUS);
}

void set_MOD_FRONT_WARNING_STATUS( uint8 MOD_FRONT_WARNING_STATUS)
{
     setuint8SigValue(avm_general_status.data,40,1,MOD_FRONT_WARNING_STATUS);
}

void set_MOD_REAR_WARNING_STATUS( uint8 MOD_REAR_WARNING_STATUS)
{
     setuint8SigValue(avm_general_status.data,41,1,MOD_REAR_WARNING_STATUS);
}

void set_MOD_LEFT_WARNING_STATUS( uint8 MOD_LEFT_WARNING_STATUS)
{
     setuint8SigValue(avm_general_status.data,42,1,MOD_LEFT_WARNING_STATUS);
}

void set_MOD_RIGHT_WARNING_STATUS( uint8 MOD_RIGHT_WARNING_STATUS)
{
     setuint8SigValue(avm_general_status.data,43,1,MOD_RIGHT_WARNING_STATUS);
}

void set_BAT_VOLT_OUT_OF_RANGE( uint8 BAT_VOLT_OUT_OF_RANGE)
{
     setuint8SigValue(avm_general_status.data,44,1,BAT_VOLT_OUT_OF_RANGE);
}

void set_EOL_NOT_COMPLETED( uint8 EOL_NOT_COMPLETED)
{
     setuint8SigValue(avm_general_status.data,45,1,EOL_NOT_COMPLETED);
}

void set_GUID_VOICE_REQ( uint8 GUID_VOICE_REQ)
{
     setuint8SigValue(avm_general_status.data,7,4,GUID_VOICE_REQ);
}

/*EMS_ENGINE_TEMP_AND_BARROMETER missing default process*/
void set_COOLANT_TEMPERATURE( uint8 COOLANT_TEMPERATURE)
{
     setuint8SigValue(ems_engine_temp_and_barrometer.data,15,8,COOLANT_TEMPERATURE);
}

void set_VALID_COOLANT( uint8 VALID_COOLANT)
{
     setuint8SigValue(ems_engine_temp_and_barrometer.data,5,2,VALID_COOLANT);
}

/*ICM_GENERAL_STATUS missing default process*/
void set_DATA_VALID( uint8 DATA_VALID)
{
     setuint8SigValue(icm_general_status.data,0,1,DATA_VALID);
}

void set_AIRBAG_WARNINGLAMP_STATUS( uint8 AIRBAG_WARNINGLAMP_STATUS)
{
     setuint8SigValue(icm_general_status.data,1,1,AIRBAG_WARNINGLAMP_STATUS);
}

void set_NIGHT_PANEL( uint8 NIGHT_PANEL)
{
     setuint8SigValue(icm_general_status.data,2,1,NIGHT_PANEL);
}

void set_DATA_VALID_RHEOSTAT( uint8 DATA_VALID_RHEOSTAT)
{
     setuint8SigValue(icm_general_status.data,4,2,DATA_VALID_RHEOSTAT);
}

void set_WASHER_FLUID_LEVEL_LOW( uint8 WASHER_FLUID_LEVEL_LOW)
{
     setuint8SigValue(icm_general_status.data,5,1,WASHER_FLUID_LEVEL_LOW);
}

void set_ODOMETER_RESET_COUNTER_ICM( uint8 ODOMETER_RESET_COUNTER_ICM)
{
     setuint8SigValue(icm_general_status.data,7,2,ODOMETER_RESET_COUNTER_ICM);
}

void set_RHEOSTAT_LEVEL( uint8 RHEOSTAT_LEVEL)
{
     setuint8SigValue(icm_general_status.data,15,8,RHEOSTAT_LEVEL);
}

void set_DISPLAYED_TOTAL_DISTANCE( uint32 DISPLAYED_TOTAL_DISTANCE)
{
     setuint32SigValue(icm_general_status.data,23,32,DISPLAYED_TOTAL_DISTANCE);
}

void set_BATTERY_VOLTAGE_LEVEL( uint8 BATTERY_VOLTAGE_LEVEL)
{
     setuint8SigValue(icm_general_status.data,55,8,BATTERY_VOLTAGE_LEVEL);
}

void set_ODOMETER_OFFSET_ICM( uint8 ODOMETER_OFFSET_ICM)
{
     setuint8SigValue(icm_general_status.data,63,8,ODOMETER_OFFSET_ICM);
}

/*ICM_GENERAL_STATUS_2 missing default process*/
void set_HAND_BRAKE_ICM( uint8 HAND_BRAKE_ICM)
{
     setuint8SigValue(icm_general_status_2.data,0,1,HAND_BRAKE_ICM);
}

void set_REMOTE_START_RESPONSE_ICM( uint8 REMOTE_START_RESPONSE_ICM)
{
     setuint8SigValue(icm_general_status_2.data,7,1,REMOTE_START_RESPONSE_ICM);
}

void set_FUELTANK_REMAINING( uint8 FUELTANK_REMAINING)
{
     setuint8SigValue(icm_general_status_2.data,15,8,FUELTANK_REMAINING);
}

void set_OILPUMP_RESISTER_ICM( uint16 OILPUMP_RESISTER_ICM)
{
     setuint16SigValue(icm_general_status_2.data,19,12,OILPUMP_RESISTER_ICM);
}

/*AHL_GENERAL_STATUS missing default process*/
void set_AHL_FAULT_STATUS( uint8 AHL_FAULT_STATUS)
{
     setuint8SigValue(ahl_general_status.data,7,1,AHL_FAULT_STATUS);
}

/*BCM_GENERAL_STATUS_2 missing default process*/
void set_POWER_MODE_BCM( uint8 POWER_MODE_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,1,2,POWER_MODE_BCM);
}

void set_EB_ODO( uint32 EB_ODO)
{
     setuint32SigValue(bcm_general_status_2.data,15,32,EB_ODO);
}

void set_ODOMETER_OFFSET_BCM( uint8 ODOMETER_OFFSET_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,47,8,ODOMETER_OFFSET_BCM);
}

void set_EB_ODO_VALID( uint8 EB_ODO_VALID)
{
     setuint8SigValue(bcm_general_status_2.data,5,1,EB_ODO_VALID);
}

void set_POWER_MODE_VALIDITY_BCM( uint8 POWER_MODE_VALIDITY_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,60,2,POWER_MODE_VALIDITY_BCM);
}

void set_ODOMETER_RESET_COUNTER_BCM( uint8 ODOMETER_RESET_COUNTER_BCM)
{
     setuint8SigValue(bcm_general_status_2.data,7,2,ODOMETER_RESET_COUNTER_BCM);
}

/*HUM_EVENT_COMMAND_1 missing default process*/
void set_SYS_LANGUAGE( uint8 SYS_LANGUAGE)
{
     setuint8SigValue(hum_event_command_1.data,23,3,SYS_LANGUAGE);
}

/*ICM_GENERAL_STATUS_3 missing default process*/
void set_INSTANT_FUEL_CONSUM( uint16 INSTANT_FUEL_CONSUM)
{
     setuint16SigValue(icm_general_status_3.data,7,12,INSTANT_FUEL_CONSUM);
}

void set_AVERAGE_FUEL_CONSUM1( uint16 AVERAGE_FUEL_CONSUM1)
{
     setuint16SigValue(icm_general_status_3.data,11,12,AVERAGE_FUEL_CONSUM1);
}

void set_ENDURANCE_MILEAGE( uint16 ENDURANCE_MILEAGE)
{
     setuint16SigValue(icm_general_status_3.data,31,12,ENDURANCE_MILEAGE);
}

void set_REMAIN_MAINTAIN_MILEAGE( uint16 REMAIN_MAINTAIN_MILEAGE)
{
     setuint16SigValue(icm_general_status_3.data,35,16,REMAIN_MAINTAIN_MILEAGE);
}

void set_AVERAGE_FUEL_CONSUM2( uint16 AVERAGE_FUEL_CONSUM2)
{
     setuint16SigValue(icm_general_status_3.data,51,12,AVERAGE_FUEL_CONSUM2);
}

