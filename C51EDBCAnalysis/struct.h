
typedef struct
{
    uint8  data[8];
    uint8  Bcm_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bcm_general_statusNeverReceFlag;
 #endif

   uint8 CHECK_FRONT_FOG_LIGHT;
   uint8 CHECK_REAR_FOG_LIGHT;
   uint8 TELLTALE_FRONT_FOG_LIGHT;
   uint8 TELLTALE_REAR_FOG_LIGHT;
   uint8 REQ_RIGHT_DI_TELLTABLE;
   uint8 REQ_LEFT_DI_TELLTABLE;
   uint8 HOOD_LID_OPEN;
   uint8 TRUNK_LID_OPEN;
   uint8 REAR_RIGHT_DOOR_OPEN;
   uint8 REAR_LEFT_DOOR_OPEN;
   uint8 FRONT_RIGHT_DOOR_OPEN;
   uint8 FRONT_LEFT_DOOR_OPEN;
   uint8 DOOR_UNLOCK_REST;
   uint8 DOOR_UNLOCK_DRIVER;
   uint8 PARK_LIGHT_RIGHT_INDICATION;
   uint8 PARK_LIGHT_LEFT_INDICATION;
   uint8 CHK_THEFT_ALARM;
   uint8 BRAKE_BULB_FAILURE;
   uint8 PARK_BULB_FAILURE_RIGHT;
   uint8 PARK_BULB_FAILURE_LEFT;
   uint8 LOW_BEAM_INDICATOR;
   uint8 HIGH_BEAM_INDICATOR;
   uint8 TELLTALE_HAZARD_LIGHT;
   uint8 TURN_BULB_FAILURE_RIGHT;
   uint8 TURN_BULB_FAILURE_LEFT;
   uint8 PARK_RANGE_SWITCH;
   uint8 BRAKE_LIGHT_ACTIVE;
   uint8 CHECK_BRAKE_AUXILIARY_LIGHT;
   uint8 DRL_FAILURE;
   uint8 POSITION_LIGHT_ON_WARNING;
   uint8 ANTI_THELF_INDICATOR;
}bcm_general_status_struct;

extern   bcm_general_status_struct    bcm_general_status;
#define  GET_BCM_GENERAL_STATUS_MISSING_FLAG()    get_bcm_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_BCM_GENERAL_STATUS_NEVER_RECE_FLAG()    get_bcm_general_status_never_reve_flag()
#endif

#define  GET_CHECK_FRONT_FOG_LIGHT()    get_CHECK_FRONT_FOG_LIGHT()
#define  GET_CHECK_REAR_FOG_LIGHT()    get_CHECK_REAR_FOG_LIGHT()
#define  GET_TELLTALE_FRONT_FOG_LIGHT()    get_TELLTALE_FRONT_FOG_LIGHT()
#define  GET_TELLTALE_REAR_FOG_LIGHT()    get_TELLTALE_REAR_FOG_LIGHT()
#define  GET_REQ_RIGHT_DI_TELLTABLE()    get_REQ_RIGHT_DI_TELLTABLE()
#define  GET_REQ_LEFT_DI_TELLTABLE()    get_REQ_LEFT_DI_TELLTABLE()
#define  GET_HOOD_LID_OPEN()    get_HOOD_LID_OPEN()
#define  GET_TRUNK_LID_OPEN()    get_TRUNK_LID_OPEN()
#define  GET_REAR_RIGHT_DOOR_OPEN()    get_REAR_RIGHT_DOOR_OPEN()
#define  GET_REAR_LEFT_DOOR_OPEN()    get_REAR_LEFT_DOOR_OPEN()
#define  GET_FRONT_RIGHT_DOOR_OPEN()    get_FRONT_RIGHT_DOOR_OPEN()
#define  GET_FRONT_LEFT_DOOR_OPEN()    get_FRONT_LEFT_DOOR_OPEN()
#define  GET_DOOR_UNLOCK_REST()    get_DOOR_UNLOCK_REST()
#define  GET_DOOR_UNLOCK_DRIVER()    get_DOOR_UNLOCK_DRIVER()
#define  GET_PARK_LIGHT_RIGHT_INDICATION()    get_PARK_LIGHT_RIGHT_INDICATION()
#define  GET_PARK_LIGHT_LEFT_INDICATION()    get_PARK_LIGHT_LEFT_INDICATION()
#define  GET_CHK_THEFT_ALARM()    get_CHK_THEFT_ALARM()
#define  GET_BRAKE_BULB_FAILURE()    get_BRAKE_BULB_FAILURE()
#define  GET_PARK_BULB_FAILURE_RIGHT()    get_PARK_BULB_FAILURE_RIGHT()
#define  GET_PARK_BULB_FAILURE_LEFT()    get_PARK_BULB_FAILURE_LEFT()
#define  GET_LOW_BEAM_INDICATOR()    get_LOW_BEAM_INDICATOR()
#define  GET_HIGH_BEAM_INDICATOR()    get_HIGH_BEAM_INDICATOR()
#define  GET_TELLTALE_HAZARD_LIGHT()    get_TELLTALE_HAZARD_LIGHT()
#define  GET_TURN_BULB_FAILURE_RIGHT()    get_TURN_BULB_FAILURE_RIGHT()
#define  GET_TURN_BULB_FAILURE_LEFT()    get_TURN_BULB_FAILURE_LEFT()
#define  GET_PARK_RANGE_SWITCH()    get_PARK_RANGE_SWITCH()
#define  GET_BRAKE_LIGHT_ACTIVE()    get_BRAKE_LIGHT_ACTIVE()
#define  GET_CHECK_BRAKE_AUXILIARY_LIGHT()    get_CHECK_BRAKE_AUXILIARY_LIGHT()
#define  GET_DRL_FAILURE()    get_DRL_FAILURE()
#define  GET_POSITION_LIGHT_ON_WARNING()    get_POSITION_LIGHT_ON_WARNING()
#define  GET_ANTI_THELF_INDICATOR()    get_ANTI_THELF_INDICATOR()

typedef struct
{
    uint8  data[8];
    uint8  Hum_gpsMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Hum_gpsNeverReceFlag;
 #endif

   uint8 TIME_MODE_HUM;
   uint8 MINUTES_HUM;
   uint8 DAY_HUM;
   uint8 WEEK_HUM;
   uint8 YEAR_HUM;
   uint8 MONTH_HUM;
   uint8 SECOND_HUM;
   uint8 HOUR_HUM;
}hum_gps_struct;

extern   hum_gps_struct    hum_gps;
#define  GET_HUM_GPS_MISSING_FLAG()    get_hum_gps_missing_flag()

#if  NeverReceFlagEN
#define  GET_HUM_GPS_NEVER_RECE_FLAG()    get_hum_gps_never_reve_flag()
#endif

#define  GET_TIME_MODE_HUM()    get_TIME_MODE_HUM()
#define  GET_MINUTES_HUM()    get_MINUTES_HUM()
#define  GET_DAY_HUM()    get_DAY_HUM()
#define  GET_WEEK_HUM()    get_WEEK_HUM()
#define  GET_YEAR_HUM()    get_YEAR_HUM()
#define  GET_MONTH_HUM()    get_MONTH_HUM()
#define  GET_SECOND_HUM()    get_SECOND_HUM()
#define  GET_HOUR_HUM()    get_HOUR_HUM()

typedef struct
{
    uint8  data[8];
    uint8  Ac_controlMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ac_controlNeverReceFlag;
 #endif

   uint8 VALID_OTEMP;
   uint8 OUTSIDE_TEMP;
}ac_control_struct;

extern   ac_control_struct    ac_control;
#define  GET_AC_CONTROL_MISSING_FLAG()    get_ac_control_missing_flag()

#if  NeverReceFlagEN
#define  GET_AC_CONTROL_NEVER_RECE_FLAG()    get_ac_control_never_reve_flag()
#endif

#define  GET_VALID_OTEMP()    get_VALID_OTEMP()
#define  GET_OUTSIDE_TEMP()    get_OUTSIDE_TEMP()

typedef struct
{
    uint8  data[8];
    uint8  Tpms_sys_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Tpms_sys_statusNeverReceFlag;
 #endif

   uint8 LF_PRESSURE;
   uint8 TIRE_POSITION;
   uint8 RF_PRESSURE;
   uint8 RR_PRESSURE;
   uint8 LR_PRESSURE;
   uint8 TIRE_TEMPERATURE;
   uint8 RF_PRESSURE_WARNING;
   uint8 LF_PRESSURE_WARNING;
   uint8 SYSTEM_WARNING;
   uint8 TEMPERATURE_WARNING;
   uint8 LR_PRESSURE_WARNING;
   uint8 RR_PRESSURE_WARNING;
   uint8 SIGNAL_STATUS;
}tpms_sys_status_struct;

extern   tpms_sys_status_struct    tpms_sys_status;
#define  GET_TPMS_SYS_STATUS_MISSING_FLAG()    get_tpms_sys_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_TPMS_SYS_STATUS_NEVER_RECE_FLAG()    get_tpms_sys_status_never_reve_flag()
#endif

#define  GET_LF_PRESSURE()    get_LF_PRESSURE()
#define  GET_TIRE_POSITION()    get_TIRE_POSITION()
#define  GET_RF_PRESSURE()    get_RF_PRESSURE()
#define  GET_RR_PRESSURE()    get_RR_PRESSURE()
#define  GET_LR_PRESSURE()    get_LR_PRESSURE()
#define  GET_TIRE_TEMPERATURE()    get_TIRE_TEMPERATURE()
#define  GET_RF_PRESSURE_WARNING()    get_RF_PRESSURE_WARNING()
#define  GET_LF_PRESSURE_WARNING()    get_LF_PRESSURE_WARNING()
#define  GET_SYSTEM_WARNING()    get_SYSTEM_WARNING()
#define  GET_TEMPERATURE_WARNING()    get_TEMPERATURE_WARNING()
#define  GET_LR_PRESSURE_WARNING()    get_LR_PRESSURE_WARNING()
#define  GET_RR_PRESSURE_WARNING()    get_RR_PRESSURE_WARNING()
#define  GET_SIGNAL_STATUS()    get_SIGNAL_STATUS()

typedef struct
{
    uint8  data[8];
    uint8  Peps_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Peps_general_statusNeverReceFlag;
 #endif

   uint8 REMOTE_START_RESPONSE_PEPS;
   uint8 REMOTE_START_STATUS;
}peps_general_status_struct;

extern   peps_general_status_struct    peps_general_status;
#define  GET_PEPS_GENERAL_STATUS_MISSING_FLAG()    get_peps_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_PEPS_GENERAL_STATUS_NEVER_RECE_FLAG()    get_peps_general_status_never_reve_flag()
#endif

#define  GET_REMOTE_START_RESPONSE_PEPS()    get_REMOTE_START_RESPONSE_PEPS()
#define  GET_REMOTE_START_STATUS()    get_REMOTE_START_STATUS()

typedef struct
{
    uint8  data[8];
    uint8  Escl_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Escl_general_statusNeverReceFlag;
 #endif

   uint8 ESCL_TEXT_ROTATE_STEERING_WHEEL;
   uint8 ESCL_TEXT_GARAGE;
   uint8 ESCL_TEXT_STEERING_NOT_UNLOCKED;
   uint8 ESCL_TEXTDEECT;
   uint8 ESCL_LED_YELLOW;
   uint8 ESCL_LED_RED;
   uint8 ESCL_UNLOCKED;
   uint8 ESCL_LOCKED;
   uint8 ESCL_SERVICE_RELEVANT_FAILURE;
}escl_general_status_struct;

extern   escl_general_status_struct    escl_general_status;
#define  GET_ESCL_GENERAL_STATUS_MISSING_FLAG()    get_escl_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_ESCL_GENERAL_STATUS_NEVER_RECE_FLAG()    get_escl_general_status_never_reve_flag()
#endif

#define  GET_ESCL_TEXT_ROTATE_STEERING_WHEEL()    get_ESCL_TEXT_ROTATE_STEERING_WHEEL()
#define  GET_ESCL_TEXT_GARAGE()    get_ESCL_TEXT_GARAGE()
#define  GET_ESCL_TEXT_STEERING_NOT_UNLOCKED()    get_ESCL_TEXT_STEERING_NOT_UNLOCKED()
#define  GET_ESCL_TEXTDEECT()    get_ESCL_TEXTDEECT()
#define  GET_ESCL_LED_YELLOW()    get_ESCL_LED_YELLOW()
#define  GET_ESCL_LED_RED()    get_ESCL_LED_RED()
#define  GET_ESCL_UNLOCKED()    get_ESCL_UNLOCKED()
#define  GET_ESCL_LOCKED()    get_ESCL_LOCKED()
#define  GET_ESCL_SERVICE_RELEVANT_FAILURE()    get_ESCL_SERVICE_RELEVANT_FAILURE()

typedef struct
{
    uint8  data[8];
    uint8  Peps_general_status_2MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Peps_general_status_2NeverReceFlag;
 #endif

   uint8 MIU_MSG_REQ_N7;
   uint8 MIU_MSG_REQ_N6;
   uint8 MIU_MSG_REQ_N5;
   uint8 MIU_MSG_REQ_N4;
   uint8 MIU_MSG_REQ_N3;
   uint8 MIU_MSG_REQ_N2;
   uint8 MIU_MSG_REQ_N1;
   uint8 MIU_MSG_REQ_N0;
   uint8 MIU_MSG_REQ_N15;
   uint8 MIU_MSG_REQ_N14;
   uint8 MIU_MSG_REQ_N13;
   uint8 MIU_MSG_REQ_N12;
   uint8 MIU_MSG_REQ_N11;
   uint8 MIU_MSG_REQ_N10;
   uint8 MIU_MSG_REQ_N9;
   uint8 MIU_MSG_REQ_N8;
   uint8 MIU_MSG_REQ_N16;
}peps_general_status_2_struct;

extern   peps_general_status_2_struct    peps_general_status_2;
#define  GET_PEPS_GENERAL_STATUS_2_MISSING_FLAG()    get_peps_general_status_2_missing_flag()

#if  NeverReceFlagEN
#define  GET_PEPS_GENERAL_STATUS_2_NEVER_RECE_FLAG()    get_peps_general_status_2_never_reve_flag()
#endif

#define  GET_MIU_MSG_REQ_N7()    get_MIU_MSG_REQ_N7()
#define  GET_MIU_MSG_REQ_N6()    get_MIU_MSG_REQ_N6()
#define  GET_MIU_MSG_REQ_N5()    get_MIU_MSG_REQ_N5()
#define  GET_MIU_MSG_REQ_N4()    get_MIU_MSG_REQ_N4()
#define  GET_MIU_MSG_REQ_N3()    get_MIU_MSG_REQ_N3()
#define  GET_MIU_MSG_REQ_N2()    get_MIU_MSG_REQ_N2()
#define  GET_MIU_MSG_REQ_N1()    get_MIU_MSG_REQ_N1()
#define  GET_MIU_MSG_REQ_N0()    get_MIU_MSG_REQ_N0()
#define  GET_MIU_MSG_REQ_N15()    get_MIU_MSG_REQ_N15()
#define  GET_MIU_MSG_REQ_N14()    get_MIU_MSG_REQ_N14()
#define  GET_MIU_MSG_REQ_N13()    get_MIU_MSG_REQ_N13()
#define  GET_MIU_MSG_REQ_N12()    get_MIU_MSG_REQ_N12()
#define  GET_MIU_MSG_REQ_N11()    get_MIU_MSG_REQ_N11()
#define  GET_MIU_MSG_REQ_N10()    get_MIU_MSG_REQ_N10()
#define  GET_MIU_MSG_REQ_N9()    get_MIU_MSG_REQ_N9()
#define  GET_MIU_MSG_REQ_N8()    get_MIU_MSG_REQ_N8()
#define  GET_MIU_MSG_REQ_N16()    get_MIU_MSG_REQ_N16()

typedef struct
{
    uint8  data[8];
    uint8  Ems_engine_temp_and_barrometerMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ems_engine_temp_and_barrometerNeverReceFlag;
 #endif

   uint8 COOLANT_TEMPERATURE;
   uint8 VALID_COOLANT;
}ems_engine_temp_and_barrometer_struct;

extern   ems_engine_temp_and_barrometer_struct    ems_engine_temp_and_barrometer;
#define  GET_EMS_ENGINE_TEMP_AND_BARROMETER_MISSING_FLAG()    get_ems_engine_temp_and_barrometer_missing_flag()

#if  NeverReceFlagEN
#define  GET_EMS_ENGINE_TEMP_AND_BARROMETER_NEVER_RECE_FLAG()    get_ems_engine_temp_and_barrometer_never_reve_flag()
#endif

#define  GET_COOLANT_TEMPERATURE()    get_COOLANT_TEMPERATURE()
#define  GET_VALID_COOLANT()    get_VALID_COOLANT()

typedef struct
{
    uint8  data[8];
    uint8  Icm_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_general_statusNeverReceFlag;
 #endif

   uint8 DATA_VALID;
   uint8 AIRBAG_WARNINGLAMP_STATUS;
   uint8 NIGHT_PANEL;
   uint8 DATA_VALID_RHEOSTAT;
   uint8 WASHER_FLUID_LEVEL_LOW;
   uint8 ODOMETER_RESET_COUNTER_ICM;
   uint8 RHEOSTAT_LEVEL;
    uint32 DISPLAYED_TOTAL_DISTANCE;
   uint8 BATTERY_VOLTAGE_LEVEL;
   uint8 ODOMETER_OFFSET_ICM;
}icm_general_status_struct;

extern   icm_general_status_struct    icm_general_status;
#define  GET_ICM_GENERAL_STATUS_MISSING_FLAG()    get_icm_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_GENERAL_STATUS_NEVER_RECE_FLAG()    get_icm_general_status_never_reve_flag()
#endif

#define  GET_DATA_VALID()    get_DATA_VALID()
#define  GET_AIRBAG_WARNINGLAMP_STATUS()    get_AIRBAG_WARNINGLAMP_STATUS()
#define  GET_NIGHT_PANEL()    get_NIGHT_PANEL()
#define  GET_DATA_VALID_RHEOSTAT()    get_DATA_VALID_RHEOSTAT()
#define  GET_WASHER_FLUID_LEVEL_LOW()    get_WASHER_FLUID_LEVEL_LOW()
#define  GET_ODOMETER_RESET_COUNTER_ICM()    get_ODOMETER_RESET_COUNTER_ICM()
#define  GET_RHEOSTAT_LEVEL()    get_RHEOSTAT_LEVEL()
#define  GET_DISPLAYED_TOTAL_DISTANCE()    get_DISPLAYED_TOTAL_DISTANCE()
#define  GET_BATTERY_VOLTAGE_LEVEL()    get_BATTERY_VOLTAGE_LEVEL()
#define  GET_ODOMETER_OFFSET_ICM()    get_ODOMETER_OFFSET_ICM()

typedef struct
{
    uint8  data[8];
    uint8  Icm_general_status_2MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_general_status_2NeverReceFlag;
 #endif

   uint8 HAND_BRAKE_ICM;
   uint8 REMOTE_START_RESPONSE_ICM;
   uint8 FUELTANK_REMAINING;
}icm_general_status_2_struct;

extern   icm_general_status_2_struct    icm_general_status_2;
#define  GET_ICM_GENERAL_STATUS_2_MISSING_FLAG()    get_icm_general_status_2_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_GENERAL_STATUS_2_NEVER_RECE_FLAG()    get_icm_general_status_2_never_reve_flag()
#endif

#define  GET_HAND_BRAKE_ICM()    get_HAND_BRAKE_ICM()
#define  GET_REMOTE_START_RESPONSE_ICM()    get_REMOTE_START_RESPONSE_ICM()
#define  GET_FUELTANK_REMAINING()    get_FUELTANK_REMAINING()

typedef struct
{
    uint8  data[8];
    uint8  Ahl_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ahl_general_statusNeverReceFlag;
 #endif

   uint8 AHL_FAULT_STATUS;
}ahl_general_status_struct;

extern   ahl_general_status_struct    ahl_general_status;
#define  GET_AHL_GENERAL_STATUS_MISSING_FLAG()    get_ahl_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_AHL_GENERAL_STATUS_NEVER_RECE_FLAG()    get_ahl_general_status_never_reve_flag()
#endif

#define  GET_AHL_FAULT_STATUS()    get_AHL_FAULT_STATUS()

typedef struct
{
    uint8  data[8];
    uint8  Bcm_general_status_2MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Bcm_general_status_2NeverReceFlag;
 #endif

   uint8 POWER_MODE_BCM;
    uint32 EB_ODO;
   uint8 ODOMETER_OFFSET_BCM;
   uint8 EB_ODO_VALID;
   uint8 POWER_MODE_VALIDITY_BCM;
   uint8 ODOMETER_RESET_COUNTER_BCM;
}bcm_general_status_2_struct;

extern   bcm_general_status_2_struct    bcm_general_status_2;
#define  GET_BCM_GENERAL_STATUS_2_MISSING_FLAG()    get_bcm_general_status_2_missing_flag()

#if  NeverReceFlagEN
#define  GET_BCM_GENERAL_STATUS_2_NEVER_RECE_FLAG()    get_bcm_general_status_2_never_reve_flag()
#endif

#define  GET_POWER_MODE_BCM()    get_POWER_MODE_BCM()
#define  GET_EB_ODO()    get_EB_ODO()
#define  GET_ODOMETER_OFFSET_BCM()    get_ODOMETER_OFFSET_BCM()
#define  GET_EB_ODO_VALID()    get_EB_ODO_VALID()
#define  GET_POWER_MODE_VALIDITY_BCM()    get_POWER_MODE_VALIDITY_BCM()
#define  GET_ODOMETER_RESET_COUNTER_BCM()    get_ODOMETER_RESET_COUNTER_BCM()

typedef struct
{
    uint8  data[8];
    uint8  Icm_event_command_2MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_event_command_2NeverReceFlag;
 #endif

   uint8 FOLLOW_ME_HOME_SETTING;
   uint8 VSPEED_LOCKING;
   uint8 CUTOFF_UNLOCK_4_DOORS;
   uint8 LOCK_SUCCESS_SOUND;
   uint8 DRL_OPEN;
}icm_event_command_2_struct;

extern   icm_event_command_2_struct    icm_event_command_2;
#define  GET_ICM_EVENT_COMMAND_2_MISSING_FLAG()    get_icm_event_command_2_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_EVENT_COMMAND_2_NEVER_RECE_FLAG()    get_icm_event_command_2_never_reve_flag()
#endif

#define  GET_FOLLOW_ME_HOME_SETTING()    get_FOLLOW_ME_HOME_SETTING()
#define  GET_VSPEED_LOCKING()    get_VSPEED_LOCKING()
#define  GET_CUTOFF_UNLOCK_4_DOORS()    get_CUTOFF_UNLOCK_4_DOORS()
#define  GET_LOCK_SUCCESS_SOUND()    get_LOCK_SUCCESS_SOUND()
#define  GET_DRL_OPEN()    get_DRL_OPEN()

typedef struct
{
    uint8  data[8];
    uint8  Icm_general_status_3MissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_general_status_3NeverReceFlag;
 #endif

    uint16 INSTANT_FUEL_CONSUM;
    uint16 AVERAGE_FUEL_CONSUM;
    uint16 ENDURANCE_MILEAGE;
    uint16 REMAIN_MAINTAIN_MILEAGE;
}icm_general_status_3_struct;

extern   icm_general_status_3_struct    icm_general_status_3;
#define  GET_ICM_GENERAL_STATUS_3_MISSING_FLAG()    get_icm_general_status_3_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_GENERAL_STATUS_3_NEVER_RECE_FLAG()    get_icm_general_status_3_never_reve_flag()
#endif

#define  GET_INSTANT_FUEL_CONSUM()    get_INSTANT_FUEL_CONSUM()
#define  GET_AVERAGE_FUEL_CONSUM()    get_AVERAGE_FUEL_CONSUM()
#define  GET_ENDURANCE_MILEAGE()    get_ENDURANCE_MILEAGE()
#define  GET_REMAIN_MAINTAIN_MILEAGE()    get_REMAIN_MAINTAIN_MILEAGE()

typedef struct
{
    uint8  data[8];
    uint8  Tcu_engine_torque_requestMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Tcu_engine_torque_requestNeverReceFlag;
 #endif

   uint8 TRANSMISSION_OIL_TEMPERATURE;
}tcu_engine_torque_request_struct;

extern   tcu_engine_torque_request_struct    tcu_engine_torque_request;
#define  GET_TCU_ENGINE_TORQUE_REQUEST_MISSING_FLAG()    get_tcu_engine_torque_request_missing_flag()

#if  NeverReceFlagEN
#define  GET_TCU_ENGINE_TORQUE_REQUEST_NEVER_RECE_FLAG()    get_tcu_engine_torque_request_never_reve_flag()
#endif

#define  GET_TRANSMISSION_OIL_TEMPERATURE()    get_TRANSMISSION_OIL_TEMPERATURE()

typedef struct
{
    uint8  data[8];
    uint8  Ems_engine_speed_and_torqueMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ems_engine_speed_and_torqueNeverReceFlag;
 #endif

    uint16 ACTUAL_ENGINE_SPEED_UNFILTERED;
   uint8 VALID_ESPEED;
}ems_engine_speed_and_torque_struct;

extern   ems_engine_speed_and_torque_struct    ems_engine_speed_and_torque;
#define  GET_EMS_ENGINE_SPEED_AND_TORQUE_MISSING_FLAG()    get_ems_engine_speed_and_torque_missing_flag()

#if  NeverReceFlagEN
#define  GET_EMS_ENGINE_SPEED_AND_TORQUE_NEVER_RECE_FLAG()    get_ems_engine_speed_and_torque_never_reve_flag()
#endif

#define  GET_ACTUAL_ENGINE_SPEED_UNFILTERED()    get_ACTUAL_ENGINE_SPEED_UNFILTERED()
#define  GET_VALID_ESPEED()    get_VALID_ESPEED()

typedef struct
{
    uint8  data[8];
    uint8  Ems_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ems_general_statusNeverReceFlag;
 #endif

   uint8 EMS_ACTUAL_GEAR;
   uint8 BRAKE_STATUS_EMS;
   uint8 HAND_BRAKE_EMS;
   uint8 REQ_SHIFT_DOWN_TELLTALE;
   uint8 CRUISE_ACTIVE;
   uint8 ACTUAL_GEARBOX;
   uint8 VALID_BRAKE_STATUS_EMS;
   uint8 EMS_AUTHRESULT;
   uint8 REQ_CRUISE_TELLTALE;
   uint8 REQ_SHIFT_UP_TELLTALE;
   uint8 REQ_CHECK_ENGINE_TELLTALE;
   uint8 ENGINE_RUNNING;
   uint8 VALID_ACTUAL_GEAR_EMS;
}ems_general_status_struct;

extern   ems_general_status_struct    ems_general_status;
#define  GET_EMS_GENERAL_STATUS_MISSING_FLAG()    get_ems_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_EMS_GENERAL_STATUS_NEVER_RECE_FLAG()    get_ems_general_status_never_reve_flag()
#endif

#define  GET_EMS_ACTUAL_GEAR()    get_EMS_ACTUAL_GEAR()
#define  GET_BRAKE_STATUS_EMS()    get_BRAKE_STATUS_EMS()
#define  GET_HAND_BRAKE_EMS()    get_HAND_BRAKE_EMS()
#define  GET_REQ_SHIFT_DOWN_TELLTALE()    get_REQ_SHIFT_DOWN_TELLTALE()
#define  GET_CRUISE_ACTIVE()    get_CRUISE_ACTIVE()
#define  GET_ACTUAL_GEARBOX()    get_ACTUAL_GEARBOX()
#define  GET_VALID_BRAKE_STATUS_EMS()    get_VALID_BRAKE_STATUS_EMS()
#define  GET_EMS_AUTHRESULT()    get_EMS_AUTHRESULT()
#define  GET_REQ_CRUISE_TELLTALE()    get_REQ_CRUISE_TELLTALE()
#define  GET_REQ_SHIFT_UP_TELLTALE()    get_REQ_SHIFT_UP_TELLTALE()
#define  GET_REQ_CHECK_ENGINE_TELLTALE()    get_REQ_CHECK_ENGINE_TELLTALE()
#define  GET_ENGINE_RUNNING()    get_ENGINE_RUNNING()
#define  GET_VALID_ACTUAL_GEAR_EMS()    get_VALID_ACTUAL_GEAR_EMS()

typedef struct
{
    uint8  data[8];
    uint8  Ems_start_stopMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ems_start_stopNeverReceFlag;
 #endif

   uint8 SS_IDLE_STOP_STATUS;
   uint8 SS_SYS_STS;
   uint8 AUTO_STOP_REQUEST;
   uint8 ENG_SS_STS;
   uint8 SS_FAULT_LAMP;
   uint8 SS_ENABLE_LAMP;
}ems_start_stop_struct;

extern   ems_start_stop_struct    ems_start_stop;
#define  GET_EMS_START_STOP_MISSING_FLAG()    get_ems_start_stop_missing_flag()

#if  NeverReceFlagEN
#define  GET_EMS_START_STOP_NEVER_RECE_FLAG()    get_ems_start_stop_never_reve_flag()
#endif

#define  GET_SS_IDLE_STOP_STATUS()    get_SS_IDLE_STOP_STATUS()
#define  GET_SS_SYS_STS()    get_SS_SYS_STS()
#define  GET_AUTO_STOP_REQUEST()    get_AUTO_STOP_REQUEST()
#define  GET_ENG_SS_STS()    get_ENG_SS_STS()
#define  GET_SS_FAULT_LAMP()    get_SS_FAULT_LAMP()
#define  GET_SS_ENABLE_LAMP()    get_SS_ENABLE_LAMP()

typedef struct
{
    uint8  data[8];
    uint8  General_status_tcs_espMissingFlag;
 
#if  NeverReceFlagEN
    uint8  General_status_tcs_espNeverReceFlag;
 #endif

   uint8 REQ_TCS_ESP_FAILURE_TELLTALE;
   uint8 REQ_TCS_ESP_ACTIVE_TELLTALE;
   uint8 REQ_TCS_ESP_OFF_TELLTALE;
   uint8 REQ_EBD_TELLTALE;
   uint8 REQ_ABS_TELLTALE;
    uint16 ODOMETER_ROLLING;
}general_status_tcs_esp_struct;

extern   general_status_tcs_esp_struct    general_status_tcs_esp;
#define  GET_GENERAL_STATUS_TCS_ESP_MISSING_FLAG()    get_general_status_tcs_esp_missing_flag()

#if  NeverReceFlagEN
#define  GET_GENERAL_STATUS_TCS_ESP_NEVER_RECE_FLAG()    get_general_status_tcs_esp_never_reve_flag()
#endif

#define  GET_REQ_TCS_ESP_FAILURE_TELLTALE()    get_REQ_TCS_ESP_FAILURE_TELLTALE()
#define  GET_REQ_TCS_ESP_ACTIVE_TELLTALE()    get_REQ_TCS_ESP_ACTIVE_TELLTALE()
#define  GET_REQ_TCS_ESP_OFF_TELLTALE()    get_REQ_TCS_ESP_OFF_TELLTALE()
#define  GET_REQ_EBD_TELLTALE()    get_REQ_EBD_TELLTALE()
#define  GET_REQ_ABS_TELLTALE()    get_REQ_ABS_TELLTALE()
#define  GET_ODOMETER_ROLLING()    get_ODOMETER_ROLLING()

typedef struct
{
    uint8  data[8];
    uint8  Ecs_immo_rand_numberMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ecs_immo_rand_numberNeverReceFlag;
 #endif

   uint8 AUTH_RESULT;
   uint8 IMMO_SID;
}ecs_immo_rand_number_struct;

extern   ecs_immo_rand_number_struct    ecs_immo_rand_number;
#define  GET_ECS_IMMO_RAND_NUMBER_MISSING_FLAG()    get_ecs_immo_rand_number_missing_flag()

#if  NeverReceFlagEN
#define  GET_ECS_IMMO_RAND_NUMBER_NEVER_RECE_FLAG()    get_ecs_immo_rand_number_never_reve_flag()
#endif

#define  GET_AUTH_RESULT()    get_AUTH_RESULT()
#define  GET_IMMO_SID()    get_IMMO_SID()

typedef struct
{
    uint8  data[8];
    uint8  Icm_event_commandMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Icm_event_commandNeverReceFlag;
 #endif

   uint8 MIRROR_FADE_IN_OUT;
   uint8 MEMO_OUTSIDE_RMIRROR_GND_PSTN;
   uint8 OUTSIDE_RMIRROR_SEE_GROUND;
   uint8 PAS_SYSTEM_SWITCH;
   uint8 SVA_SYSTEM_SWITCH;
   uint8 MINUTES_MIU;
   uint8 TIME_MODE_MIU;
   uint8 WEEK_MIU;
   uint8 HOUR_MIU;
   uint8 MONTH_MIU;
   uint8 DAY_MIU;
   uint8 YEAR_MIU;
}icm_event_command_struct;

extern   icm_event_command_struct    icm_event_command;
#define  GET_ICM_EVENT_COMMAND_MISSING_FLAG()    get_icm_event_command_missing_flag()

#if  NeverReceFlagEN
#define  GET_ICM_EVENT_COMMAND_NEVER_RECE_FLAG()    get_icm_event_command_never_reve_flag()
#endif

#define  GET_MIRROR_FADE_IN_OUT()    get_MIRROR_FADE_IN_OUT()
#define  GET_MEMO_OUTSIDE_RMIRROR_GND_PSTN()    get_MEMO_OUTSIDE_RMIRROR_GND_PSTN()
#define  GET_OUTSIDE_RMIRROR_SEE_GROUND()    get_OUTSIDE_RMIRROR_SEE_GROUND()
#define  GET_PAS_SYSTEM_SWITCH()    get_PAS_SYSTEM_SWITCH()
#define  GET_SVA_SYSTEM_SWITCH()    get_SVA_SYSTEM_SWITCH()
#define  GET_MINUTES_MIU()    get_MINUTES_MIU()
#define  GET_TIME_MODE_MIU()    get_TIME_MODE_MIU()
#define  GET_WEEK_MIU()    get_WEEK_MIU()
#define  GET_HOUR_MIU()    get_HOUR_MIU()
#define  GET_MONTH_MIU()    get_MONTH_MIU()
#define  GET_DAY_MIU()    get_DAY_MIU()
#define  GET_YEAR_MIU()    get_YEAR_MIU()

typedef struct
{
    uint8  data[8];
    uint8  Eps_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Eps_statusNeverReceFlag;
 #endif

   uint8 STS_EPS_ACTIVE_STS;
   uint8 STS_EPS_FAULT_STS;
}eps_status_struct;

extern   eps_status_struct    eps_status;
#define  GET_EPS_STATUS_MISSING_FLAG()    get_eps_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_EPS_STATUS_NEVER_RECE_FLAG()    get_eps_status_never_reve_flag()
#endif

#define  GET_STS_EPS_ACTIVE_STS()    get_STS_EPS_ACTIVE_STS()
#define  GET_STS_EPS_FAULT_STS()    get_STS_EPS_FAULT_STS()

typedef struct
{
    uint8  data[8];
    uint8  Sdm_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Sdm_general_statusNeverReceFlag;
 #endif

   uint8 CHK_BELTS;
   uint8 AIRBAG_WARNINGLAMP;
   uint8 PASSENGER_AIRBAG_OFF;
   uint8 SEATBELT_PA_ATT;
   uint8 SEATBELT_DR_ATT;
}sdm_general_status_struct;

extern   sdm_general_status_struct    sdm_general_status;
#define  GET_SDM_GENERAL_STATUS_MISSING_FLAG()    get_sdm_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_SDM_GENERAL_STATUS_NEVER_RECE_FLAG()    get_sdm_general_status_never_reve_flag()
#endif

#define  GET_CHK_BELTS()    get_CHK_BELTS()
#define  GET_AIRBAG_WARNINGLAMP()    get_AIRBAG_WARNINGLAMP()
#define  GET_PASSENGER_AIRBAG_OFF()    get_PASSENGER_AIRBAG_OFF()
#define  GET_SEATBELT_PA_ATT()    get_SEATBELT_PA_ATT()
#define  GET_SEATBELT_DR_ATT()    get_SEATBELT_DR_ATT()

typedef struct
{
    uint8  data[8];
    uint8  Ems_engine_fuel_and_turboMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ems_engine_fuel_and_turboNeverReceFlag;
 #endif

    uint16 ENGINE_FUEAL_INJECTED;
   uint8 VALID_TURBO;
   uint8 TURBO_PRESENTATION;
   uint8 VALID_FUEL_INJ;
}ems_engine_fuel_and_turbo_struct;

extern   ems_engine_fuel_and_turbo_struct    ems_engine_fuel_and_turbo;
#define  GET_EMS_ENGINE_FUEL_AND_TURBO_MISSING_FLAG()    get_ems_engine_fuel_and_turbo_missing_flag()

#if  NeverReceFlagEN
#define  GET_EMS_ENGINE_FUEL_AND_TURBO_NEVER_RECE_FLAG()    get_ems_engine_fuel_and_turbo_never_reve_flag()
#endif

#define  GET_ENGINE_FUEAL_INJECTED()    get_ENGINE_FUEAL_INJECTED()
#define  GET_VALID_TURBO()    get_VALID_TURBO()
#define  GET_TURBO_PRESENTATION()    get_TURBO_PRESENTATION()
#define  GET_VALID_FUEL_INJ()    get_VALID_FUEL_INJ()

typedef struct
{
    uint8  data[8];
    uint8  Ems_engine_idle_and_vspeedMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Ems_engine_idle_and_vspeedNeverReceFlag;
 #endif

   uint8 VALID_VEHICLE_SPEED;
    uint16 VEHICLE_SPEED;
}ems_engine_idle_and_vspeed_struct;

extern   ems_engine_idle_and_vspeed_struct    ems_engine_idle_and_vspeed;
#define  GET_EMS_ENGINE_IDLE_AND_VSPEED_MISSING_FLAG()    get_ems_engine_idle_and_vspeed_missing_flag()

#if  NeverReceFlagEN
#define  GET_EMS_ENGINE_IDLE_AND_VSPEED_NEVER_RECE_FLAG()    get_ems_engine_idle_and_vspeed_never_reve_flag()
#endif

#define  GET_VALID_VEHICLE_SPEED()    get_VALID_VEHICLE_SPEED()
#define  GET_VEHICLE_SPEED()    get_VEHICLE_SPEED()

typedef struct
{
    uint8  data[8];
    uint8  Tcu_general_statusMissingFlag;
 
#if  NeverReceFlagEN
    uint8  Tcu_general_statusNeverReceFlag;
 #endif

   uint8 TCU_TARGET_GEAR;
   uint8 TCU_SELECTED_GEAR;
   uint8 REQ_MIL_ACTIVE;
   uint8 REQ_WINTER_TELLTALE;
   uint8 VALID_SELECTED_GEAR;
   uint8 REQ_SPORTS_TELLTALE;
   uint8 REQ_CHK_GEARBOX_TELLTALE;
   uint8 CHK_HIGH_OIL_TEMP;
   uint8 TRANS_SHIFT_PATTERN_STATUS;
   uint8 VALID_ACTUAL_GEAR_TCU;
   uint8 GEAR_INDICATION;
}tcu_general_status_struct;

extern   tcu_general_status_struct    tcu_general_status;
#define  GET_TCU_GENERAL_STATUS_MISSING_FLAG()    get_tcu_general_status_missing_flag()

#if  NeverReceFlagEN
#define  GET_TCU_GENERAL_STATUS_NEVER_RECE_FLAG()    get_tcu_general_status_never_reve_flag()
#endif

#define  GET_TCU_TARGET_GEAR()    get_TCU_TARGET_GEAR()
#define  GET_TCU_SELECTED_GEAR()    get_TCU_SELECTED_GEAR()
#define  GET_REQ_MIL_ACTIVE()    get_REQ_MIL_ACTIVE()
#define  GET_REQ_WINTER_TELLTALE()    get_REQ_WINTER_TELLTALE()
#define  GET_VALID_SELECTED_GEAR()    get_VALID_SELECTED_GEAR()
#define  GET_REQ_SPORTS_TELLTALE()    get_REQ_SPORTS_TELLTALE()
#define  GET_REQ_CHK_GEARBOX_TELLTALE()    get_REQ_CHK_GEARBOX_TELLTALE()
#define  GET_CHK_HIGH_OIL_TEMP()    get_CHK_HIGH_OIL_TEMP()
#define  GET_TRANS_SHIFT_PATTERN_STATUS()    get_TRANS_SHIFT_PATTERN_STATUS()
#define  GET_VALID_ACTUAL_GEAR_TCU()    get_VALID_ACTUAL_GEAR_TCU()
#define  GET_GEAR_INDICATION()    get_GEAR_INDICATION()
