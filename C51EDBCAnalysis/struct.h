
/*frame 0x50 struct define*/
typedef struct
{
   uint8  Ecs_immo_rand_numberUpdatedFlag;
   uint8  Ecs_immo_rand_numberNeverReceFlag;
   uint8  Ecs_immo_rand_numberMissingFlag;
   uint8  data[8];

   uint8  AUTH_RESULT;
   uint8  IMMO_SID;
}ecs_immo_rand_number_struct;

EXTERN   ecs_immo_rand_number_struct    ecs_immo_rand_number;
#define  GET_AUTH_RESULT()    (ecs_immo_rand_number.AUTH_RESULT)
#define  GET_IMMO_SID()    (ecs_immo_rand_number.IMMO_SID)

/*frame 0x110 struct define*/
typedef struct
{
   uint8  Tcu_engine_torque_requestUpdatedFlag;
   uint8  Tcu_engine_torque_requestNeverReceFlag;
   uint8  Tcu_engine_torque_requestMissingFlag;
   uint8  data[8];

   uint8  TRANSMISSION_OIL_TEMPERATURE;
}tcu_engine_torque_request_struct;

EXTERN   tcu_engine_torque_request_struct    tcu_engine_torque_request;
#define  GET_TCU_ENGINE_TORQUE_REQUEST_MISSING_FLAG()    (tcu_engine_torque_request.Tcu_engine_torque_requestMissingFlag)
#define  GET_TCU_ENGINE_TORQUE_REQUEST_NEVER_RECE_FLAG() (tcu_engine_torque_request.Tcu_engine_torque_requestNeverReceFlag)
#define  GET_TRANSMISSION_OIL_TEMPERATURE()    (tcu_engine_torque_request.TRANSMISSION_OIL_TEMPERATURE)

/*frame 0x1a0 struct define*/
typedef struct
{
   uint8  Ems_engine_speed_and_torqueUpdatedFlag;
   uint8  Ems_engine_speed_and_torqueNeverReceFlag;
   uint8  Ems_engine_speed_and_torqueMissingFlag;
   uint8  data[8];

   uint16  ACTUAL_ENGINE_SPEED_UNFILTERED;
   uint8  VALID_ESPEED;
}ems_engine_speed_and_torque_struct;

EXTERN   ems_engine_speed_and_torque_struct    ems_engine_speed_and_torque;
#define  GET_EMS_ENGINE_SPEED_AND_TORQUE_MISSING_FLAG()    (ems_engine_speed_and_torque.Ems_engine_speed_and_torqueMissingFlag)
#define  GET_EMS_ENGINE_SPEED_AND_TORQUE_NEVER_RECE_FLAG() (ems_engine_speed_and_torque.Ems_engine_speed_and_torqueNeverReceFlag)
#define  GET_ACTUAL_ENGINE_SPEED_UNFILTERED()    (ems_engine_speed_and_torque.ACTUAL_ENGINE_SPEED_UNFILTERED)
#define  GET_VALID_ESPEED()    (ems_engine_speed_and_torque.VALID_ESPEED)

/*frame 0x280 struct define*/
typedef struct
{
   uint8  Ems_general_statusUpdatedFlag;
   uint8  Ems_general_statusNeverReceFlag;
   uint8  Ems_general_statusMissingFlag;
   uint8  data[8];

   uint8  EMS_ACTUAL_GEAR;
   uint8  BRAKE_STATUS_EMS;
   uint8  HAND_BRAKE_EMS;
   uint8  REQ_SHIFT_DOWN_TELLTALE;
   uint8  CRUISE_ACTIVE;
   uint8  ACTUAL_GEARBOX;
   uint8  VALID_BRAKE_STATUS_EMS;
   uint8  EMS_AUTHRESULT;
   uint8  REQ_CRUISE_TELLTALE;
   uint8  REQ_SHIFT_UP_TELLTALE;
   uint8  REQ_CHECK_ENGINE_TELLTALE;
   uint8  ENGINE_RUNNING;
   uint8  VALID_ACTUAL_GEAR_EMS;
   uint8  GEAR_SWITCH_INDICATOR;
}ems_general_status_struct;

EXTERN   ems_general_status_struct    ems_general_status;
#define  GET_EMS_GENERAL_STATUS_MISSING_FLAG()    (ems_general_status.Ems_general_statusMissingFlag)
#define  GET_EMS_GENERAL_STATUS_NEVER_RECE_FLAG() (ems_general_status.Ems_general_statusNeverReceFlag)
#define  GET_EMS_ACTUAL_GEAR()    (ems_general_status.EMS_ACTUAL_GEAR)
#define  GET_BRAKE_STATUS_EMS()    (ems_general_status.BRAKE_STATUS_EMS)
#define  GET_HAND_BRAKE_EMS()    (ems_general_status.HAND_BRAKE_EMS)
#define  GET_REQ_SHIFT_DOWN_TELLTALE()    (ems_general_status.REQ_SHIFT_DOWN_TELLTALE)
#define  GET_CRUISE_ACTIVE()    (ems_general_status.CRUISE_ACTIVE)
#define  GET_ACTUAL_GEARBOX()    (ems_general_status.ACTUAL_GEARBOX)
#define  GET_VALID_BRAKE_STATUS_EMS()    (ems_general_status.VALID_BRAKE_STATUS_EMS)
#define  GET_EMS_AUTHRESULT()    (ems_general_status.EMS_AUTHRESULT)
#define  GET_REQ_CRUISE_TELLTALE()    (ems_general_status.REQ_CRUISE_TELLTALE)
#define  GET_REQ_SHIFT_UP_TELLTALE()    (ems_general_status.REQ_SHIFT_UP_TELLTALE)
#define  GET_REQ_CHECK_ENGINE_TELLTALE()    (ems_general_status.REQ_CHECK_ENGINE_TELLTALE)
#define  GET_ENGINE_RUNNING()    (ems_general_status.ENGINE_RUNNING)
#define  GET_VALID_ACTUAL_GEAR_EMS()    (ems_general_status.VALID_ACTUAL_GEAR_EMS)
#define  GET_GEAR_SWITCH_INDICATOR()    (ems_general_status.GEAR_SWITCH_INDICATOR)

/*frame 0x281 struct define*/
typedef struct
{
   uint8  Ems_start_stopUpdatedFlag;
   uint8  Ems_start_stopNeverReceFlag;
   uint8  Ems_start_stopMissingFlag;
   uint8  data[8];

   uint8  SS_IDLE_STOP_STATUS;
   uint8  SS_SYS_STS;
   uint8  AUTO_STOP_REQUEST;
   uint8  ENG_SS_STS;
   uint8  CRUISE_CONTROL_SET_SPEED;
   uint8  LIMIT_SPEED_CRUISE_STATUS;
   uint8  SS_FAULT_LAMP;
   uint8  SS_ENABLE_LAMP;
}ems_start_stop_struct;

EXTERN   ems_start_stop_struct    ems_start_stop;
#define  GET_EMS_START_STOP_MISSING_FLAG()    (ems_start_stop.Ems_start_stopMissingFlag)
#define  GET_EMS_START_STOP_NEVER_RECE_FLAG() (ems_start_stop.Ems_start_stopNeverReceFlag)
#define  GET_SS_IDLE_STOP_STATUS()    (ems_start_stop.SS_IDLE_STOP_STATUS)
#define  GET_SS_SYS_STS()    (ems_start_stop.SS_SYS_STS)
#define  GET_AUTO_STOP_REQUEST()    (ems_start_stop.AUTO_STOP_REQUEST)
#define  GET_ENG_SS_STS()    (ems_start_stop.ENG_SS_STS)
#define  GET_CRUISE_CONTROL_SET_SPEED()    (ems_start_stop.CRUISE_CONTROL_SET_SPEED)
#define  GET_LIMIT_SPEED_CRUISE_STATUS()    (ems_start_stop.LIMIT_SPEED_CRUISE_STATUS)
#define  GET_SS_FAULT_LAMP()    (ems_start_stop.SS_FAULT_LAMP)
#define  GET_SS_ENABLE_LAMP()    (ems_start_stop.SS_ENABLE_LAMP)

/*frame 0x318 struct define*/
typedef struct
{
   uint8  General_status_tcs_espUpdatedFlag;
   uint8  General_status_tcs_espNeverReceFlag;
   uint8  General_status_tcs_espMissingFlag;
   uint8  data[8];

   uint8  REQ_TCS_ESP_FAILURE_TELLTALE;
   uint8  REQ_TCS_ESP_ACTIVE_TELLTALE;
   uint8  REQ_TCS_ESP_OFF_TELLTALE;
   uint8  REQ_EBD_TELLTALE;
   uint8  REQ_ABS_TELLTALE;
   uint16  ODOMETER_ROLLING;
}general_status_tcs_esp_struct;

EXTERN   general_status_tcs_esp_struct    general_status_tcs_esp;
#define  GET_GENERAL_STATUS_TCS_ESP_MISSING_FLAG()    (general_status_tcs_esp.General_status_tcs_espMissingFlag)
#define  GET_GENERAL_STATUS_TCS_ESP_NEVER_RECE_FLAG() (general_status_tcs_esp.General_status_tcs_espNeverReceFlag)
#define  GET_REQ_TCS_ESP_FAILURE_TELLTALE()    (general_status_tcs_esp.REQ_TCS_ESP_FAILURE_TELLTALE)
#define  GET_REQ_TCS_ESP_ACTIVE_TELLTALE()    (general_status_tcs_esp.REQ_TCS_ESP_ACTIVE_TELLTALE)
#define  GET_REQ_TCS_ESP_OFF_TELLTALE()    (general_status_tcs_esp.REQ_TCS_ESP_OFF_TELLTALE)
#define  GET_REQ_EBD_TELLTALE()    (general_status_tcs_esp.REQ_EBD_TELLTALE)
#define  GET_REQ_ABS_TELLTALE()    (general_status_tcs_esp.REQ_ABS_TELLTALE)
#define  GET_ODOMETER_ROLLING()    (general_status_tcs_esp.ODOMETER_ROLLING)

/*frame 0x322 struct define*/
typedef struct
{
   uint8  Eps_statusUpdatedFlag;
   uint8  Eps_statusNeverReceFlag;
   uint8  Eps_statusMissingFlag;
   uint8  data[8];

   uint8  STS_EPS_ACTIVE_STS;
   uint8  STS_EPS_FAULT_STS;
}eps_status_struct;

EXTERN   eps_status_struct    eps_status;
#define  GET_EPS_STATUS_MISSING_FLAG()    (eps_status.Eps_statusMissingFlag)
#define  GET_EPS_STATUS_NEVER_RECE_FLAG() (eps_status.Eps_statusNeverReceFlag)
#define  GET_STS_EPS_ACTIVE_STS()    (eps_status.STS_EPS_ACTIVE_STS)
#define  GET_STS_EPS_FAULT_STS()    (eps_status.STS_EPS_FAULT_STS)

/*frame 0x350 struct define*/
typedef struct
{
   uint8  Sdm_general_statusUpdatedFlag;
   uint8  Sdm_general_statusNeverReceFlag;
   uint8  Sdm_general_statusMissingFlag;
   uint8  data[8];

   uint8  CHK_BELTS;
   uint8  AIRBAG_WARNINGLAMP;
   uint8  PASSENGER_AIRBAG_OFF;
   uint8  SEATBELT_PA_ATT;
   uint8  SEATBELT_DR_ATT;
}sdm_general_status_struct;

EXTERN   sdm_general_status_struct    sdm_general_status;
#define  GET_SDM_GENERAL_STATUS_MISSING_FLAG()    (sdm_general_status.Sdm_general_statusMissingFlag)
#define  GET_SDM_GENERAL_STATUS_NEVER_RECE_FLAG() (sdm_general_status.Sdm_general_statusNeverReceFlag)
#define  GET_CHK_BELTS()    (sdm_general_status.CHK_BELTS)
#define  GET_AIRBAG_WARNINGLAMP()    (sdm_general_status.AIRBAG_WARNINGLAMP)
#define  GET_PASSENGER_AIRBAG_OFF()    (sdm_general_status.PASSENGER_AIRBAG_OFF)
#define  GET_SEATBELT_PA_ATT()    (sdm_general_status.SEATBELT_PA_ATT)
#define  GET_SEATBELT_DR_ATT()    (sdm_general_status.SEATBELT_DR_ATT)

/*frame 0x370 struct define*/
typedef struct
{
   uint8  Ems_engine_fuel_and_turboUpdatedFlag;
   uint8  Ems_engine_fuel_and_turboNeverReceFlag;
   uint8  Ems_engine_fuel_and_turboMissingFlag;
   uint8  data[8];

   uint16  ENGINE_FUEAL_INJECTED;
   uint8  VALID_TURBO;
   uint8  TURBO_PRESENTATION;
   uint8  VALID_FUEL_INJ;
}ems_engine_fuel_and_turbo_struct;

EXTERN   ems_engine_fuel_and_turbo_struct    ems_engine_fuel_and_turbo;
#define  GET_EMS_ENGINE_FUEL_AND_TURBO_MISSING_FLAG()    (ems_engine_fuel_and_turbo.Ems_engine_fuel_and_turboMissingFlag)
#define  GET_EMS_ENGINE_FUEL_AND_TURBO_NEVER_RECE_FLAG() (ems_engine_fuel_and_turbo.Ems_engine_fuel_and_turboNeverReceFlag)
#define  GET_ENGINE_FUEAL_INJECTED()    (ems_engine_fuel_and_turbo.ENGINE_FUEAL_INJECTED)
#define  GET_VALID_TURBO()    (ems_engine_fuel_and_turbo.VALID_TURBO)
#define  GET_TURBO_PRESENTATION()    (ems_engine_fuel_and_turbo.TURBO_PRESENTATION)
#define  GET_VALID_FUEL_INJ()    (ems_engine_fuel_and_turbo.VALID_FUEL_INJ)

/*frame 0x3a0 struct define*/
typedef struct
{
   uint8  Ems_engine_idle_and_vspeedUpdatedFlag;
   uint8  Ems_engine_idle_and_vspeedNeverReceFlag;
   uint8  Ems_engine_idle_and_vspeedMissingFlag;
   uint8  data[8];

   uint8  VALID_VEHICLE_SPEED;
   uint16  VEHICLE_SPEED;
}ems_engine_idle_and_vspeed_struct;

EXTERN   ems_engine_idle_and_vspeed_struct    ems_engine_idle_and_vspeed;
#define  GET_EMS_ENGINE_IDLE_AND_VSPEED_MISSING_FLAG()    (ems_engine_idle_and_vspeed.Ems_engine_idle_and_vspeedMissingFlag)
#define  GET_EMS_ENGINE_IDLE_AND_VSPEED_NEVER_RECE_FLAG() (ems_engine_idle_and_vspeed.Ems_engine_idle_and_vspeedNeverReceFlag)
#define  GET_VALID_VEHICLE_SPEED()    (ems_engine_idle_and_vspeed.VALID_VEHICLE_SPEED)
#define  GET_VEHICLE_SPEED()    (ems_engine_idle_and_vspeed.VEHICLE_SPEED)

/*frame 0x3e0 struct define*/
typedef struct
{
   uint8  Tcu_general_statusUpdatedFlag;
   uint8  Tcu_general_statusNeverReceFlag;
   uint8  Tcu_general_statusMissingFlag;
   uint8  data[8];

   uint8  TCU_TARGET_GEAR;
   uint8  TCU_SELECTED_GEAR;
   uint8  REQ_MIL_ACTIVE;
   uint8  REQ_WINTER_TELLTALE;
   uint8  VALID_SELECTED_GEAR;
   uint8  REQ_SPORTS_TELLTALE;
   uint8  REQ_CHK_GEARBOX_TELLTALE;
   uint8  CHK_HIGH_OIL_TEMP;
   uint8  TRANS_SHIFT_PATTERN_STATUS;
   uint8  VALID_ACTUAL_GEAR_TCU;
   uint8  GEAR_INDICATION;
}tcu_general_status_struct;

EXTERN   tcu_general_status_struct    tcu_general_status;
#define  GET_TCU_GENERAL_STATUS_MISSING_FLAG()    (tcu_general_status.Tcu_general_statusMissingFlag)
#define  GET_TCU_GENERAL_STATUS_NEVER_RECE_FLAG() (tcu_general_status.Tcu_general_statusNeverReceFlag)
#define  GET_TCU_TARGET_GEAR()    (tcu_general_status.TCU_TARGET_GEAR)
#define  GET_TCU_SELECTED_GEAR()    (tcu_general_status.TCU_SELECTED_GEAR)
#define  GET_REQ_MIL_ACTIVE()    (tcu_general_status.REQ_MIL_ACTIVE)
#define  GET_REQ_WINTER_TELLTALE()    (tcu_general_status.REQ_WINTER_TELLTALE)
#define  GET_VALID_SELECTED_GEAR()    (tcu_general_status.VALID_SELECTED_GEAR)
#define  GET_REQ_SPORTS_TELLTALE()    (tcu_general_status.REQ_SPORTS_TELLTALE)
#define  GET_REQ_CHK_GEARBOX_TELLTALE()    (tcu_general_status.REQ_CHK_GEARBOX_TELLTALE)
#define  GET_CHK_HIGH_OIL_TEMP()    (tcu_general_status.CHK_HIGH_OIL_TEMP)
#define  GET_TRANS_SHIFT_PATTERN_STATUS()    (tcu_general_status.TRANS_SHIFT_PATTERN_STATUS)
#define  GET_VALID_ACTUAL_GEAR_TCU()    (tcu_general_status.VALID_ACTUAL_GEAR_TCU)
#define  GET_GEAR_INDICATION()    (tcu_general_status.GEAR_INDICATION)

/*frame 0x4a0 struct define*/
typedef struct
{
   uint8  Bcm_general_statusUpdatedFlag;
   uint8  Bcm_general_statusNeverReceFlag;
   uint8  Bcm_general_statusMissingFlag;
   uint8  data[8];

   uint8  CHECK_FRONT_FOG_LIGHT;
   uint8  CHECK_REAR_FOG_LIGHT;
   uint8  TELLTALE_FRONT_FOG_LIGHT;
   uint8  TELLTALE_REAR_FOG_LIGHT;
   uint8  REQ_RIGHT_DI_TELLTABLE;
   uint8  REQ_LEFT_DI_TELLTABLE;
   uint8  HOOD_LID_OPEN;
   uint8  TRUNK_LID_OPEN;
   uint8  REAR_RIGHT_DOOR_OPEN;
   uint8  REAR_LEFT_DOOR_OPEN;
   uint8  FRONT_RIGHT_DOOR_OPEN;
   uint8  FRONT_LEFT_DOOR_OPEN;
   uint8  DOOR_UNLOCK_REST;
   uint8  DOOR_UNLOCK_DRIVER;
   uint8  PARK_LIGHT_RIGHT_INDICATION;
   uint8  PARK_LIGHT_LEFT_INDICATION;
   uint8  CHK_THEFT_ALARM;
   uint8  BRAKE_BULB_FAILURE;
   uint8  PARK_BULB_FAILURE_RIGHT;
   uint8  PARK_BULB_FAILURE_LEFT;
   uint8  LOW_BEAM_INDICATOR;
   uint8  HIGH_BEAM_INDICATOR;
   uint8  TELLTALE_HAZARD_LIGHT;
   uint8  TURN_BULB_FAILURE_RIGHT;
   uint8  TURN_BULB_FAILURE_LEFT;
   uint8  PARK_RANGE_SWITCH;
   uint8  BRAKE_LIGHT_ACTIVE;
   uint8  CHECK_BRAKE_AUXILIARY_LIGHT;
   uint8  DRL_FAILURE;
   uint8  POSITION_LIGHT_ON_WARNING;
   uint8  ANTI_THELF_INDICATOR;
}bcm_general_status_struct;

EXTERN   bcm_general_status_struct    bcm_general_status;
#define  GET_BCM_GENERAL_STATUS_MISSING_FLAG()    (bcm_general_status.Bcm_general_statusMissingFlag)
#define  GET_BCM_GENERAL_STATUS_NEVER_RECE_FLAG() (bcm_general_status.Bcm_general_statusNeverReceFlag)
#define  GET_CHECK_FRONT_FOG_LIGHT()    (bcm_general_status.CHECK_FRONT_FOG_LIGHT)
#define  GET_CHECK_REAR_FOG_LIGHT()    (bcm_general_status.CHECK_REAR_FOG_LIGHT)
#define  GET_TELLTALE_FRONT_FOG_LIGHT()    (bcm_general_status.TELLTALE_FRONT_FOG_LIGHT)
#define  GET_TELLTALE_REAR_FOG_LIGHT()    (bcm_general_status.TELLTALE_REAR_FOG_LIGHT)
#define  GET_REQ_RIGHT_DI_TELLTABLE()    (bcm_general_status.REQ_RIGHT_DI_TELLTABLE)
#define  GET_REQ_LEFT_DI_TELLTABLE()    (bcm_general_status.REQ_LEFT_DI_TELLTABLE)
#define  GET_HOOD_LID_OPEN()    (bcm_general_status.HOOD_LID_OPEN)
#define  GET_TRUNK_LID_OPEN()    (bcm_general_status.TRUNK_LID_OPEN)
#define  GET_REAR_RIGHT_DOOR_OPEN()    (bcm_general_status.REAR_RIGHT_DOOR_OPEN)
#define  GET_REAR_LEFT_DOOR_OPEN()    (bcm_general_status.REAR_LEFT_DOOR_OPEN)
#define  GET_FRONT_RIGHT_DOOR_OPEN()    (bcm_general_status.FRONT_RIGHT_DOOR_OPEN)
#define  GET_FRONT_LEFT_DOOR_OPEN()    (bcm_general_status.FRONT_LEFT_DOOR_OPEN)
#define  GET_DOOR_UNLOCK_REST()    (bcm_general_status.DOOR_UNLOCK_REST)
#define  GET_DOOR_UNLOCK_DRIVER()    (bcm_general_status.DOOR_UNLOCK_DRIVER)
#define  GET_PARK_LIGHT_RIGHT_INDICATION()    (bcm_general_status.PARK_LIGHT_RIGHT_INDICATION)
#define  GET_PARK_LIGHT_LEFT_INDICATION()    (bcm_general_status.PARK_LIGHT_LEFT_INDICATION)
#define  GET_CHK_THEFT_ALARM()    (bcm_general_status.CHK_THEFT_ALARM)
#define  GET_BRAKE_BULB_FAILURE()    (bcm_general_status.BRAKE_BULB_FAILURE)
#define  GET_PARK_BULB_FAILURE_RIGHT()    (bcm_general_status.PARK_BULB_FAILURE_RIGHT)
#define  GET_PARK_BULB_FAILURE_LEFT()    (bcm_general_status.PARK_BULB_FAILURE_LEFT)
#define  GET_LOW_BEAM_INDICATOR()    (bcm_general_status.LOW_BEAM_INDICATOR)
#define  GET_HIGH_BEAM_INDICATOR()    (bcm_general_status.HIGH_BEAM_INDICATOR)
#define  GET_TELLTALE_HAZARD_LIGHT()    (bcm_general_status.TELLTALE_HAZARD_LIGHT)
#define  GET_TURN_BULB_FAILURE_RIGHT()    (bcm_general_status.TURN_BULB_FAILURE_RIGHT)
#define  GET_TURN_BULB_FAILURE_LEFT()    (bcm_general_status.TURN_BULB_FAILURE_LEFT)
#define  GET_PARK_RANGE_SWITCH()    (bcm_general_status.PARK_RANGE_SWITCH)
#define  GET_BRAKE_LIGHT_ACTIVE()    (bcm_general_status.BRAKE_LIGHT_ACTIVE)
#define  GET_CHECK_BRAKE_AUXILIARY_LIGHT()    (bcm_general_status.CHECK_BRAKE_AUXILIARY_LIGHT)
#define  GET_DRL_FAILURE()    (bcm_general_status.DRL_FAILURE)
#define  GET_POSITION_LIGHT_ON_WARNING()    (bcm_general_status.POSITION_LIGHT_ON_WARNING)
#define  GET_ANTI_THELF_INDICATOR()    (bcm_general_status.ANTI_THELF_INDICATOR)

/*frame 0x511 struct define*/
typedef struct
{
   uint8  Hum_timeUpdatedFlag;
   uint8  Hum_timeNeverReceFlag;
   uint8  Hum_timeMissingFlag;
   uint8  data[8];

   uint8  TIME_MODE_HUM;
   uint8  MINUTES_HUM;
   uint8  DAY_HUM;
   uint8  WEEK_HUM;
   uint8  YEAR_HUM;
   uint8  MONTH_HUM;
   uint8  SECOND_HUM;
   uint8  HOUR_HUM;
}hum_time_struct;

EXTERN   hum_time_struct    hum_time;
#define  GET_HUM_TIME_MISSING_FLAG()    (hum_time.Hum_timeMissingFlag)
#define  GET_HUM_TIME_NEVER_RECE_FLAG() (hum_time.Hum_timeNeverReceFlag)
#define  GET_TIME_MODE_HUM()    (hum_time.TIME_MODE_HUM)
#define  GET_MINUTES_HUM()    (hum_time.MINUTES_HUM)
#define  GET_DAY_HUM()    (hum_time.DAY_HUM)
#define  GET_WEEK_HUM()    (hum_time.WEEK_HUM)
#define  GET_YEAR_HUM()    (hum_time.YEAR_HUM)
#define  GET_MONTH_HUM()    (hum_time.MONTH_HUM)
#define  GET_SECOND_HUM()    (hum_time.SECOND_HUM)
#define  GET_HOUR_HUM()    (hum_time.HOUR_HUM)

/*frame 0x530 struct define*/
typedef struct
{
   uint8  Ac_controlUpdatedFlag;
   uint8  Ac_controlNeverReceFlag;
   uint8  Ac_controlMissingFlag;
   uint8  data[8];

   uint8  VALID_OTEMP;
   uint8  OUTSIDE_TEMP;
}ac_control_struct;

EXTERN   ac_control_struct    ac_control;
#define  GET_AC_CONTROL_MISSING_FLAG()    (ac_control.Ac_controlMissingFlag)
#define  GET_AC_CONTROL_NEVER_RECE_FLAG() (ac_control.Ac_controlNeverReceFlag)
#define  GET_VALID_OTEMP()    (ac_control.VALID_OTEMP)
#define  GET_OUTSIDE_TEMP()    (ac_control.OUTSIDE_TEMP)

/*frame 0x540 struct define*/
typedef struct
{
   uint8  Tpms_sys_statusUpdatedFlag;
   uint8  Tpms_sys_statusNeverReceFlag;
   uint8  Tpms_sys_statusMissingFlag;
   uint8  data[8];

   uint8  LF_PRESSURE;
   uint8  TIRE_POSITION;
   uint8  RF_PRESSURE;
   uint8  RR_PRESSURE;
   uint8  LR_PRESSURE;
   uint8  TIRE_TEMPERATURE;
   uint8  RF_PRESSURE_WARNING;
   uint8  LF_PRESSURE_WARNING;
   uint8  SYSTEM_WARNING;
   uint8  TEMPERATURE_WARNING;
   uint8  LR_PRESSURE_WARNING;
   uint8  RR_PRESSURE_WARNING;
   uint8  SIGNAL_STATUS;
}tpms_sys_status_struct;

EXTERN   tpms_sys_status_struct    tpms_sys_status;
#define  GET_TPMS_SYS_STATUS_MISSING_FLAG()    (tpms_sys_status.Tpms_sys_statusMissingFlag)
#define  GET_TPMS_SYS_STATUS_NEVER_RECE_FLAG() (tpms_sys_status.Tpms_sys_statusNeverReceFlag)
#define  GET_LF_PRESSURE()    (tpms_sys_status.LF_PRESSURE)
#define  GET_TIRE_POSITION()    (tpms_sys_status.TIRE_POSITION)
#define  GET_RF_PRESSURE()    (tpms_sys_status.RF_PRESSURE)
#define  GET_RR_PRESSURE()    (tpms_sys_status.RR_PRESSURE)
#define  GET_LR_PRESSURE()    (tpms_sys_status.LR_PRESSURE)
#define  GET_TIRE_TEMPERATURE()    (tpms_sys_status.TIRE_TEMPERATURE)
#define  GET_RF_PRESSURE_WARNING()    (tpms_sys_status.RF_PRESSURE_WARNING)
#define  GET_LF_PRESSURE_WARNING()    (tpms_sys_status.LF_PRESSURE_WARNING)
#define  GET_SYSTEM_WARNING()    (tpms_sys_status.SYSTEM_WARNING)
#define  GET_TEMPERATURE_WARNING()    (tpms_sys_status.TEMPERATURE_WARNING)
#define  GET_LR_PRESSURE_WARNING()    (tpms_sys_status.LR_PRESSURE_WARNING)
#define  GET_RR_PRESSURE_WARNING()    (tpms_sys_status.RR_PRESSURE_WARNING)
#define  GET_SIGNAL_STATUS()    (tpms_sys_status.SIGNAL_STATUS)

/*frame 0x560 struct define*/
typedef struct
{
   uint8  data[8];

   uint8  PAS_SYS_STATUS;
   uint8  SVA_SYS_STATUS;
   uint8  PA_FRONT_SYS_STATUS;
   uint8  PA_REAR_SYS_STATUS;
   uint8  PA_REARMIDLEFT_REG_OBJ_STATUS;
   uint8  PA_REARLEFT_REG_OBJ_STATUS;
   uint8  PA_FRONTLEFT_REG_OBJ_STATUS;
   uint8  PA_REARRIGHT_REG_OBJ_STATUS;
   uint8  PA_FRONTRIGHT_REG_OBJ_STATUS;
   uint8  PA_FRONTMIDLEFT_REG_OBJ_STATUS;
   uint8  REAR_MINI_PAS_DISTANCE;
   uint8  FRONT_MINI_PAS_DISTANCE;
   uint8  PA_REARMIDRIGHT_REG_OBJ_ST;
   uint8  SVA_WARNING_STATUS_RIGHT;
   uint8  SVA_WARNING_STATUS_LEFT;
   uint8  NEAREST_REAR_PAS;
   uint8  PA_PAS_SW_STATUS;
   uint8  PA_FRONTMIDRIGHT_REG_OBJ_ST;
}pas_general_status_struct;

EXTERN   pas_general_status_struct    pas_general_status;

/*frame 0x570 struct define*/
typedef struct
{
   uint8  Peps_general_statusUpdatedFlag;
   uint8  Peps_general_statusNeverReceFlag;
   uint8  Peps_general_statusMissingFlag;
   uint8  data[8];

   uint8  REMOTE_START_RESPONSE_PEPS;
   uint8  REMOTE_START_STATUS;
}peps_general_status_struct;

EXTERN   peps_general_status_struct    peps_general_status;
#define  GET_PEPS_GENERAL_STATUS_MISSING_FLAG()    (peps_general_status.Peps_general_statusMissingFlag)
#define  GET_PEPS_GENERAL_STATUS_NEVER_RECE_FLAG() (peps_general_status.Peps_general_statusNeverReceFlag)
#define  GET_REMOTE_START_RESPONSE_PEPS()    (peps_general_status.REMOTE_START_RESPONSE_PEPS)
#define  GET_REMOTE_START_STATUS()    (peps_general_status.REMOTE_START_STATUS)

/*frame 0x571 struct define*/
typedef struct
{
   uint8  Escl_general_statusUpdatedFlag;
   uint8  Escl_general_statusNeverReceFlag;
   uint8  Escl_general_statusMissingFlag;
   uint8  data[8];

   uint8  ESCL_TEXT_ROTATE_STEERING_WHEEL;
   uint8  ESCL_TEXT_GARAGE;
   uint8  ESCL_TEXT_STEERING_NOT_UNLOCKED;
   uint8  ESCL_TEXTDEECT;
   uint8  ESCL_LED_YELLOW;
   uint8  ESCL_LED_RED;
   uint8  ESCL_UNLOCKED;
   uint8  ESCL_LOCKED;
   uint8  ESCL_SERVICE_RELEVANT_FAILURE;
}escl_general_status_struct;

EXTERN   escl_general_status_struct    escl_general_status;
#define  GET_ESCL_GENERAL_STATUS_MISSING_FLAG()    (escl_general_status.Escl_general_statusMissingFlag)
#define  GET_ESCL_GENERAL_STATUS_NEVER_RECE_FLAG() (escl_general_status.Escl_general_statusNeverReceFlag)
#define  GET_ESCL_TEXT_ROTATE_STEERING_WHEEL()    (escl_general_status.ESCL_TEXT_ROTATE_STEERING_WHEEL)
#define  GET_ESCL_TEXT_GARAGE()    (escl_general_status.ESCL_TEXT_GARAGE)
#define  GET_ESCL_TEXT_STEERING_NOT_UNLOCKED()    (escl_general_status.ESCL_TEXT_STEERING_NOT_UNLOCKED)
#define  GET_ESCL_TEXTDEECT()    (escl_general_status.ESCL_TEXTDEECT)
#define  GET_ESCL_LED_YELLOW()    (escl_general_status.ESCL_LED_YELLOW)
#define  GET_ESCL_LED_RED()    (escl_general_status.ESCL_LED_RED)
#define  GET_ESCL_UNLOCKED()    (escl_general_status.ESCL_UNLOCKED)
#define  GET_ESCL_LOCKED()    (escl_general_status.ESCL_LOCKED)
#define  GET_ESCL_SERVICE_RELEVANT_FAILURE()    (escl_general_status.ESCL_SERVICE_RELEVANT_FAILURE)

/*frame 0x580 struct define*/
typedef struct
{
   uint8  Peps_general_status_2UpdatedFlag;
   uint8  Peps_general_status_2NeverReceFlag;
   uint8  Peps_general_status_2MissingFlag;
   uint8  data[8];

   uint8  MIU_MSG_REQ_N7;
   uint8  MIU_MSG_REQ_N6;
   uint8  MIU_MSG_REQ_N5;
   uint8  MIU_MSG_REQ_N4;
   uint8  MIU_MSG_REQ_N3;
   uint8  MIU_MSG_REQ_N2;
   uint8  MIU_MSG_REQ_N1;
   uint8  MIU_MSG_REQ_N0;
   uint8  MIU_MSG_REQ_N15;
   uint8  MIU_MSG_REQ_N14;
   uint8  MIU_MSG_REQ_N13;
   uint8  MIU_MSG_REQ_N12;
   uint8  MIU_MSG_REQ_N11;
   uint8  MIU_MSG_REQ_N10;
   uint8  MIU_MSG_REQ_N9;
   uint8  MIU_MSG_REQ_N8;
   uint8  MIU_MSG_REQ_N16;
}peps_general_status_2_struct;

EXTERN   peps_general_status_2_struct    peps_general_status_2;
#define  GET_PEPS_GENERAL_STATUS_2_MISSING_FLAG()    (peps_general_status_2.Peps_general_status_2MissingFlag)
#define  GET_PEPS_GENERAL_STATUS_2_NEVER_RECE_FLAG() (peps_general_status_2.Peps_general_status_2NeverReceFlag)
#define  GET_MIU_MSG_REQ_N7()    (peps_general_status_2.MIU_MSG_REQ_N7)
#define  GET_MIU_MSG_REQ_N6()    (peps_general_status_2.MIU_MSG_REQ_N6)
#define  GET_MIU_MSG_REQ_N5()    (peps_general_status_2.MIU_MSG_REQ_N5)
#define  GET_MIU_MSG_REQ_N4()    (peps_general_status_2.MIU_MSG_REQ_N4)
#define  GET_MIU_MSG_REQ_N3()    (peps_general_status_2.MIU_MSG_REQ_N3)
#define  GET_MIU_MSG_REQ_N2()    (peps_general_status_2.MIU_MSG_REQ_N2)
#define  GET_MIU_MSG_REQ_N1()    (peps_general_status_2.MIU_MSG_REQ_N1)
#define  GET_MIU_MSG_REQ_N0()    (peps_general_status_2.MIU_MSG_REQ_N0)
#define  GET_MIU_MSG_REQ_N15()    (peps_general_status_2.MIU_MSG_REQ_N15)
#define  GET_MIU_MSG_REQ_N14()    (peps_general_status_2.MIU_MSG_REQ_N14)
#define  GET_MIU_MSG_REQ_N13()    (peps_general_status_2.MIU_MSG_REQ_N13)
#define  GET_MIU_MSG_REQ_N12()    (peps_general_status_2.MIU_MSG_REQ_N12)
#define  GET_MIU_MSG_REQ_N11()    (peps_general_status_2.MIU_MSG_REQ_N11)
#define  GET_MIU_MSG_REQ_N10()    (peps_general_status_2.MIU_MSG_REQ_N10)
#define  GET_MIU_MSG_REQ_N9()    (peps_general_status_2.MIU_MSG_REQ_N9)
#define  GET_MIU_MSG_REQ_N8()    (peps_general_status_2.MIU_MSG_REQ_N8)
#define  GET_MIU_MSG_REQ_N16()    (peps_general_status_2.MIU_MSG_REQ_N16)

/*frame 0x592 struct define*/
typedef struct
{
   uint8  Avm_general_statusUpdatedFlag;
   uint8  Avm_general_statusNeverReceFlag;
   uint8  Avm_general_statusMissingFlag;
   uint8  data[8];

   uint8  AVM_HMI_INDEX;
   uint8  AVM_DISPLAY_REQ;
   uint8  FRONT_CAMERA_INPUT_FAILED;
   uint8  REAR_CAMERA_INPUT_FAILED;
   uint8  LEFT_CAMERA_INPUT_FAILED;
   uint8  RIGHT_CAMERA_INPUT_FAILED;
   uint8  VIDEO_OUTPUT_FAILED;
   uint8  CONTROLLER_OP_FAILED;
   uint8  CAN_COM_FAILED;
   uint8  OVERLAY_OP_FAILED;
   uint8  LDW_OP_STATUS;
   uint8  BSD_OP_STATUS;
   uint8  AVM_STATUS;
   uint8  LDW_LANE_AVALIABILITY;
   uint8  LDW_WARNING_STATUS;
   uint8  BSD_LEFT_WARNING_STATUS;
   uint8  BSD_RIGHT_WARNING_STATUS;
   uint8  MOD_FRONT_WARNING_STATUS;
   uint8  MOD_REAR_WARNING_STATUS;
   uint8  MOD_LEFT_WARNING_STATUS;
   uint8  MOD_RIGHT_WARNING_STATUS;
   uint8  BAT_VOLT_OUT_OF_RANGE;
   uint8  EOL_NOT_COMPLETED;
   uint8  GUID_VOICE_REQ;
}avm_general_status_struct;

EXTERN   avm_general_status_struct    avm_general_status;
#define  GET_AVM_GENERAL_STATUS_MISSING_FLAG()    (avm_general_status.Avm_general_statusMissingFlag)
#define  GET_AVM_GENERAL_STATUS_NEVER_RECE_FLAG() (avm_general_status.Avm_general_statusNeverReceFlag)
#define  GET_AVM_HMI_INDEX()    (avm_general_status.AVM_HMI_INDEX)
#define  GET_AVM_DISPLAY_REQ()    (avm_general_status.AVM_DISPLAY_REQ)
#define  GET_FRONT_CAMERA_INPUT_FAILED()    (avm_general_status.FRONT_CAMERA_INPUT_FAILED)
#define  GET_REAR_CAMERA_INPUT_FAILED()    (avm_general_status.REAR_CAMERA_INPUT_FAILED)
#define  GET_LEFT_CAMERA_INPUT_FAILED()    (avm_general_status.LEFT_CAMERA_INPUT_FAILED)
#define  GET_RIGHT_CAMERA_INPUT_FAILED()    (avm_general_status.RIGHT_CAMERA_INPUT_FAILED)
#define  GET_VIDEO_OUTPUT_FAILED()    (avm_general_status.VIDEO_OUTPUT_FAILED)
#define  GET_CONTROLLER_OP_FAILED()    (avm_general_status.CONTROLLER_OP_FAILED)
#define  GET_CAN_COM_FAILED()    (avm_general_status.CAN_COM_FAILED)
#define  GET_OVERLAY_OP_FAILED()    (avm_general_status.OVERLAY_OP_FAILED)
#define  GET_LDW_OP_STATUS()    (avm_general_status.LDW_OP_STATUS)
#define  GET_BSD_OP_STATUS()    (avm_general_status.BSD_OP_STATUS)
#define  GET_AVM_STATUS()    (avm_general_status.AVM_STATUS)
#define  GET_LDW_LANE_AVALIABILITY()    (avm_general_status.LDW_LANE_AVALIABILITY)
#define  GET_LDW_WARNING_STATUS()    (avm_general_status.LDW_WARNING_STATUS)
#define  GET_BSD_LEFT_WARNING_STATUS()    (avm_general_status.BSD_LEFT_WARNING_STATUS)
#define  GET_BSD_RIGHT_WARNING_STATUS()    (avm_general_status.BSD_RIGHT_WARNING_STATUS)
#define  GET_MOD_FRONT_WARNING_STATUS()    (avm_general_status.MOD_FRONT_WARNING_STATUS)
#define  GET_MOD_REAR_WARNING_STATUS()    (avm_general_status.MOD_REAR_WARNING_STATUS)
#define  GET_MOD_LEFT_WARNING_STATUS()    (avm_general_status.MOD_LEFT_WARNING_STATUS)
#define  GET_MOD_RIGHT_WARNING_STATUS()    (avm_general_status.MOD_RIGHT_WARNING_STATUS)
#define  GET_BAT_VOLT_OUT_OF_RANGE()    (avm_general_status.BAT_VOLT_OUT_OF_RANGE)
#define  GET_EOL_NOT_COMPLETED()    (avm_general_status.EOL_NOT_COMPLETED)
#define  GET_GUID_VOICE_REQ()    (avm_general_status.GUID_VOICE_REQ)

/*frame 0x5c0 struct define*/
typedef struct
{
   uint8  Ems_engine_temp_and_barrometerUpdatedFlag;
   uint8  Ems_engine_temp_and_barrometerNeverReceFlag;
   uint8  Ems_engine_temp_and_barrometerMissingFlag;
   uint8  data[8];

   uint8  COOLANT_TEMPERATURE;
   uint8  VALID_COOLANT;
}ems_engine_temp_and_barrometer_struct;

EXTERN   ems_engine_temp_and_barrometer_struct    ems_engine_temp_and_barrometer;
#define  GET_EMS_ENGINE_TEMP_AND_BARROMETER_MISSING_FLAG()    (ems_engine_temp_and_barrometer.Ems_engine_temp_and_barrometerMissingFlag)
#define  GET_EMS_ENGINE_TEMP_AND_BARROMETER_NEVER_RECE_FLAG() (ems_engine_temp_and_barrometer.Ems_engine_temp_and_barrometerNeverReceFlag)
#define  GET_COOLANT_TEMPERATURE()    (ems_engine_temp_and_barrometer.COOLANT_TEMPERATURE)
#define  GET_VALID_COOLANT()    (ems_engine_temp_and_barrometer.VALID_COOLANT)

/*frame 0x620 struct define*/
typedef struct
{
   uint8  data[8];

   uint8  DATA_VALID;
   uint8  AIRBAG_WARNINGLAMP_STATUS;
   uint8  NIGHT_PANEL;
   uint8  DATA_VALID_RHEOSTAT;
   uint8  WASHER_FLUID_LEVEL_LOW;
   uint8  ODOMETER_RESET_COUNTER_ICM;
   uint8  RHEOSTAT_LEVEL;
   uint32  DISPLAYED_TOTAL_DISTANCE;
   uint8  BATTERY_VOLTAGE_LEVEL;
   uint8  ODOMETER_OFFSET_ICM;
}icm_general_status_struct;

EXTERN   icm_general_status_struct    icm_general_status;

/*frame 0x621 struct define*/
typedef struct
{
   uint8  data[8];

   uint8  HAND_BRAKE_ICM;
   uint8  REMOTE_START_RESPONSE_ICM;
   uint8  FUELTANK_REMAINING;
   uint16  OILPUMP_RESISTER_ICM;
}icm_general_status_2_struct;

EXTERN   icm_general_status_2_struct    icm_general_status_2;

/*frame 0x630 struct define*/
typedef struct
{
   uint8  Ahl_general_statusUpdatedFlag;
   uint8  Ahl_general_statusNeverReceFlag;
   uint8  Ahl_general_statusMissingFlag;
   uint8  data[8];

   uint8  AHL_FAULT_STATUS;
}ahl_general_status_struct;

EXTERN   ahl_general_status_struct    ahl_general_status;
#define  GET_AHL_GENERAL_STATUS_MISSING_FLAG()    (ahl_general_status.Ahl_general_statusMissingFlag)
#define  GET_AHL_GENERAL_STATUS_NEVER_RECE_FLAG() (ahl_general_status.Ahl_general_statusNeverReceFlag)
#define  GET_AHL_FAULT_STATUS()    (ahl_general_status.AHL_FAULT_STATUS)

/*frame 0x660 struct define*/
typedef struct
{
   uint8  Bcm_general_status_2UpdatedFlag;
   uint8  Bcm_general_status_2NeverReceFlag;
   uint8  Bcm_general_status_2MissingFlag;
   uint8  data[8];

   uint8  POWER_MODE_BCM;
   uint32  EB_ODO;
   uint8  ODOMETER_OFFSET_BCM;
   uint8  EB_ODO_VALID;
   uint8  POWER_MODE_VALIDITY_BCM;
   uint8  ODOMETER_RESET_COUNTER_BCM;
}bcm_general_status_2_struct;

EXTERN   bcm_general_status_2_struct    bcm_general_status_2;
#define  GET_BCM_GENERAL_STATUS_2_MISSING_FLAG()    (bcm_general_status_2.Bcm_general_status_2MissingFlag)
#define  GET_BCM_GENERAL_STATUS_2_NEVER_RECE_FLAG() (bcm_general_status_2.Bcm_general_status_2NeverReceFlag)
#define  GET_POWER_MODE_BCM()    (bcm_general_status_2.POWER_MODE_BCM)
#define  GET_EB_ODO()    (bcm_general_status_2.EB_ODO)
#define  GET_ODOMETER_OFFSET_BCM()    (bcm_general_status_2.ODOMETER_OFFSET_BCM)
#define  GET_EB_ODO_VALID()    (bcm_general_status_2.EB_ODO_VALID)
#define  GET_POWER_MODE_VALIDITY_BCM()    (bcm_general_status_2.POWER_MODE_VALIDITY_BCM)
#define  GET_ODOMETER_RESET_COUNTER_BCM()    (bcm_general_status_2.ODOMETER_RESET_COUNTER_BCM)

/*frame 0x670 struct define*/
typedef struct
{
   uint8  Hum_event_command_1UpdatedFlag;
   uint8  Hum_event_command_1NeverReceFlag;
   uint8  Hum_event_command_1MissingFlag;
   uint8  data[8];

   uint8  SYS_LANGUAGE;
}hum_event_command_1_struct;

EXTERN   hum_event_command_1_struct    hum_event_command_1;
#define  GET_SYS_LANGUAGE()    (hum_event_command_1.SYS_LANGUAGE)

/*frame 0x671 struct define*/
typedef struct
{
   uint8  Hum_event_command_2UpdatedFlag;
   uint8  Hum_event_command_2NeverReceFlag;
   uint8  Hum_event_command_2MissingFlag;
   uint8  data[8];

   uint8  BSD_SYS_SWITCH;
   uint8  LDW_SWITCH;
}hum_event_command_2_struct;

EXTERN   hum_event_command_2_struct    hum_event_command_2;
#define  GET_BSD_SYS_SWITCH()    (hum_event_command_2.BSD_SYS_SWITCH)
#define  GET_LDW_SWITCH()    (hum_event_command_2.LDW_SWITCH)

/*frame 0x672 struct define*/
typedef struct
{
   uint8  Navi_informationUpdatedFlag;
   uint8  Navi_informationNeverReceFlag;
   uint8  Navi_informationMissingFlag;
   uint8  data[8];

   uint8  NAVI_DATA_FIELD_1;
   uint8  NAVI_DATA_FIELD_2;
   uint8  NAVI_DATA_FIELD_3;
   uint8  NAVI_DATA_FIELD_4;
   uint8  LENGTH_of_MESSAGE_NAVI;
   uint8  NAVI_DATA_FIELD_5;
   uint8  NAVI_DATA_FIELD_6;
   uint8  NAVI_DATA_FIELD_7;
   uint8  NUM_of_MESSAGE_NAVI;
}navi_information_struct;

EXTERN   navi_information_struct    navi_information;
#define  GET_NAVI_INFORMATION_MISSING_FLAG()    (navi_information.Navi_informationMissingFlag)
#define  GET_NAVI_INFORMATION_NEVER_RECE_FLAG() (navi_information.Navi_informationNeverReceFlag)
#define  GET_NAVI_DATA_FIELD_1()    (navi_information.NAVI_DATA_FIELD_1)
#define  GET_NAVI_DATA_FIELD_2()    (navi_information.NAVI_DATA_FIELD_2)
#define  GET_NAVI_DATA_FIELD_3()    (navi_information.NAVI_DATA_FIELD_3)
#define  GET_NAVI_DATA_FIELD_4()    (navi_information.NAVI_DATA_FIELD_4)
#define  GET_LENGTH_of_MESSAGE_NAVI()    (navi_information.LENGTH_of_MESSAGE_NAVI)
#define  GET_NAVI_DATA_FIELD_5()    (navi_information.NAVI_DATA_FIELD_5)
#define  GET_NAVI_DATA_FIELD_6()    (navi_information.NAVI_DATA_FIELD_6)
#define  GET_NAVI_DATA_FIELD_7()    (navi_information.NAVI_DATA_FIELD_7)
#define  GET_NUM_of_MESSAGE_NAVI()    (navi_information.NUM_of_MESSAGE_NAVI)

/*frame 0x673 struct define*/
typedef struct
{
   uint8  Media_informationUpdatedFlag;
   uint8  Media_informationNeverReceFlag;
   uint8  Media_informationMissingFlag;
   uint8  data[8];

   uint8  MEDIA_DATA_FIELD_1;
   uint8  MEDIA_DATA_FIELD_2;
   uint8  MEDIA_DATA_FIELD_3;
   uint8  MEDIA_DATA_FIELD_4;
   uint8  LENGTH_of_MESSAGE_MEDIA;
   uint8  MEDIA_DATA_FIELD_5;
   uint8  MEDIA_DATA_FIELD_6;
   uint8  MEDIA_DATA_FIELD_7;
   uint8  NUM_of_MESSAGE_MEDIA;
}media_information_struct;

EXTERN   media_information_struct    media_information;
#define  GET_MEDIA_INFORMATION_MISSING_FLAG()    (media_information.Media_informationMissingFlag)
#define  GET_MEDIA_INFORMATION_NEVER_RECE_FLAG() (media_information.Media_informationNeverReceFlag)
#define  GET_MEDIA_DATA_FIELD_1()    (media_information.MEDIA_DATA_FIELD_1)
#define  GET_MEDIA_DATA_FIELD_2()    (media_information.MEDIA_DATA_FIELD_2)
#define  GET_MEDIA_DATA_FIELD_3()    (media_information.MEDIA_DATA_FIELD_3)
#define  GET_MEDIA_DATA_FIELD_4()    (media_information.MEDIA_DATA_FIELD_4)
#define  GET_LENGTH_of_MESSAGE_MEDIA()    (media_information.LENGTH_of_MESSAGE_MEDIA)
#define  GET_MEDIA_DATA_FIELD_5()    (media_information.MEDIA_DATA_FIELD_5)
#define  GET_MEDIA_DATA_FIELD_6()    (media_information.MEDIA_DATA_FIELD_6)
#define  GET_MEDIA_DATA_FIELD_7()    (media_information.MEDIA_DATA_FIELD_7)
#define  GET_NUM_of_MESSAGE_MEDIA()    (media_information.NUM_of_MESSAGE_MEDIA)

/*frame 0x6f1 struct define*/
typedef struct
{
   uint8  data[8];

   uint16  INSTANT_FUEL_CONSUM;
   uint16  AVERAGE_FUEL_CONSUM1;
   uint16  ENDURANCE_MILEAGE;
   uint16  REMAIN_MAINTAIN_MILEAGE;
   uint16  AVERAGE_FUEL_CONSUM2;
}icm_general_status_3_struct;

EXTERN   icm_general_status_3_struct    icm_general_status_3;

/*frame 0x6fa struct define*/
typedef struct
{
   uint8  data[8];

   uint8  FRAME0_SIGNAL0_RESERVE;
   uint8  FRAME0_SIGNAL1_RESERVE;
   uint8  FRAME0_SIGNAL2_RESERVE;
   uint8  FRAME0_SIGNAL3_RESERVE;
   uint8  FRAME0_SIGNAL4_RESERVE;
   uint8  FRAME0_SIGNAL5_RESERVE;
   uint8  FRAME0_SIGNAL6_RESERVE;
   uint8  FRAME0_SIGNAL7_RESERVE;
}frame0_reserve_struct;

EXTERN   frame0_reserve_struct    frame0_reserve;

/*frame 0x6fb struct define*/
typedef struct
{
   uint8  data[8];

   uint8  FRAME1_SIGNAL0_RESERVE;
   uint8  FRAME1_SIGNAL1_RESERVE;
   uint8  FRAME1_SIGNAL2_RESERVE;
   uint8  FRAME1_SIGNAL3_RESERVE;
   uint8  FRAME1_SIGNAL4_RESERVE;
   uint8  FRAME1_SIGNAL5_RESERVE;
   uint8  FRAME1_SIGNAL6_RESERVE;
   uint8  FRAME1_SIGNAL7_RESERVE;
}frame1_reserve_struct;

EXTERN   frame1_reserve_struct    frame1_reserve;

/*frame 0x6fc struct define*/
typedef struct
{
   uint8  data[8];

   uint8  FRAME2_SIGNAL0_RESERVE;
   uint8  FRAME2_SIGNAL1_RESERVE;
   uint8  FRAME2_SIGNAL2_RESERVE;
   uint8  FRAME2_SIGNAL3_RESERVE;
   uint8  FRAME2_SIGNAL4_RESERVE;
   uint8  FRAME2_SIGNAL5_RESERVE;
   uint8  FRAME2_SIGNAL6_RESERVE;
   uint8  FRAME2_SIGNAL7_RESERVE;
}frame2_reserve_struct;

EXTERN   frame2_reserve_struct    frame2_reserve;

/*frame 0x6fd struct define*/
typedef struct
{
   uint8  data[8];

   uint8  FRAME3_SIGNAL0_RESERVE;
   uint8  FRAME3_SIGNAL1_RESERVE;
   uint8  FRAME3_SIGNAL2_RESERVE;
   uint8  FRAME3_SIGNAL3_RESERVE;
   uint8  FRAME3_SIGNAL4_RESERVE;
   uint8  FRAME3_SIGNAL5_RESERVE;
   uint8  FRAME3_SIGNAL6_RESERVE;
   uint8  FRAME3_SIGNAL7_RESERVE;
}frame3_reserve_struct;

EXTERN   frame3_reserve_struct    frame3_reserve;

/*frame 0x6fe struct define*/
typedef struct
{
   uint8  data[8];

   uint8  FRAME4_SIGNAL0_RESERVE;
   uint8  FRAME4_SIGNAL1_RESERVE;
   uint8  FRAME4_SIGNAL2_RESERVE;
   uint8  FRAME4_SIGNAL3_RESERVE;
   uint8  FRAME4_SIGNAL4_RESERVE;
   uint8  FRAME4_SIGNAL5_RESERVE;
   uint8  FRAME4_SIGNAL6_RESERVE;
   uint8  FRAME4_SIGNAL7_RESERVE;
}frame4_reserve_struct;

EXTERN   frame4_reserve_struct    frame4_reserve;
