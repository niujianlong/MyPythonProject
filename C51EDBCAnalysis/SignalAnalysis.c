void ecs_immo_rand_numberSigAlysis(void)
{
  ecs_immo_rand_number.AUTH_RESULT = getuint8SigValue(ecs_immo_rand_number.data,47,8);
  ecs_immo_rand_number.IMMO_SID = getuint8SigValue(ecs_immo_rand_number.data,7,8);
}
void tcu_engine_torque_requestSigAlysis(void)
{
  tcu_engine_torque_request.TRANSMISSION_OIL_TEMPERATURE = getuint8SigValue(tcu_engine_torque_request.data,47,8);
}
void ems_engine_speed_and_torqueSigAlysis(void)
{
  ems_engine_speed_and_torque.ACTUAL_ENGINE_SPEED_UNFILTERED = getuint16SigValue(ems_engine_speed_and_torque.data,15,16);
  ems_engine_speed_and_torque.VALID_ESPEED = getuint8SigValue(ems_engine_speed_and_torque.data,4,1);
}
void ems_general_statusSigAlysis(void)
{
  ems_general_status.EMS_ACTUAL_GEAR = getuint8SigValue(ems_general_status.data,15,8);
  ems_general_status.BRAKE_STATUS_EMS = getuint8SigValue(ems_general_status.data,17,1);
  ems_general_status.HAND_BRAKE_EMS = getuint8SigValue(ems_general_status.data,2,1);
  ems_general_status.REQ_SHIFT_DOWN_TELLTALE = getuint8SigValue(ems_general_status.data,21,1);
  ems_general_status.CRUISE_ACTIVE = getuint8SigValue(ems_general_status.data,22,1);
  ems_general_status.ACTUAL_GEARBOX = getuint8SigValue(ems_general_status.data,29,1);
  ems_general_status.VALID_BRAKE_STATUS_EMS = getuint8SigValue(ems_general_status.data,3,1);
  ems_general_status.EMS_AUTHRESULT = getuint8SigValue(ems_general_status.data,36,2);
  ems_general_status.REQ_CRUISE_TELLTALE = getuint8SigValue(ems_general_status.data,37,1);
  ems_general_status.REQ_SHIFT_UP_TELLTALE = getuint8SigValue(ems_general_status.data,38,1);
  ems_general_status.REQ_CHECK_ENGINE_TELLTALE = getuint8SigValue(ems_general_status.data,39,1);
  ems_general_status.ENGINE_RUNNING = getuint8SigValue(ems_general_status.data,47,2);
  ems_general_status.VALID_ACTUAL_GEAR_EMS = getuint8SigValue(ems_general_status.data,5,2);
  ems_general_status.GEAR_SWITCH_INDICATOR = getuint8SigValue(ems_general_status.data,59,4);
}
void ems_start_stopSigAlysis(void)
{
  ems_start_stop.SS_IDLE_STOP_STATUS = getuint8SigValue(ems_start_stop.data,0,1);
  ems_start_stop.SS_SYS_STS = getuint8SigValue(ems_start_stop.data,10,2);
  ems_start_stop.AUTO_STOP_REQUEST = getuint8SigValue(ems_start_stop.data,11,1);
  ems_start_stop.ENG_SS_STS = getuint8SigValue(ems_start_stop.data,15,4);
  ems_start_stop.SS_FAULT_LAMP = getuint8SigValue(ems_start_stop.data,5,1);
  ems_start_stop.SS_ENABLE_LAMP = getuint8SigValue(ems_start_stop.data,6,1);
}
void general_status_tcs_espSigAlysis(void)
{
  general_status_tcs_esp.REQ_TCS_ESP_FAILURE_TELLTALE = getuint8SigValue(general_status_tcs_esp.data,14,1);
  general_status_tcs_esp.REQ_TCS_ESP_ACTIVE_TELLTALE = getuint8SigValue(general_status_tcs_esp.data,20,1);
  general_status_tcs_esp.REQ_TCS_ESP_OFF_TELLTALE = getuint8SigValue(general_status_tcs_esp.data,21,1);
  general_status_tcs_esp.REQ_EBD_TELLTALE = getuint8SigValue(general_status_tcs_esp.data,22,1);
  general_status_tcs_esp.REQ_ABS_TELLTALE = getuint8SigValue(general_status_tcs_esp.data,23,1);
  general_status_tcs_esp.ODOMETER_ROLLING = getuint16SigValue(general_status_tcs_esp.data,31,16);
}
void icm_event_commandSigAlysis(void)
{
  icm_event_command.MIRROR_FADE_IN_OUT = getuint8SigValue(icm_event_command.data,1,2);
  icm_event_command.MEMO_OUTSIDE_RMIRROR_GND_PSTN = getuint8SigValue(icm_event_command.data,3,2);
  icm_event_command.OUTSIDE_RMIRROR_SEE_GROUND = getuint8SigValue(icm_event_command.data,5,2);
  icm_event_command.PAS_SYSTEM_SWITCH = getuint8SigValue(icm_event_command.data,9,2);
  icm_event_command.SVA_SYSTEM_SWITCH = getuint8SigValue(icm_event_command.data,11,2);
  icm_event_command.MINUTES_MIU = getuint8SigValue(icm_event_command.data,21,6);
  icm_event_command.TIME_MODE_MIU = getuint8SigValue(icm_event_command.data,23,2);
  icm_event_command.WEEK_MIU = getuint8SigValue(icm_event_command.data,26,3);
  icm_event_command.HOUR_MIU = getuint8SigValue(icm_event_command.data,31,5);
  icm_event_command.MONTH_MIU = getuint8SigValue(icm_event_command.data,34,4);
  icm_event_command.DAY_MIU = getuint8SigValue(icm_event_command.data,39,5);
  icm_event_command.YEAR_MIU = getuint8SigValue(icm_event_command.data,46,5);
}
void eps_statusSigAlysis(void)
{
  eps_status.STS_EPS_ACTIVE_STS = getuint8SigValue(eps_status.data,3,1);
  eps_status.STS_EPS_FAULT_STS = getuint8SigValue(eps_status.data,7,4);
}
void sdm_general_statusSigAlysis(void)
{
  sdm_general_status.CHK_BELTS = getuint8SigValue(sdm_general_status.data,0,1);
  sdm_general_status.AIRBAG_WARNINGLAMP = getuint8SigValue(sdm_general_status.data,1,1);
  sdm_general_status.PASSENGER_AIRBAG_OFF = getuint8SigValue(sdm_general_status.data,11,1);
  sdm_general_status.SEATBELT_PA_ATT = getuint8SigValue(sdm_general_status.data,6,1);
  sdm_general_status.SEATBELT_DR_ATT = getuint8SigValue(sdm_general_status.data,7,1);
}
void ems_engine_fuel_and_turboSigAlysis(void)
{
  ems_engine_fuel_and_turbo.ENGINE_FUEAL_INJECTED = getuint16SigValue(ems_engine_fuel_and_turbo.data,15,16);
  ems_engine_fuel_and_turbo.VALID_TURBO = getuint8SigValue(ems_engine_fuel_and_turbo.data,3,2);
  ems_engine_fuel_and_turbo.TURBO_PRESENTATION = getuint8SigValue(ems_engine_fuel_and_turbo.data,31,8);
  ems_engine_fuel_and_turbo.VALID_FUEL_INJ = getuint8SigValue(ems_engine_fuel_and_turbo.data,5,2);
}
void ems_engine_idle_and_vspeedSigAlysis(void)
{
  ems_engine_idle_and_vspeed.VALID_VEHICLE_SPEED = getuint8SigValue(ems_engine_idle_and_vspeed.data,3,2);
  ems_engine_idle_and_vspeed.VEHICLE_SPEED = getuint16SigValue(ems_engine_idle_and_vspeed.data,31,16);
}
void tcu_general_statusSigAlysis(void)
{
  tcu_general_status.TCU_TARGET_GEAR = getuint8SigValue(tcu_general_status.data,15,8);
  tcu_general_status.TCU_SELECTED_GEAR = getuint8SigValue(tcu_general_status.data,23,8);
  tcu_general_status.REQ_MIL_ACTIVE = getuint8SigValue(tcu_general_status.data,24,1);
  tcu_general_status.REQ_WINTER_TELLTALE = getuint8SigValue(tcu_general_status.data,29,1);
  tcu_general_status.VALID_SELECTED_GEAR = getuint8SigValue(tcu_general_status.data,3,2);
  tcu_general_status.REQ_SPORTS_TELLTALE = getuint8SigValue(tcu_general_status.data,30,1);
  tcu_general_status.REQ_CHK_GEARBOX_TELLTALE = getuint8SigValue(tcu_general_status.data,31,1);
  tcu_general_status.CHK_HIGH_OIL_TEMP = getuint8SigValue(tcu_general_status.data,39,1);
  tcu_general_status.TRANS_SHIFT_PATTERN_STATUS = getuint8SigValue(tcu_general_status.data,47,8);
  tcu_general_status.VALID_ACTUAL_GEAR_TCU = getuint8SigValue(tcu_general_status.data,5,2);
  tcu_general_status.GEAR_INDICATION = getuint8SigValue(tcu_general_status.data,55,8);
}
void bcm_general_statusSigAlysis(void)
{
  bcm_general_status.CHECK_FRONT_FOG_LIGHT = getuint8SigValue(bcm_general_status.data,17,1);
  bcm_general_status.CHECK_REAR_FOG_LIGHT = getuint8SigValue(bcm_general_status.data,18,1);
  bcm_general_status.TELLTALE_FRONT_FOG_LIGHT = getuint8SigValue(bcm_general_status.data,19,1);
  bcm_general_status.TELLTALE_REAR_FOG_LIGHT = getuint8SigValue(bcm_general_status.data,20,1);
  bcm_general_status.REQ_RIGHT_DI_TELLTABLE = getuint8SigValue(bcm_general_status.data,21,1);
  bcm_general_status.REQ_LEFT_DI_TELLTABLE = getuint8SigValue(bcm_general_status.data,22,1);
  bcm_general_status.HOOD_LID_OPEN = getuint8SigValue(bcm_general_status.data,24,1);
  bcm_general_status.TRUNK_LID_OPEN = getuint8SigValue(bcm_general_status.data,25,1);
  bcm_general_status.REAR_RIGHT_DOOR_OPEN = getuint8SigValue(bcm_general_status.data,26,1);
  bcm_general_status.REAR_LEFT_DOOR_OPEN = getuint8SigValue(bcm_general_status.data,27,1);
  bcm_general_status.FRONT_RIGHT_DOOR_OPEN = getuint8SigValue(bcm_general_status.data,28,1);
  bcm_general_status.FRONT_LEFT_DOOR_OPEN = getuint8SigValue(bcm_general_status.data,29,1);
  bcm_general_status.DOOR_UNLOCK_REST = getuint8SigValue(bcm_general_status.data,30,1);
  bcm_general_status.DOOR_UNLOCK_DRIVER = getuint8SigValue(bcm_general_status.data,31,1);
  bcm_general_status.PARK_LIGHT_RIGHT_INDICATION = getuint8SigValue(bcm_general_status.data,32,1);
  bcm_general_status.PARK_LIGHT_LEFT_INDICATION = getuint8SigValue(bcm_general_status.data,33,1);
  bcm_general_status.CHK_THEFT_ALARM = getuint8SigValue(bcm_general_status.data,35,1);
  bcm_general_status.BRAKE_BULB_FAILURE = getuint8SigValue(bcm_general_status.data,37,1);
  bcm_general_status.PARK_BULB_FAILURE_RIGHT = getuint8SigValue(bcm_general_status.data,38,1);
  bcm_general_status.PARK_BULB_FAILURE_LEFT = getuint8SigValue(bcm_general_status.data,39,1);
  bcm_general_status.LOW_BEAM_INDICATOR = getuint8SigValue(bcm_general_status.data,40,1);
  bcm_general_status.HIGH_BEAM_INDICATOR = getuint8SigValue(bcm_general_status.data,41,1);
  bcm_general_status.TELLTALE_HAZARD_LIGHT = getuint8SigValue(bcm_general_status.data,42,1);
  bcm_general_status.TURN_BULB_FAILURE_RIGHT = getuint8SigValue(bcm_general_status.data,43,1);
  bcm_general_status.TURN_BULB_FAILURE_LEFT = getuint8SigValue(bcm_general_status.data,44,1);
  bcm_general_status.PARK_RANGE_SWITCH = getuint8SigValue(bcm_general_status.data,46,1);
  bcm_general_status.BRAKE_LIGHT_ACTIVE = getuint8SigValue(bcm_general_status.data,47,1);
  bcm_general_status.CHECK_BRAKE_AUXILIARY_LIGHT = getuint8SigValue(bcm_general_status.data,48,1);
  bcm_general_status.DRL_FAILURE = getuint8SigValue(bcm_general_status.data,49,1);
  bcm_general_status.POSITION_LIGHT_ON_WARNING = getuint8SigValue(bcm_general_status.data,50,1);
  bcm_general_status.ANTI_THELF_INDICATOR = getuint8SigValue(bcm_general_status.data,52,2);
}
void hum_timeSigAlysis(void)
{
  hum_time.TIME_MODE_HUM = getuint8SigValue(hum_time.data,1,2);
  hum_time.MINUTES_HUM = getuint8SigValue(hum_time.data,15,6);
  hum_time.DAY_HUM = getuint8SigValue(hum_time.data,17,5);
  hum_time.WEEK_HUM = getuint8SigValue(hum_time.data,20,3);
  hum_time.YEAR_HUM = getuint8SigValue(hum_time.data,24,5);
  hum_time.MONTH_HUM = getuint8SigValue(hum_time.data,28,4);
  hum_time.SECOND_HUM = getuint8SigValue(hum_time.data,7,6);
  hum_time.HOUR_HUM = getuint8SigValue(hum_time.data,9,5);
}
void ac_controlSigAlysis(void)
{
  ac_control.VALID_OTEMP = getuint8SigValue(ac_control.data,1,2);
  ac_control.OUTSIDE_TEMP = getuint8SigValue(ac_control.data,23,8);
}
void tpms_sys_statusSigAlysis(void)
{
  tpms_sys_status.LF_PRESSURE = getuint8SigValue(tpms_sys_status.data,15,8);
  tpms_sys_status.TIRE_POSITION = getuint8SigValue(tpms_sys_status.data,2,3);
  tpms_sys_status.RF_PRESSURE = getuint8SigValue(tpms_sys_status.data,23,8);
  tpms_sys_status.RR_PRESSURE = getuint8SigValue(tpms_sys_status.data,31,8);
  tpms_sys_status.LR_PRESSURE = getuint8SigValue(tpms_sys_status.data,39,8);
  tpms_sys_status.TIRE_TEMPERATURE = getuint8SigValue(tpms_sys_status.data,47,8);
  tpms_sys_status.RF_PRESSURE_WARNING = getuint8SigValue(tpms_sys_status.data,52,3);
  tpms_sys_status.LF_PRESSURE_WARNING = getuint8SigValue(tpms_sys_status.data,55,3);
  tpms_sys_status.SYSTEM_WARNING = getuint8SigValue(tpms_sys_status.data,56,1);
  tpms_sys_status.TEMPERATURE_WARNING = getuint8SigValue(tpms_sys_status.data,57,1);
  tpms_sys_status.LR_PRESSURE_WARNING = getuint8SigValue(tpms_sys_status.data,60,3);
  tpms_sys_status.RR_PRESSURE_WARNING = getuint8SigValue(tpms_sys_status.data,63,3);
  tpms_sys_status.SIGNAL_STATUS = getuint8SigValue(tpms_sys_status.data,7,1);
}
void peps_general_statusSigAlysis(void)
{
  peps_general_status.REMOTE_START_RESPONSE_PEPS = getuint8SigValue(peps_general_status.data,0,1);
  peps_general_status.REMOTE_START_STATUS = getuint8SigValue(peps_general_status.data,19,2);
}
void escl_general_statusSigAlysis(void)
{
  escl_general_status.ESCL_TEXT_ROTATE_STEERING_WHEEL = getuint8SigValue(escl_general_status.data,0,1);
  escl_general_status.ESCL_TEXT_GARAGE = getuint8SigValue(escl_general_status.data,1,1);
  escl_general_status.ESCL_TEXT_STEERING_NOT_UNLOCKED = getuint8SigValue(escl_general_status.data,15,1);
  escl_general_status.ESCL_TEXTDEECT = getuint8SigValue(escl_general_status.data,2,1);
  escl_general_status.ESCL_LED_YELLOW = getuint8SigValue(escl_general_status.data,3,1);
  escl_general_status.ESCL_LED_RED = getuint8SigValue(escl_general_status.data,4,1);
  escl_general_status.ESCL_UNLOCKED = getuint8SigValue(escl_general_status.data,5,1);
  escl_general_status.ESCL_LOCKED = getuint8SigValue(escl_general_status.data,6,1);
  escl_general_status.ESCL_SERVICE_RELEVANT_FAILURE = getuint8SigValue(escl_general_status.data,7,1);
}
void peps_general_status_2SigAlysis(void)
{
  peps_general_status_2.MIU_MSG_REQ_N7 = getuint8SigValue(peps_general_status_2.data,32,1);
  peps_general_status_2.MIU_MSG_REQ_N6 = getuint8SigValue(peps_general_status_2.data,33,1);
  peps_general_status_2.MIU_MSG_REQ_N5 = getuint8SigValue(peps_general_status_2.data,34,1);
  peps_general_status_2.MIU_MSG_REQ_N4 = getuint8SigValue(peps_general_status_2.data,35,1);
  peps_general_status_2.MIU_MSG_REQ_N3 = getuint8SigValue(peps_general_status_2.data,36,1);
  peps_general_status_2.MIU_MSG_REQ_N2 = getuint8SigValue(peps_general_status_2.data,37,1);
  peps_general_status_2.MIU_MSG_REQ_N1 = getuint8SigValue(peps_general_status_2.data,38,1);
  peps_general_status_2.MIU_MSG_REQ_N0 = getuint8SigValue(peps_general_status_2.data,39,1);
  peps_general_status_2.MIU_MSG_REQ_N15 = getuint8SigValue(peps_general_status_2.data,40,1);
  peps_general_status_2.MIU_MSG_REQ_N14 = getuint8SigValue(peps_general_status_2.data,41,1);
  peps_general_status_2.MIU_MSG_REQ_N13 = getuint8SigValue(peps_general_status_2.data,42,1);
  peps_general_status_2.MIU_MSG_REQ_N12 = getuint8SigValue(peps_general_status_2.data,43,1);
  peps_general_status_2.MIU_MSG_REQ_N11 = getuint8SigValue(peps_general_status_2.data,44,1);
  peps_general_status_2.MIU_MSG_REQ_N10 = getuint8SigValue(peps_general_status_2.data,45,1);
  peps_general_status_2.MIU_MSG_REQ_N9 = getuint8SigValue(peps_general_status_2.data,46,1);
  peps_general_status_2.MIU_MSG_REQ_N8 = getuint8SigValue(peps_general_status_2.data,47,1);
  peps_general_status_2.MIU_MSG_REQ_N16 = getuint8SigValue(peps_general_status_2.data,55,1);
}
void avm_general_statusSigAlysis(void)
{
  avm_general_status.AVM_HMI_INDEX = getuint8SigValue(avm_general_status.data,11,4);
  avm_general_status.AVM_DISPLAY_REQ = getuint8SigValue(avm_general_status.data,13,2);
  avm_general_status.FRONT_CAMERA_INPUT_FAILED = getuint8SigValue(avm_general_status.data,16,1);
  avm_general_status.REAR_CAMERA_INPUT_FAILED = getuint8SigValue(avm_general_status.data,17,1);
  avm_general_status.LEFT_CAMERA_INPUT_FAILED = getuint8SigValue(avm_general_status.data,18,1);
  avm_general_status.RIGHT_CAMERA_INPUT_FAILED = getuint8SigValue(avm_general_status.data,19,1);
  avm_general_status.VIDEO_OUTPUT_FAILED = getuint8SigValue(avm_general_status.data,20,1);
  avm_general_status.CONTROLLER_OP_FAILED = getuint8SigValue(avm_general_status.data,21,1);
  avm_general_status.CAN_COM_FAILED = getuint8SigValue(avm_general_status.data,22,1);
  avm_general_status.OVERLAY_OP_FAILED = getuint8SigValue(avm_general_status.data,23,1);
  avm_general_status.LDW_OP_STATUS = getuint8SigValue(avm_general_status.data,27,2);
  avm_general_status.BSD_OP_STATUS = getuint8SigValue(avm_general_status.data,29,2);
  avm_general_status.AVM_STATUS = getuint8SigValue(avm_general_status.data,3,4);
  avm_general_status.LDW_LANE_AVALIABILITY = getuint8SigValue(avm_general_status.data,31,2);
  avm_general_status.LDW_WARNING_STATUS = getuint8SigValue(avm_general_status.data,35,4);
  avm_general_status.BSD_LEFT_WARNING_STATUS = getuint8SigValue(avm_general_status.data,37,2);
  avm_general_status.BSD_RIGHT_WARNING_STATUS = getuint8SigValue(avm_general_status.data,39,2);
  avm_general_status.MOD_FRONT_WARNING_STATUS = getuint8SigValue(avm_general_status.data,40,1);
  avm_general_status.MOD_REAR_WARNING_STATUS = getuint8SigValue(avm_general_status.data,41,1);
  avm_general_status.MOD_LEFT_WARNING_STATUS = getuint8SigValue(avm_general_status.data,42,1);
  avm_general_status.MOD_RIGHT_WARNING_STATUS = getuint8SigValue(avm_general_status.data,43,1);
  avm_general_status.BAT_VOLT_OUT_OF_RANGE = getuint8SigValue(avm_general_status.data,44,1);
  avm_general_status.EOL_NOT_COMPLETED = getuint8SigValue(avm_general_status.data,45,1);
  avm_general_status.GUID_VOICE_REQ = getuint8SigValue(avm_general_status.data,7,4);
}
void ems_engine_temp_and_barrometerSigAlysis(void)
{
  ems_engine_temp_and_barrometer.COOLANT_TEMPERATURE = getuint8SigValue(ems_engine_temp_and_barrometer.data,15,8);
  ems_engine_temp_and_barrometer.VALID_COOLANT = getuint8SigValue(ems_engine_temp_and_barrometer.data,5,2);
}
void ahl_general_statusSigAlysis(void)
{
  ahl_general_status.AHL_FAULT_STATUS = getuint8SigValue(ahl_general_status.data,7,1);
}
void bcm_general_status_2SigAlysis(void)
{
  bcm_general_status_2.POWER_MODE_BCM = getuint8SigValue(bcm_general_status_2.data,1,2);
  bcm_general_status_2.EB_ODO = getuint32SigValue(bcm_general_status_2.data,15,32);
  bcm_general_status_2.ODOMETER_OFFSET_BCM = getuint8SigValue(bcm_general_status_2.data,47,8);
  bcm_general_status_2.EB_ODO_VALID = getuint8SigValue(bcm_general_status_2.data,5,1);
  bcm_general_status_2.POWER_MODE_VALIDITY_BCM = getuint8SigValue(bcm_general_status_2.data,60,2);
  bcm_general_status_2.ODOMETER_RESET_COUNTER_BCM = getuint8SigValue(bcm_general_status_2.data,7,2);
}
void hum_event_command_1SigAlysis(void)
{
  hum_event_command_1.SYS_LANGUAGE = getuint8SigValue(hum_event_command_1.data,23,3);
}
