uint8  get_CHECK_FRONT_FOG_LIGHT()
{
  return bcm_general_status.CHECK_FRONT_FOG_LIGHT;
}

uint8  get_CHECK_REAR_FOG_LIGHT()
{
  return bcm_general_status.CHECK_REAR_FOG_LIGHT;
}

uint8  get_TELLTALE_FRONT_FOG_LIGHT()
{
  return bcm_general_status.TELLTALE_FRONT_FOG_LIGHT;
}

uint8  get_TELLTALE_REAR_FOG_LIGHT()
{
  return bcm_general_status.TELLTALE_REAR_FOG_LIGHT;
}

uint8  get_REQ_RIGHT_DI_TELLTABLE()
{
  return bcm_general_status.REQ_RIGHT_DI_TELLTABLE;
}

uint8  get_REQ_LEFT_DI_TELLTABLE()
{
  return bcm_general_status.REQ_LEFT_DI_TELLTABLE;
}

uint8  get_HOOD_LID_OPEN()
{
  return bcm_general_status.HOOD_LID_OPEN;
}

uint8  get_TRUNK_LID_OPEN()
{
  return bcm_general_status.TRUNK_LID_OPEN;
}

uint8  get_REAR_RIGHT_DOOR_OPEN()
{
  return bcm_general_status.REAR_RIGHT_DOOR_OPEN;
}

uint8  get_REAR_LEFT_DOOR_OPEN()
{
  return bcm_general_status.REAR_LEFT_DOOR_OPEN;
}

uint8  get_FRONT_RIGHT_DOOR_OPEN()
{
  return bcm_general_status.FRONT_RIGHT_DOOR_OPEN;
}

uint8  get_FRONT_LEFT_DOOR_OPEN()
{
  return bcm_general_status.FRONT_LEFT_DOOR_OPEN;
}

uint8  get_DOOR_UNLOCK_REST()
{
  return bcm_general_status.DOOR_UNLOCK_REST;
}

uint8  get_DOOR_UNLOCK_DRIVER()
{
  return bcm_general_status.DOOR_UNLOCK_DRIVER;
}

uint8  get_PARK_LIGHT_RIGHT_INDICATION()
{
  return bcm_general_status.PARK_LIGHT_RIGHT_INDICATION;
}

uint8  get_PARK_LIGHT_LEFT_INDICATION()
{
  return bcm_general_status.PARK_LIGHT_LEFT_INDICATION;
}

uint8  get_CHK_THEFT_ALARM()
{
  return bcm_general_status.CHK_THEFT_ALARM;
}

uint8  get_BRAKE_BULB_FAILURE()
{
  return bcm_general_status.BRAKE_BULB_FAILURE;
}

uint8  get_PARK_BULB_FAILURE_RIGHT()
{
  return bcm_general_status.PARK_BULB_FAILURE_RIGHT;
}

uint8  get_PARK_BULB_FAILURE_LEFT()
{
  return bcm_general_status.PARK_BULB_FAILURE_LEFT;
}

uint8  get_LOW_BEAM_INDICATOR()
{
  return bcm_general_status.LOW_BEAM_INDICATOR;
}

uint8  get_HIGH_BEAM_INDICATOR()
{
  return bcm_general_status.HIGH_BEAM_INDICATOR;
}

uint8  get_TELLTALE_HAZARD_LIGHT()
{
  return bcm_general_status.TELLTALE_HAZARD_LIGHT;
}

uint8  get_TURN_BULB_FAILURE_RIGHT()
{
  return bcm_general_status.TURN_BULB_FAILURE_RIGHT;
}

uint8  get_TURN_BULB_FAILURE_LEFT()
{
  return bcm_general_status.TURN_BULB_FAILURE_LEFT;
}

uint8  get_PARK_RANGE_SWITCH()
{
  return bcm_general_status.PARK_RANGE_SWITCH;
}

uint8  get_BRAKE_LIGHT_ACTIVE()
{
  return bcm_general_status.BRAKE_LIGHT_ACTIVE;
}

uint8  get_CHECK_BRAKE_AUXILIARY_LIGHT()
{
  return bcm_general_status.CHECK_BRAKE_AUXILIARY_LIGHT;
}

uint8  get_DRL_FAILURE()
{
  return bcm_general_status.DRL_FAILURE;
}

uint8  get_POSITION_LIGHT_ON_WARNING()
{
  return bcm_general_status.POSITION_LIGHT_ON_WARNING;
}

uint8  get_ANTI_THELF_INDICATOR()
{
  return bcm_general_status.ANTI_THELF_INDICATOR;
}

uint8  get_TIME_MODE_HUM()
{
  return hum_gps.TIME_MODE_HUM;
}

uint8  get_MINUTES_HUM()
{
  return hum_gps.MINUTES_HUM;
}

uint8  get_DAY_HUM()
{
  return hum_gps.DAY_HUM;
}

uint8  get_WEEK_HUM()
{
  return hum_gps.WEEK_HUM;
}

uint8  get_YEAR_HUM()
{
  return hum_gps.YEAR_HUM;
}

uint8  get_MONTH_HUM()
{
  return hum_gps.MONTH_HUM;
}

uint8  get_SECOND_HUM()
{
  return hum_gps.SECOND_HUM;
}

uint8  get_HOUR_HUM()
{
  return hum_gps.HOUR_HUM;
}

uint8  get_VALID_OTEMP()
{
  return ac_control.VALID_OTEMP;
}

uint8  get_OUTSIDE_TEMP()
{
  return ac_control.OUTSIDE_TEMP;
}

uint8  get_LF_PRESSURE()
{
  return tpms_sys_status.LF_PRESSURE;
}

uint8  get_TIRE_POSITION()
{
  return tpms_sys_status.TIRE_POSITION;
}

uint8  get_RF_PRESSURE()
{
  return tpms_sys_status.RF_PRESSURE;
}

uint8  get_RR_PRESSURE()
{
  return tpms_sys_status.RR_PRESSURE;
}

uint8  get_LR_PRESSURE()
{
  return tpms_sys_status.LR_PRESSURE;
}

uint8  get_TIRE_TEMPERATURE()
{
  return tpms_sys_status.TIRE_TEMPERATURE;
}

uint8  get_RF_PRESSURE_WARNING()
{
  return tpms_sys_status.RF_PRESSURE_WARNING;
}

uint8  get_LF_PRESSURE_WARNING()
{
  return tpms_sys_status.LF_PRESSURE_WARNING;
}

uint8  get_SYSTEM_WARNING()
{
  return tpms_sys_status.SYSTEM_WARNING;
}

uint8  get_TEMPERATURE_WARNING()
{
  return tpms_sys_status.TEMPERATURE_WARNING;
}

uint8  get_LR_PRESSURE_WARNING()
{
  return tpms_sys_status.LR_PRESSURE_WARNING;
}

uint8  get_RR_PRESSURE_WARNING()
{
  return tpms_sys_status.RR_PRESSURE_WARNING;
}

uint8  get_SIGNAL_STATUS()
{
  return tpms_sys_status.SIGNAL_STATUS;
}

uint8  get_REMOTE_START_RESPONSE_PEPS()
{
  return peps_general_status.REMOTE_START_RESPONSE_PEPS;
}

uint8  get_REMOTE_START_STATUS()
{
  return peps_general_status.REMOTE_START_STATUS;
}

uint8  get_ESCL_TEXT_ROTATE_STEERING_WHEEL()
{
  return escl_general_status.ESCL_TEXT_ROTATE_STEERING_WHEEL;
}

uint8  get_ESCL_TEXT_GARAGE()
{
  return escl_general_status.ESCL_TEXT_GARAGE;
}

uint8  get_ESCL_TEXT_STEERING_NOT_UNLOCKED()
{
  return escl_general_status.ESCL_TEXT_STEERING_NOT_UNLOCKED;
}

uint8  get_ESCL_TEXTDEECT()
{
  return escl_general_status.ESCL_TEXTDEECT;
}

uint8  get_ESCL_LED_YELLOW()
{
  return escl_general_status.ESCL_LED_YELLOW;
}

uint8  get_ESCL_LED_RED()
{
  return escl_general_status.ESCL_LED_RED;
}

uint8  get_ESCL_UNLOCKED()
{
  return escl_general_status.ESCL_UNLOCKED;
}

uint8  get_ESCL_LOCKED()
{
  return escl_general_status.ESCL_LOCKED;
}

uint8  get_ESCL_SERVICE_RELEVANT_FAILURE()
{
  return escl_general_status.ESCL_SERVICE_RELEVANT_FAILURE;
}

uint8  get_MIU_MSG_REQ_N7()
{
  return peps_general_status_2.MIU_MSG_REQ_N7;
}

uint8  get_MIU_MSG_REQ_N6()
{
  return peps_general_status_2.MIU_MSG_REQ_N6;
}

uint8  get_MIU_MSG_REQ_N5()
{
  return peps_general_status_2.MIU_MSG_REQ_N5;
}

uint8  get_MIU_MSG_REQ_N4()
{
  return peps_general_status_2.MIU_MSG_REQ_N4;
}

uint8  get_MIU_MSG_REQ_N3()
{
  return peps_general_status_2.MIU_MSG_REQ_N3;
}

uint8  get_MIU_MSG_REQ_N2()
{
  return peps_general_status_2.MIU_MSG_REQ_N2;
}

uint8  get_MIU_MSG_REQ_N1()
{
  return peps_general_status_2.MIU_MSG_REQ_N1;
}

uint8  get_MIU_MSG_REQ_N0()
{
  return peps_general_status_2.MIU_MSG_REQ_N0;
}

uint8  get_MIU_MSG_REQ_N15()
{
  return peps_general_status_2.MIU_MSG_REQ_N15;
}

uint8  get_MIU_MSG_REQ_N14()
{
  return peps_general_status_2.MIU_MSG_REQ_N14;
}

uint8  get_MIU_MSG_REQ_N13()
{
  return peps_general_status_2.MIU_MSG_REQ_N13;
}

uint8  get_MIU_MSG_REQ_N12()
{
  return peps_general_status_2.MIU_MSG_REQ_N12;
}

uint8  get_MIU_MSG_REQ_N11()
{
  return peps_general_status_2.MIU_MSG_REQ_N11;
}

uint8  get_MIU_MSG_REQ_N10()
{
  return peps_general_status_2.MIU_MSG_REQ_N10;
}

uint8  get_MIU_MSG_REQ_N9()
{
  return peps_general_status_2.MIU_MSG_REQ_N9;
}

uint8  get_MIU_MSG_REQ_N8()
{
  return peps_general_status_2.MIU_MSG_REQ_N8;
}

uint8  get_MIU_MSG_REQ_N16()
{
  return peps_general_status_2.MIU_MSG_REQ_N16;
}

uint8  get_COOLANT_TEMPERATURE()
{
  return ems_engine_temp_and_barrometer.COOLANT_TEMPERATURE;
}

uint8  get_VALID_COOLANT()
{
  return ems_engine_temp_and_barrometer.VALID_COOLANT;
}

uint8  get_DATA_VALID()
{
  return icm_general_status.DATA_VALID;
}

uint8  get_AIRBAG_WARNINGLAMP_STATUS()
{
  return icm_general_status.AIRBAG_WARNINGLAMP_STATUS;
}

uint8  get_NIGHT_PANEL()
{
  return icm_general_status.NIGHT_PANEL;
}

uint8  get_DATA_VALID_RHEOSTAT()
{
  return icm_general_status.DATA_VALID_RHEOSTAT;
}

uint8  get_WASHER_FLUID_LEVEL_LOW()
{
  return icm_general_status.WASHER_FLUID_LEVEL_LOW;
}

uint8  get_ODOMETER_RESET_COUNTER_ICM()
{
  return icm_general_status.ODOMETER_RESET_COUNTER_ICM;
}

uint8  get_RHEOSTAT_LEVEL()
{
  return icm_general_status.RHEOSTAT_LEVEL;
}

uint32  get_DISPLAYED_TOTAL_DISTANCE()
{
  return icm_general_status.DISPLAYED_TOTAL_DISTANCE;
}

uint8  get_BATTERY_VOLTAGE_LEVEL()
{
  return icm_general_status.BATTERY_VOLTAGE_LEVEL;
}

uint8  get_ODOMETER_OFFSET_ICM()
{
  return icm_general_status.ODOMETER_OFFSET_ICM;
}

uint8  get_HAND_BRAKE_ICM()
{
  return icm_general_status_2.HAND_BRAKE_ICM;
}

uint8  get_REMOTE_START_RESPONSE_ICM()
{
  return icm_general_status_2.REMOTE_START_RESPONSE_ICM;
}

uint8  get_FUELTANK_REMAINING()
{
  return icm_general_status_2.FUELTANK_REMAINING;
}

uint8  get_AHL_FAULT_STATUS()
{
  return ahl_general_status.AHL_FAULT_STATUS;
}

uint8  get_POWER_MODE_BCM()
{
  return bcm_general_status_2.POWER_MODE_BCM;
}

uint32  get_EB_ODO()
{
  return bcm_general_status_2.EB_ODO;
}

uint8  get_ODOMETER_OFFSET_BCM()
{
  return bcm_general_status_2.ODOMETER_OFFSET_BCM;
}

uint8  get_EB_ODO_VALID()
{
  return bcm_general_status_2.EB_ODO_VALID;
}

uint8  get_POWER_MODE_VALIDITY_BCM()
{
  return bcm_general_status_2.POWER_MODE_VALIDITY_BCM;
}

uint8  get_ODOMETER_RESET_COUNTER_BCM()
{
  return bcm_general_status_2.ODOMETER_RESET_COUNTER_BCM;
}

uint8  get_FOLLOW_ME_HOME_SETTING()
{
  return icm_event_command_2.FOLLOW_ME_HOME_SETTING;
}

uint8  get_VSPEED_LOCKING()
{
  return icm_event_command_2.VSPEED_LOCKING;
}

uint8  get_CUTOFF_UNLOCK_4_DOORS()
{
  return icm_event_command_2.CUTOFF_UNLOCK_4_DOORS;
}

uint8  get_LOCK_SUCCESS_SOUND()
{
  return icm_event_command_2.LOCK_SUCCESS_SOUND;
}

uint8  get_DRL_OPEN()
{
  return icm_event_command_2.DRL_OPEN;
}

uint16  get_INSTANT_FUEL_CONSUM()
{
  return icm_general_status_3.INSTANT_FUEL_CONSUM;
}

uint16  get_AVERAGE_FUEL_CONSUM()
{
  return icm_general_status_3.AVERAGE_FUEL_CONSUM;
}

uint16  get_ENDURANCE_MILEAGE()
{
  return icm_general_status_3.ENDURANCE_MILEAGE;
}

uint16  get_REMAIN_MAINTAIN_MILEAGE()
{
  return icm_general_status_3.REMAIN_MAINTAIN_MILEAGE;
}

uint8  get_TRANSMISSION_OIL_TEMPERATURE()
{
  return tcu_engine_torque_request.TRANSMISSION_OIL_TEMPERATURE;
}

uint16  get_ACTUAL_ENGINE_SPEED_UNFILTERED()
{
  return ems_engine_speed_and_torque.ACTUAL_ENGINE_SPEED_UNFILTERED;
}

uint8  get_VALID_ESPEED()
{
  return ems_engine_speed_and_torque.VALID_ESPEED;
}

uint8  get_EMS_ACTUAL_GEAR()
{
  return ems_general_status.EMS_ACTUAL_GEAR;
}

uint8  get_BRAKE_STATUS_EMS()
{
  return ems_general_status.BRAKE_STATUS_EMS;
}

uint8  get_HAND_BRAKE_EMS()
{
  return ems_general_status.HAND_BRAKE_EMS;
}

uint8  get_REQ_SHIFT_DOWN_TELLTALE()
{
  return ems_general_status.REQ_SHIFT_DOWN_TELLTALE;
}

uint8  get_CRUISE_ACTIVE()
{
  return ems_general_status.CRUISE_ACTIVE;
}

uint8  get_ACTUAL_GEARBOX()
{
  return ems_general_status.ACTUAL_GEARBOX;
}

uint8  get_VALID_BRAKE_STATUS_EMS()
{
  return ems_general_status.VALID_BRAKE_STATUS_EMS;
}

uint8  get_EMS_AUTHRESULT()
{
  return ems_general_status.EMS_AUTHRESULT;
}

uint8  get_REQ_CRUISE_TELLTALE()
{
  return ems_general_status.REQ_CRUISE_TELLTALE;
}

uint8  get_REQ_SHIFT_UP_TELLTALE()
{
  return ems_general_status.REQ_SHIFT_UP_TELLTALE;
}

uint8  get_REQ_CHECK_ENGINE_TELLTALE()
{
  return ems_general_status.REQ_CHECK_ENGINE_TELLTALE;
}

uint8  get_ENGINE_RUNNING()
{
  return ems_general_status.ENGINE_RUNNING;
}

uint8  get_VALID_ACTUAL_GEAR_EMS()
{
  return ems_general_status.VALID_ACTUAL_GEAR_EMS;
}

uint8  get_SS_IDLE_STOP_STATUS()
{
  return ems_start_stop.SS_IDLE_STOP_STATUS;
}

uint8  get_SS_SYS_STS()
{
  return ems_start_stop.SS_SYS_STS;
}

uint8  get_AUTO_STOP_REQUEST()
{
  return ems_start_stop.AUTO_STOP_REQUEST;
}

uint8  get_ENG_SS_STS()
{
  return ems_start_stop.ENG_SS_STS;
}

uint8  get_SS_FAULT_LAMP()
{
  return ems_start_stop.SS_FAULT_LAMP;
}

uint8  get_SS_ENABLE_LAMP()
{
  return ems_start_stop.SS_ENABLE_LAMP;
}

uint8  get_REQ_TCS_ESP_FAILURE_TELLTALE()
{
  return general_status_tcs_esp.REQ_TCS_ESP_FAILURE_TELLTALE;
}

uint8  get_REQ_TCS_ESP_ACTIVE_TELLTALE()
{
  return general_status_tcs_esp.REQ_TCS_ESP_ACTIVE_TELLTALE;
}

uint8  get_REQ_TCS_ESP_OFF_TELLTALE()
{
  return general_status_tcs_esp.REQ_TCS_ESP_OFF_TELLTALE;
}

uint8  get_REQ_EBD_TELLTALE()
{
  return general_status_tcs_esp.REQ_EBD_TELLTALE;
}

uint8  get_REQ_ABS_TELLTALE()
{
  return general_status_tcs_esp.REQ_ABS_TELLTALE;
}

uint16  get_ODOMETER_ROLLING()
{
  return general_status_tcs_esp.ODOMETER_ROLLING;
}

uint8  get_AUTH_RESULT()
{
  return ecs_immo_rand_number.AUTH_RESULT;
}

uint8  get_IMMO_SID()
{
  return ecs_immo_rand_number.IMMO_SID;
}

uint8  get_MIRROR_FADE_IN_OUT()
{
  return icm_event_command.MIRROR_FADE_IN_OUT;
}

uint8  get_MEMO_OUTSIDE_RMIRROR_GND_PSTN()
{
  return icm_event_command.MEMO_OUTSIDE_RMIRROR_GND_PSTN;
}

uint8  get_OUTSIDE_RMIRROR_SEE_GROUND()
{
  return icm_event_command.OUTSIDE_RMIRROR_SEE_GROUND;
}

uint8  get_PAS_SYSTEM_SWITCH()
{
  return icm_event_command.PAS_SYSTEM_SWITCH;
}

uint8  get_SVA_SYSTEM_SWITCH()
{
  return icm_event_command.SVA_SYSTEM_SWITCH;
}

uint8  get_MINUTES_MIU()
{
  return icm_event_command.MINUTES_MIU;
}

uint8  get_TIME_MODE_MIU()
{
  return icm_event_command.TIME_MODE_MIU;
}

uint8  get_WEEK_MIU()
{
  return icm_event_command.WEEK_MIU;
}

uint8  get_HOUR_MIU()
{
  return icm_event_command.HOUR_MIU;
}

uint8  get_MONTH_MIU()
{
  return icm_event_command.MONTH_MIU;
}

uint8  get_DAY_MIU()
{
  return icm_event_command.DAY_MIU;
}

uint8  get_YEAR_MIU()
{
  return icm_event_command.YEAR_MIU;
}

uint8  get_STS_EPS_ACTIVE_STS()
{
  return eps_status.STS_EPS_ACTIVE_STS;
}

uint8  get_STS_EPS_FAULT_STS()
{
  return eps_status.STS_EPS_FAULT_STS;
}

uint8  get_CHK_BELTS()
{
  return sdm_general_status.CHK_BELTS;
}

uint8  get_AIRBAG_WARNINGLAMP()
{
  return sdm_general_status.AIRBAG_WARNINGLAMP;
}

uint8  get_PASSENGER_AIRBAG_OFF()
{
  return sdm_general_status.PASSENGER_AIRBAG_OFF;
}

uint8  get_SEATBELT_PA_ATT()
{
  return sdm_general_status.SEATBELT_PA_ATT;
}

uint8  get_SEATBELT_DR_ATT()
{
  return sdm_general_status.SEATBELT_DR_ATT;
}

uint16  get_ENGINE_FUEAL_INJECTED()
{
  return ems_engine_fuel_and_turbo.ENGINE_FUEAL_INJECTED;
}

uint8  get_VALID_TURBO()
{
  return ems_engine_fuel_and_turbo.VALID_TURBO;
}

uint8  get_TURBO_PRESENTATION()
{
  return ems_engine_fuel_and_turbo.TURBO_PRESENTATION;
}

uint8  get_VALID_FUEL_INJ()
{
  return ems_engine_fuel_and_turbo.VALID_FUEL_INJ;
}

uint8  get_VALID_VEHICLE_SPEED()
{
  return ems_engine_idle_and_vspeed.VALID_VEHICLE_SPEED;
}

uint16  get_VEHICLE_SPEED()
{
  return ems_engine_idle_and_vspeed.VEHICLE_SPEED;
}

uint8  get_TCU_TARGET_GEAR()
{
  return tcu_general_status.TCU_TARGET_GEAR;
}

uint8  get_TCU_SELECTED_GEAR()
{
  return tcu_general_status.TCU_SELECTED_GEAR;
}

uint8  get_REQ_MIL_ACTIVE()
{
  return tcu_general_status.REQ_MIL_ACTIVE;
}

uint8  get_REQ_WINTER_TELLTALE()
{
  return tcu_general_status.REQ_WINTER_TELLTALE;
}

uint8  get_VALID_SELECTED_GEAR()
{
  return tcu_general_status.VALID_SELECTED_GEAR;
}

uint8  get_REQ_SPORTS_TELLTALE()
{
  return tcu_general_status.REQ_SPORTS_TELLTALE;
}

uint8  get_REQ_CHK_GEARBOX_TELLTALE()
{
  return tcu_general_status.REQ_CHK_GEARBOX_TELLTALE;
}

uint8  get_CHK_HIGH_OIL_TEMP()
{
  return tcu_general_status.CHK_HIGH_OIL_TEMP;
}

uint8  get_TRANS_SHIFT_PATTERN_STATUS()
{
  return tcu_general_status.TRANS_SHIFT_PATTERN_STATUS;
}

uint8  get_VALID_ACTUAL_GEAR_TCU()
{
  return tcu_general_status.VALID_ACTUAL_GEAR_TCU;
}

uint8  get_GEAR_INDICATION()
{
  return tcu_general_status.GEAR_INDICATION;
}

