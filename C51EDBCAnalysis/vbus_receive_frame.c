void vbus_receive_frame(uint16 frameID, uint8 *data)
{
   switch (frameID)
{

case 0x50:
 FRAME_DATA_HANDLE(ecs_immo_rand_number, Ecs_immo_rand_number);
break;

case 0x110:
 FRAME_DATA_HANDLE(tcu_engine_torque_request, Tcu_engine_torque_request);
break;

case 0x1a0:
 FRAME_DATA_HANDLE(ems_engine_speed_and_torque, Ems_engine_speed_and_torque);
break;

case 0x280:
 FRAME_DATA_HANDLE(ems_general_status, Ems_general_status);
break;

case 0x281:
 FRAME_DATA_HANDLE(ems_start_stop, Ems_start_stop);
break;

case 0x318:
 FRAME_DATA_HANDLE(general_status_tcs_esp, General_status_tcs_esp);
SetGeneral_status_tcs_espReceivedFlag();
break;

case 0x320:
 FRAME_DATA_HANDLE(icm_event_command, Icm_event_command);
break;

case 0x322:
 FRAME_DATA_HANDLE(eps_status, Eps_status);
break;

case 0x350:
 FRAME_DATA_HANDLE(sdm_general_status, Sdm_general_status);
break;

case 0x370:
 FRAME_DATA_HANDLE(ems_engine_fuel_and_turbo, Ems_engine_fuel_and_turbo);
SetEms_engine_fuel_and_turboReceivedFlag();
break;

case 0x3a0:
 FRAME_DATA_HANDLE(ems_engine_idle_and_vspeed, Ems_engine_idle_and_vspeed);
break;

case 0x3e0:
 FRAME_DATA_HANDLE(tcu_general_status, Tcu_general_status);
break;

case 0x4a0:
 FRAME_DATA_HANDLE(bcm_general_status, Bcm_general_status);
break;

case 0x511:
 FRAME_DATA_HANDLE(hum_time, Hum_time);
break;

case 0x530:
 FRAME_DATA_HANDLE(ac_control, Ac_control);
break;

case 0x540:
 FRAME_DATA_HANDLE(tpms_sys_status, Tpms_sys_status);
break;

case 0x570:
 FRAME_DATA_HANDLE(peps_general_status, Peps_general_status);
break;

case 0x571:
 FRAME_DATA_HANDLE(escl_general_status, Escl_general_status);
break;

case 0x580:
 FRAME_DATA_HANDLE(peps_general_status_2, Peps_general_status_2);
break;

case 0x592:
 FRAME_DATA_HANDLE(avm_general_status, Avm_general_status);
break;

case 0x5c0:
 FRAME_DATA_HANDLE(ems_engine_temp_and_barrometer, Ems_engine_temp_and_barrometer);
break;

case 0x630:
 FRAME_DATA_HANDLE(ahl_general_status, Ahl_general_status);
break;

case 0x660:
 FRAME_DATA_HANDLE(bcm_general_status_2, Bcm_general_status_2);
SetBcm_general_status_2ReceivedFlag();
break;

case 0x670:
 FRAME_DATA_HANDLE(hum_event_command_1, Hum_event_command_1);
break;
}
}
