EXTERN void Setecs_immo_rand_numberMissingDefaultValue(void);
EXTERN void Settcu_engine_torque_requestMissingDefaultValue(void);
EXTERN void Setems_engine_speed_and_torqueMissingDefaultValue(void);
EXTERN void Setems_general_statusMissingDefaultValue(void);
EXTERN void Setems_start_stopMissingDefaultValue(void);
EXTERN void Setgeneral_status_tcs_espMissingDefaultValue(void);
EXTERN void Seticm_event_commandMissingDefaultValue(void);
EXTERN void Seteps_statusMissingDefaultValue(void);
EXTERN void Setsdm_general_statusMissingDefaultValue(void);
EXTERN void Setems_engine_fuel_and_turboMissingDefaultValue(void);
EXTERN void Setems_engine_idle_and_vspeedMissingDefaultValue(void);
EXTERN void Settcu_general_statusMissingDefaultValue(void);
EXTERN void Setbcm_general_statusMissingDefaultValue(void);
EXTERN void Sethum_timeMissingDefaultValue(void);
EXTERN void Setac_controlMissingDefaultValue(void);
EXTERN void Settpms_sys_statusMissingDefaultValue(void);
EXTERN void Setpeps_general_statusMissingDefaultValue(void);
EXTERN void Setescl_general_statusMissingDefaultValue(void);
EXTERN void Setpeps_general_status_2MissingDefaultValue(void);
EXTERN void Setavm_general_statusMissingDefaultValue(void);
EXTERN void Setems_engine_temp_and_barrometerMissingDefaultValue(void);
EXTERN void Setahl_general_statusMissingDefaultValue(void);
EXTERN void Setbcm_general_status_2MissingDefaultValue(void);
EXTERN void Sethum_event_command_1MissingDefaultValue(void);


void sendFrame(void)
{
    /**************send the 0x560*******************/
    send_icm_node_frame(INDEXNO0, 0x560, BUFFNO1, pas_general_status.data);
    /**************send the 0x620*******************/
    send_icm_node_frame(INDEXNO1, 0x620, BUFFNO2, icm_general_status.data);
    /**************send the 0x621*******************/
    send_icm_node_frame(INDEXNO2, 0x621, BUFFNO3, icm_general_status_2.data);
    /**************send the 0x6F1*******************/
    send_icm_node_frame(INDEXNO3, 0x6F1, BUFFNO4, icm_general_status_3.data);
    /**************send the 0x6F1*******************/
    send_icm_node_frame(INDEXNO3, 0x6F1, BUFFNO4, icm_general_status_3.data);
}




static void SchemeInitValue(void)
{
   Yank.nodetype = aString;
   Yank.a_string = YankString;
   Diab.nodetype = aString;
   Diab.a_string = DiabString;
   Inte2.nodetype = aInteger;
   Inte2.aintnum = 2;
   Inte1.nodetype = aInteger;
   Inte1.aintnum = 1;
   List0.nodetype = aList;
   List0.afront = &Yank;
   List0.aback = &Diab;

}
