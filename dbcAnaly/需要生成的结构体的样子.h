typedef struct
{
    UINT8  Mcu_0x430MissingFlag;
    #if  NeverReceFlagEN
    UINT8  Mcu_0x430NeverReceFlag;
    #endif
    UINT16 MCU_430_MOT_SPD;        
    UINT8 arr[8];
    
}mcu_0x430_struct;

extern   mcu_0x430_struct    mcu_0x430;
#define  GET_MCU_0X430_MISSING_FLAG()    get_mcu_0x430_missing_flag()
#define  GET_MCU_0X430_NEVER_RECE_FLAG()    get_mcu_0x430_never_reve_flag()
#define  GET_MCU_MOT_SPD()    get_MCU_MOT_SPD()