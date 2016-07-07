
typedef struct
{
    UINT8  Vcu_0x212MissingFlag;
    UINT8  Vcu_0x212NeverReceFlag;
    union
    {
      struct
     {
      UINT8 VCU_0x212_res0:1;
      UINT8 VCU_0x212_res1:1;
      UINT8 VCU_0x212_res2:1;
      UINT8 VCU_0x212_res3:1;
      UINT8 VCU_0x212_res4:1;
      UINT8 VCU_0x212_res5:1;
      UINT8 VCU_0x212_res6:1;
      UINT8 VCU_0x212_res7:1;
      UINT8 VCU_0x212_res9:1;
      UINT8 VCU_0x212_res10:1;
      UINT8 VCU_0x212_res11:1;
      UINT8 VCU_0x212_res12:1;
      UINT8 VCU_0x212_res13:1;
      UINT8 VCU_0x212_res14:1;
      UINT8 VCU_0x212_res15:1;
      UINT8 VCU_0x212_res16:1;
      UINT8 VCU_0x212_res18:1;
      UINT8 VCU_0x212_res19:1;
      UINT8 VCU_0x212_res20:1;
      UINT8 VCU_0x212_res21:1;
      UINT8 VCU_0x212_res22:1;
      UINT8 VCU_0x212_res23:1;
      UINT8 VCU_0x212_res24:1;
      UINT8 VCU_0x212_res25:1;
      UINT8 VCU_0x212_res27:1;
      UINT8 VCU_0x212_res28:1;
      UINT8 VCU_0x212_res29:1;
      UINT8 VCU_0x212_res30:1;
      UINT8 VCU_0x212_res31:1;
      UINT8 VCU_0x212_res32:1;
      UINT8 VCU_0x212_res33:1;
      UINT8 VCU_0x212_res34:1;
      UINT8 VCU_0x212_res36:1;
      UINT8 VCU_0x212_res37:1;
      UINT8 VCU_212_SHIFT_POSITON:3;
      UINT8 VCU_0x212_res41:1;
      UINT8 VCU_212_SHIFT_ERROR_OP:1;
      UINT8 VCU_0x212_res43:1;
      UINT8 VCU_0x212_res45:1;
      UINT8 VCU_0x212_res46:1;
      UINT8 VCU_0x212_res47:1;
      UINT8 VCU_0x212_res48:1;
      UINT8 VCU_0x212_res49:1;
      UINT8 VCU_0x212_res50:1;
      UINT8 VCU_0x212_res51:1;
      UINT8 VCU_0x212_res52:1;
      UINT8 VCU_0x212_res54:1;
      UINT8 VCU_0x212_res55:1;
      UINT8 VCU_0x212_res56:1;
      UINT8 VCU_0x212_res57:1;
      UINT8 VCU_0x212_res58:1;
      UINT8 VCU_0x212_res59:1;
      UINT8 VCU_0x212_res60:1;
      UINT8 VCU_0x212_res61:1;
      UINT8 VCU_0x212_res63:1;
      UINT8 VCU_0x212_res64:1;
      UINT8 VCU_0x212_res65:1;
      UINT8 VCU_0x212_res66:1;
      UINT8 VCU_0x212_res67:1;
      UINT8 VCU_0x212_res68:1;
      UINT8 VCU_0x212_res69:1;
      UINT8 VCU_0x212_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}vcu_0x212_struct;

extern   vcu_0x212_struct    vcu_0x212;
#define  GET_VCU_0X212_MISSING_FLAG()    get_vcu_0x212_missing_flag()
#define  GET_VCU_0X212_NEVER_RECE_FLAG()    get_vcu_0x212_never_reve_flag()
#define  GET_VCU_SHIFT_POSITON()    get_VCU_SHIFT_POSITON()
#define  GET_VCU_SHIFT_ERROR_OP()    get_VCU_SHIFT_ERROR_OP()

typedef struct
{
    UINT8  Vcu_0x214MissingFlag;
    UINT8  Vcu_0x214NeverReceFlag;
    union
    {
      struct
     {
      UINT16 VCU_214_VEH_STATE:16;
      UINT8 VCU_0x214_res18:1;
      UINT8 VCU_0x214_res19:1;
      UINT8 VCU_0x214_res20:1;
      UINT8 VCU_0x214_res21:1;
      UINT8 VCU_0x214_res22:1;
      UINT8 VCU_0x214_res23:1;
      UINT8 VCU_0x214_res24:1;
      UINT8 VCU_0x214_res25:1;
      UINT8 VCU_0x214_res27:1;
      UINT8 VCU_0x214_res28:1;
      UINT8 VCU_0x214_res29:1;
      UINT8 VCU_0x214_res30:1;
      UINT8 VCU_214_REMOTE_SWITCH_STA:1;
      UINT8 VCU_0x214_res32:1;
      UINT8 VCU_0x214_res33:1;
      UINT8 VCU_0x214_res34:1;
      UINT8 VCU_0x214_res36:1;
      UINT8 VCU_0x214_res37:1;
      UINT8 VCU_0x214_res38:1;
      UINT8 VCU_0x214_res39:1;
      UINT8 VCU_0x214_res40:1;
      UINT8 VCU_0x214_res41:1;
      UINT8 VCU_0x214_res42:1;
      UINT8 VCU_0x214_res43:1;
      UINT8 VCU_0x214_res45:1;
      UINT8 VCU_0x214_res46:1;
      UINT8 VCU_0x214_res47:1;
      UINT8 VCU_0x214_res48:1;
      UINT8 VCU_0x214_res49:1;
      UINT8 VCU_0x214_res50:1;
      UINT8 VCU_0x214_res51:1;
      UINT8 VCU_0x214_res52:1;
      UINT8 VCU_0x214_res54:1;
      UINT8 VCU_0x214_res55:1;
      UINT8 VCU_0x214_res56:1;
      UINT8 VCU_0x214_res57:1;
      UINT8 VCU_0x214_res58:1;
      UINT8 VCU_0x214_res59:1;
      UINT8 VCU_0x214_res60:1;
      UINT8 VCU_0x214_res61:1;
      UINT8 VCU_0x214_res63:1;
      UINT8 VCU_0x214_res64:1;
      UINT8 VCU_0x214_res65:1;
      UINT8 VCU_0x214_res66:1;
      UINT8 VCU_0x214_res67:1;
      UINT8 VCU_0x214_res68:1;
      UINT8 VCU_0x214_res69:1;
      UINT8 VCU_0x214_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}vcu_0x214_struct;

extern   vcu_0x214_struct    vcu_0x214;
#define  GET_VCU_0X214_MISSING_FLAG()    get_vcu_0x214_missing_flag()
#define  GET_VCU_0X214_NEVER_RECE_FLAG()    get_vcu_0x214_never_reve_flag()
#define  GET_VCU_VEH_STATE()    get_VCU_VEH_STATE()
#define  GET_VCU_REMOTE_SWITCH_STA()    get_VCU_REMOTE_SWITCH_STA()

typedef struct
{
    UINT8  Abs_0x318MissingFlag;
    UINT8  Abs_0x318NeverReceFlag;
    union
    {
      struct
     {
      UINT8 ABS_0x318_res0:1;
      UINT8 ABS_0x318_res1:1;
      UINT8 ABS_0x318_res2:1;
      UINT8 ABS_0x318_res3:1;
      UINT8 ABS_0x318_res4:1;
      UINT8 ABS_0x318_res5:1;
      UINT8 ABS_0x318_res6:1;
      UINT8 ABS_0x318_res7:1;
      UINT8 ABS_0x318_res9:1;
      UINT8 ABS_0x318_res10:1;
      UINT8 ABS_0x318_res11:1;
      UINT8 ABS_0x318_res12:1;
      UINT8 ABS_0x318_res13:1;
      UINT8 ABS_0x318_res14:1;
      UINT8 ABS_0x318_res15:1;
      UINT8 ABS_0x318_res16:1;
      UINT8 ABS_0x318_res18:1;
      UINT8 ABS_0x318_res19:1;
      UINT8 ABS_0x318_res20:1;
      UINT8 ABS_0x318_res21:1;
      UINT8 ABS_318_EBDFail:1;
      UINT8 ABS_318_ABSFail:1;
      UINT8 ABS_318_ABSActive:1;
      UINT8 ABS_318_VehicleSpeedValid:1;
      UINT16 ABS_318_VehSpd:16;
      UINT8 ABS_0x318_res45:1;
      UINT8 ABS_0x318_res46:1;
      UINT8 ABS_0x318_res47:1;
      UINT8 ABS_0x318_res48:1;
      UINT8 ABS_0x318_res49:1;
      UINT8 ABS_0x318_res50:1;
      UINT8 ABS_0x318_res51:1;
      UINT8 ABS_0x318_res52:1;
      UINT8 ABS_0x318_res54:1;
      UINT8 ABS_0x318_res55:1;
      UINT8 ABS_0x318_res56:1;
      UINT8 ABS_0x318_res57:1;
      UINT8 ABS_0x318_res58:1;
      UINT8 ABS_0x318_res59:1;
      UINT8 ABS_0x318_res60:1;
      UINT8 ABS_0x318_res61:1;
      UINT8 ABS_0x318_res63:1;
      UINT8 ABS_0x318_res64:1;
      UINT8 ABS_0x318_res65:1;
      UINT8 ABS_0x318_res66:1;
      UINT8 ABS_0x318_res67:1;
      UINT8 ABS_0x318_res68:1;
      UINT8 ABS_0x318_res69:1;
      UINT8 ABS_0x318_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}abs_0x318_struct;

extern   abs_0x318_struct    abs_0x318;
#define  GET_ABS_0X318_MISSING_FLAG()    get_abs_0x318_missing_flag()
#define  GET_ABS_0X318_NEVER_RECE_FLAG()    get_abs_0x318_never_reve_flag()
#define  GET_ABS_VehSpd()    get_ABS_VehSpd()
#define  GET_ABS_VehicleSpeedValid()    get_ABS_VehicleSpeedValid()
#define  GET_ABS_ABSActive()    get_ABS_ABSActive()
#define  GET_ABS_ABSFail()    get_ABS_ABSFail()
#define  GET_ABS_EBDFail()    get_ABS_EBDFail()

typedef struct
{
    UINT8  Mcu_0x430MissingFlag;
    UINT8  Mcu_0x430NeverReceFlag;
    union
    {
      struct
     {
      UINT8 MCU_0x430_res0:1;
      UINT8 MCU_0x430_res1:1;
      UINT8 MCU_0x430_res2:1;
      UINT8 MCU_0x430_res3:1;
      UINT8 MCU_0x430_res4:1;
      UINT8 MCU_0x430_res5:1;
      UINT8 MCU_0x430_res6:1;
      UINT8 MCU_0x430_res7:1;
      UINT8 MCU_0x430_res9:1;
      UINT8 MCU_0x430_res10:1;
      UINT8 MCU_0x430_res11:1;
      UINT8 MCU_0x430_res12:1;
      UINT8 MCU_0x430_res13:1;
      UINT8 MCU_0x430_res14:1;
      UINT8 MCU_0x430_res15:1;
      UINT8 MCU_0x430_res16:1;
      UINT16 MCU_430_MOT_SPD:16;
      UINT8 MCU_0x430_res36:1;
      UINT8 MCU_0x430_res37:1;
      UINT8 MCU_0x430_res38:1;
      UINT8 MCU_0x430_res39:1;
      UINT8 MCU_0x430_res40:1;
      UINT8 MCU_0x430_res41:1;
      UINT8 MCU_0x430_res42:1;
      UINT8 MCU_0x430_res43:1;
      UINT8 MCU_0x430_res45:1;
      UINT8 MCU_0x430_res46:1;
      UINT8 MCU_0x430_res47:1;
      UINT8 MCU_0x430_res48:1;
      UINT8 MCU_0x430_res49:1;
      UINT8 MCU_0x430_res50:1;
      UINT8 MCU_0x430_res51:1;
      UINT8 MCU_0x430_res52:1;
      UINT8 MCU_0x430_res54:1;
      UINT8 MCU_0x430_res55:1;
      UINT8 MCU_0x430_res56:1;
      UINT8 MCU_0x430_res57:1;
      UINT8 MCU_0x430_res58:1;
      UINT8 MCU_0x430_res59:1;
      UINT8 MCU_0x430_res60:1;
      UINT8 MCU_0x430_res61:1;
      UINT8 MCU_0x430_res63:1;
      UINT8 MCU_0x430_res64:1;
      UINT8 MCU_0x430_res65:1;
      UINT8 MCU_0x430_res66:1;
      UINT8 MCU_0x430_res67:1;
      UINT8 MCU_0x430_res68:1;
      UINT8 MCU_0x430_res69:1;
      UINT8 MCU_0x430_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}mcu_0x430_struct;

extern   mcu_0x430_struct    mcu_0x430;
#define  GET_MCU_0X430_MISSING_FLAG()    get_mcu_0x430_missing_flag()
#define  GET_MCU_0X430_NEVER_RECE_FLAG()    get_mcu_0x430_never_reve_flag()
#define  GET_MCU_MOT_SPD()    get_MCU_MOT_SPD()

typedef struct
{
    UINT8  Bms_0x450MissingFlag;
    UINT8  Bms_0x450NeverReceFlag;
    union
    {
      struct
     {
      UINT8 BMS_0x450_res0:1;
      UINT8 BMS_0x450_res1:1;
      UINT8 BMS_0x450_res2:1;
      UINT8 BMS_0x450_res3:1;
      UINT8 BMS_0x450_res4:1;
      UINT8 BMS_0x450_res5:1;
      UINT8 BMS_0x450_res6:1;
      UINT8 BMS_0x450_res7:1;
      UINT8 BMS_450_BATT_SOC:8;
      UINT8 BMS_0x450_res18:1;
      UINT8 BMS_0x450_res19:1;
      UINT8 BMS_0x450_res20:1;
      UINT8 BMS_0x450_res21:1;
      UINT8 BMS_0x450_res22:1;
      UINT8 BMS_0x450_res23:1;
      UINT8 BMS_0x450_res24:1;
      UINT8 BMS_0x450_res25:1;
      UINT8 BMS_0x450_res27:1;
      UINT8 BMS_0x450_res28:1;
      UINT8 BMS_0x450_res29:1;
      UINT8 BMS_0x450_res30:1;
      UINT8 BMS_0x450_res31:1;
      UINT8 BMS_0x450_res32:1;
      UINT8 BMS_0x450_res33:1;
      UINT8 BMS_0x450_res34:1;
      UINT8 BMS_0x450_res36:1;
      UINT8 BMS_0x450_res37:1;
      UINT8 BMS_0x450_res38:1;
      UINT8 BMS_0x450_res39:1;
      UINT8 BMS_0x450_res40:1;
      UINT8 BMS_0x450_res41:1;
      UINT8 BMS_0x450_res42:1;
      UINT8 BMS_0x450_res43:1;
      UINT8 BMS_0x450_res45:1;
      UINT8 BMS_0x450_res46:1;
      UINT8 BMS_0x450_res47:1;
      UINT8 BMS_0x450_res48:1;
      UINT8 BMS_0x450_res49:1;
      UINT8 BMS_0x450_res50:1;
      UINT8 BMS_0x450_res51:1;
      UINT8 BMS_0x450_res52:1;
      UINT8 BMS_0x450_res54:1;
      UINT8 BMS_0x450_res55:1;
      UINT8 BMS_0x450_res56:1;
      UINT8 BMS_0x450_res57:1;
      UINT8 BMS_0x450_res58:1;
      UINT8 BMS_0x450_res59:1;
      UINT8 BMS_0x450_res60:1;
      UINT8 BMS_0x450_res61:1;
      UINT8 BMS_0x450_res63:1;
      UINT8 BMS_0x450_res64:1;
      UINT8 BMS_0x450_res65:1;
      UINT8 BMS_0x450_res66:1;
      UINT8 BMS_0x450_res67:1;
      UINT8 BMS_0x450_res68:1;
      UINT8 BMS_0x450_res69:1;
      UINT8 BMS_0x450_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}bms_0x450_struct;

extern   bms_0x450_struct    bms_0x450;
#define  GET_BMS_0X450_MISSING_FLAG()    get_bms_0x450_missing_flag()
#define  GET_BMS_0X450_NEVER_RECE_FLAG()    get_bms_0x450_never_reve_flag()
#define  GET_BMS_BATT_SOC()    get_BMS_BATT_SOC()

typedef struct
{
    UINT8  Bms_0x451MissingFlag;
    UINT8  Bms_0x451NeverReceFlag;
    union
    {
      struct
     {
      UINT8 BMS_0x451_res0:1;
      UINT8 BMS_0x451_res1:1;
      UINT8 BMS_0x451_res2:1;
      UINT8 BMS_0x451_res3:1;
      UINT8 BMS_0x451_res4:1;
      UINT8 BMS_0x451_res5:1;
      UINT8 BMS_0x451_res6:1;
      UINT8 BMS_0x451_res7:1;
      UINT8 BMS_0x451_res9:1;
      UINT8 BMS_0x451_res10:1;
      UINT8 BMS_0x451_res11:1;
      UINT8 BMS_0x451_res12:1;
      UINT8 BMS_0x451_res13:1;
      UINT8 BMS_0x451_res14:1;
      UINT8 BMS_0x451_res15:1;
      UINT8 BMS_0x451_res16:1;
      UINT16 BMS_451_BATT_CUR:16;
      UINT16 BMS_451_BATT_VOLT_V2:16;
      UINT8 BMS_0x451_res54:1;
      UINT8 BMS_0x451_res55:1;
      UINT8 BMS_0x451_res56:1;
      UINT8 BMS_0x451_res57:1;
      UINT8 BMS_0x451_res58:1;
      UINT8 BMS_0x451_res59:1;
      UINT8 BMS_0x451_res60:1;
      UINT8 BMS_0x451_res61:1;
      UINT8 BMS_0x451_res63:1;
      UINT8 BMS_0x451_res64:1;
      UINT8 BMS_0x451_res65:1;
      UINT8 BMS_0x451_res66:1;
      UINT8 BMS_0x451_res67:1;
      UINT8 BMS_0x451_res68:1;
      UINT8 BMS_0x451_res69:1;
      UINT8 BMS_0x451_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}bms_0x451_struct;

extern   bms_0x451_struct    bms_0x451;
#define  GET_BMS_0X451_MISSING_FLAG()    get_bms_0x451_missing_flag()
#define  GET_BMS_0X451_NEVER_RECE_FLAG()    get_bms_0x451_never_reve_flag()
#define  GET_BMS_BATT_CUR()    get_BMS_BATT_CUR()
#define  GET_BMS_BATT_VOLT_V2()    get_BMS_BATT_VOLT_V2()

typedef struct
{
    UINT8  Bms_0x458MissingFlag;
    UINT8  Bms_0x458NeverReceFlag;
    union
    {
      struct
     {
      UINT8 BMS_0x458_res0:1;
      UINT8 BMS_0x458_res1:1;
      UINT8 BMS_0x458_res2:1;
      UINT8 BMS_458_BATT_CHG_TYPE:2;
      UINT8 BMS_0x458_res5:1;
      UINT8 BMS_0x458_res6:1;
      UINT8 BMS_0x458_res7:1;
      UINT8 BMS_0x458_res9:1;
      UINT8 BMS_0x458_res10:1;
      UINT8 BMS_0x458_res11:1;
      UINT8 BMS_0x458_res12:1;
      UINT8 BMS_0x458_res13:1;
      UINT8 BMS_0x458_res14:1;
      UINT8 BMS_0x458_res15:1;
      UINT8 BMS_0x458_res16:1;
      UINT8 BMS_0x458_res18:1;
      UINT8 BMS_0x458_res19:1;
      UINT8 BMS_0x458_res20:1;
      UINT8 BMS_0x458_res21:1;
      UINT8 BMS_0x458_res22:1;
      UINT8 BMS_0x458_res23:1;
      UINT8 BMS_0x458_res24:1;
      UINT8 BMS_0x458_res25:1;
      UINT8 BMS_0x458_res27:1;
      UINT8 BMS_0x458_res28:1;
      UINT8 BMS_0x458_res29:1;
      UINT8 BMS_0x458_res30:1;
      UINT8 BMS_0x458_res31:1;
      UINT8 BMS_0x458_res32:1;
      UINT8 BMS_0x458_res33:1;
      UINT8 BMS_0x458_res34:1;
      UINT8 BMS_0x458_res36:1;
      UINT8 BMS_0x458_res37:1;
      UINT8 BMS_0x458_res38:1;
      UINT8 BMS_0x458_res39:1;
      UINT8 BMS_0x458_res40:1;
      UINT8 BMS_0x458_res41:1;
      UINT8 BMS_0x458_res42:1;
      UINT8 BMS_0x458_res43:1;
      UINT8 BMS_0x458_res45:1;
      UINT8 BMS_0x458_res46:1;
      UINT8 BMS_0x458_res47:1;
      UINT8 BMS_0x458_res48:1;
      UINT8 BMS_0x458_res49:1;
      UINT8 BMS_0x458_res50:1;
      UINT8 BMS_0x458_res51:1;
      UINT8 BMS_0x458_res52:1;
      UINT8 BMS_0x458_res54:1;
      UINT8 BMS_0x458_res55:1;
      UINT8 BMS_0x458_res56:1;
      UINT8 BMS_0x458_res57:1;
      UINT8 BMS_0x458_res58:1;
      UINT8 BMS_0x458_res59:1;
      UINT8 BMS_0x458_res60:1;
      UINT8 BMS_0x458_res61:1;
      UINT8 BMS_0x458_res63:1;
      UINT8 BMS_0x458_res64:1;
      UINT8 BMS_0x458_res65:1;
      UINT8 BMS_0x458_res66:1;
      UINT8 BMS_0x458_res67:1;
      UINT8 BMS_0x458_res68:1;
      UINT8 BMS_0x458_res69:1;
      UINT8 BMS_0x458_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}bms_0x458_struct;

extern   bms_0x458_struct    bms_0x458;
#define  GET_BMS_0X458_MISSING_FLAG()    get_bms_0x458_missing_flag()
#define  GET_BMS_0X458_NEVER_RECE_FLAG()    get_bms_0x458_never_reve_flag()
#define  GET_BMS_BATT_CHG_TYPE()    get_BMS_BATT_CHG_TYPE()

typedef struct
{
    UINT8  Eps_0x470MissingFlag;
    UINT8  Eps_0x470NeverReceFlag;
    union
    {
      struct
     {
      UINT8 EPS_0x470_res0:1;
      UINT8 EPS_470_EPS_STA:2;
      UINT8 EPS_0x470_res3:1;
      UINT8 EPS_0x470_res4:1;
      UINT8 EPS_0x470_res5:1;
      UINT8 EPS_0x470_res6:1;
      UINT8 EPS_0x470_res7:1;
      UINT8 EPS_0x470_res9:1;
      UINT8 EPS_0x470_res10:1;
      UINT8 EPS_0x470_res11:1;
      UINT8 EPS_0x470_res12:1;
      UINT8 EPS_0x470_res13:1;
      UINT8 EPS_0x470_res14:1;
      UINT8 EPS_0x470_res15:1;
      UINT8 EPS_0x470_res16:1;
      UINT8 EPS_0x470_res18:1;
      UINT8 EPS_0x470_res19:1;
      UINT8 EPS_0x470_res20:1;
      UINT8 EPS_0x470_res21:1;
      UINT8 EPS_0x470_res22:1;
      UINT8 EPS_0x470_res23:1;
      UINT8 EPS_0x470_res24:1;
      UINT8 EPS_0x470_res25:1;
      UINT8 EPS_0x470_res27:1;
      UINT8 EPS_0x470_res28:1;
      UINT8 EPS_0x470_res29:1;
      UINT8 EPS_0x470_res30:1;
      UINT8 EPS_0x470_res31:1;
      UINT8 EPS_0x470_res32:1;
      UINT8 EPS_0x470_res33:1;
      UINT8 EPS_0x470_res34:1;
      UINT8 EPS_0x470_res36:1;
      UINT8 EPS_0x470_res37:1;
      UINT8 EPS_0x470_res38:1;
      UINT8 EPS_0x470_res39:1;
      UINT8 EPS_0x470_res40:1;
      UINT8 EPS_0x470_res41:1;
      UINT8 EPS_0x470_res42:1;
      UINT8 EPS_0x470_res43:1;
      UINT8 EPS_0x470_res45:1;
      UINT8 EPS_0x470_res46:1;
      UINT8 EPS_0x470_res47:1;
      UINT8 EPS_0x470_res48:1;
      UINT8 EPS_0x470_res49:1;
      UINT8 EPS_0x470_res50:1;
      UINT8 EPS_0x470_res51:1;
      UINT8 EPS_0x470_res52:1;
      UINT8 EPS_0x470_res54:1;
      UINT8 EPS_0x470_res55:1;
      UINT8 EPS_0x470_res56:1;
      UINT8 EPS_0x470_res57:1;
      UINT8 EPS_0x470_res58:1;
      UINT8 EPS_0x470_res59:1;
      UINT8 EPS_0x470_res60:1;
      UINT8 EPS_0x470_res61:1;
      UINT8 EPS_0x470_res63:1;
      UINT8 EPS_0x470_res64:1;
      UINT8 EPS_0x470_res65:1;
      UINT8 EPS_0x470_res66:1;
      UINT8 EPS_0x470_res67:1;
      UINT8 EPS_0x470_res68:1;
      UINT8 EPS_0x470_res69:1;
      UINT8 EPS_0x470_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}eps_0x470_struct;

extern   eps_0x470_struct    eps_0x470;
#define  GET_EPS_0X470_MISSING_FLAG()    get_eps_0x470_missing_flag()
#define  GET_EPS_0X470_NEVER_RECE_FLAG()    get_eps_0x470_never_reve_flag()
#define  GET_EPS_EPS_STA()    get_EPS_EPS_STA()

typedef struct
{
    UINT8  Epb_0x4c8MissingFlag;
    UINT8  Epb_0x4c8NeverReceFlag;
    union
    {
      struct
     {
      UINT8 EPB_4C8_EPB_ParkLampState:2;
      UINT8 EPB_4C8_EPB_WarningLampState:2;
      UINT8 EPB_0x4C8_res4:1;
      UINT8 EPB_0x4C8_res5:1;
      UINT8 EPB_0x4C8_res6:1;
      UINT8 EPB_0x4C8_res7:1;
      UINT8 EPB_0x4C8_res9:1;
      UINT8 EPB_0x4C8_res10:1;
      UINT8 EPB_0x4C8_res11:1;
      UINT8 EPB_0x4C8_res12:1;
      UINT8 EPB_0x4C8_res13:1;
      UINT8 EPB_0x4C8_res14:1;
      UINT8 EPB_0x4C8_res15:1;
      UINT8 EPB_0x4C8_res16:1;
      UINT8 EPB_0x4C8_res18:1;
      UINT8 EPB_0x4C8_res19:1;
      UINT8 EPB_0x4C8_res20:1;
      UINT8 EPB_0x4C8_res21:1;
      UINT8 EPB_0x4C8_res22:1;
      UINT8 EPB_0x4C8_res23:1;
      UINT8 EPB_0x4C8_res24:1;
      UINT8 EPB_0x4C8_res25:1;
      UINT8 EPB_0x4C8_res27:1;
      UINT8 EPB_0x4C8_res28:1;
      UINT8 EPB_0x4C8_res29:1;
      UINT8 EPB_0x4C8_res30:1;
      UINT8 EPB_0x4C8_res31:1;
      UINT8 EPB_0x4C8_res32:1;
      UINT8 EPB_0x4C8_res33:1;
      UINT8 EPB_0x4C8_res34:1;
      UINT8 EPB_0x4C8_res36:1;
      UINT8 EPB_0x4C8_res37:1;
      UINT8 EPB_0x4C8_res38:1;
      UINT8 EPB_0x4C8_res39:1;
      UINT8 EPB_0x4C8_res40:1;
      UINT8 EPB_0x4C8_res41:1;
      UINT8 EPB_0x4C8_res42:1;
      UINT8 EPB_0x4C8_res43:1;
      UINT8 EPB_0x4C8_res45:1;
      UINT8 EPB_0x4C8_res46:1;
      UINT8 EPB_0x4C8_res47:1;
      UINT8 EPB_0x4C8_res48:1;
      UINT8 EPB_0x4C8_res49:1;
      UINT8 EPB_0x4C8_res50:1;
      UINT8 EPB_0x4C8_res51:1;
      UINT8 EPB_0x4C8_res52:1;
      UINT8 EPB_0x4C8_res54:1;
      UINT8 EPB_0x4C8_res55:1;
      UINT8 EPB_0x4C8_res56:1;
      UINT8 EPB_0x4C8_res57:1;
      UINT8 EPB_0x4C8_res58:1;
      UINT8 EPB_0x4C8_res59:1;
      UINT8 EPB_0x4C8_res60:1;
      UINT8 EPB_0x4C8_res61:1;
      UINT8 EPB_0x4C8_res63:1;
      UINT8 EPB_0x4C8_res64:1;
      UINT8 EPB_0x4C8_res65:1;
      UINT8 EPB_0x4C8_res66:1;
      UINT8 EPB_0x4C8_res67:1;
      UINT8 EPB_0x4C8_res68:1;
      UINT8 EPB_0x4C8_res69:1;
      UINT8 EPB_0x4C8_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}epb_0x4c8_struct;

extern   epb_0x4c8_struct    epb_0x4c8;
#define  GET_EPB_0X4C8_MISSING_FLAG()    get_epb_0x4c8_missing_flag()
#define  GET_EPB_0X4C8_NEVER_RECE_FLAG()    get_epb_0x4c8_never_reve_flag()
#define  GET_EPB_EPB_ParkLampState()    get_EPB_EPB_ParkLampState()
#define  GET_EPB_EPB_WarningLampState()    get_EPB_EPB_WarningLampState()

typedef struct
{
    UINT8  Ecc_0x4e0MissingFlag;
    UINT8  Ecc_0x4e0NeverReceFlag;
    union
    {
      struct
     {
      UINT8 ECC_0x4E0_res0:1;
      UINT8 ECC_0x4E0_res1:1;
      UINT8 ECC_0x4E0_res2:1;
      UINT8 ECC_0x4E0_res3:1;
      UINT8 ECC_0x4E0_res4:1;
      UINT8 ECC_0x4E0_res5:1;
      UINT8 ECC_0x4E0_res6:1;
      UINT8 ECC_0x4E0_res7:1;
      UINT8 ECC_0x4E0_res9:1;
      UINT8 ECC_0x4E0_res10:1;
      UINT8 ECC_0x4E0_res11:1;
      UINT8 ECC_0x4E0_res12:1;
      UINT8 ECC_0x4E0_res13:1;
      UINT8 ECC_0x4E0_res14:1;
      UINT8 ECC_0x4E0_res15:1;
      UINT8 ECC_0x4E0_res16:1;
      UINT8 ECC_4E0_OUT_TEMP:8;
      UINT8 ECC_0x4E0_res27:1;
      UINT8 ECC_0x4E0_res28:1;
      UINT8 ECC_0x4E0_res29:1;
      UINT8 ECC_0x4E0_res30:1;
      UINT8 ECC_0x4E0_res31:1;
      UINT8 ECC_0x4E0_res32:1;
      UINT8 ECC_0x4E0_res33:1;
      UINT8 ECC_0x4E0_res34:1;
      UINT8 ECC_0x4E0_res36:1;
      UINT8 ECC_0x4E0_res37:1;
      UINT8 ECC_0x4E0_res38:1;
      UINT8 ECC_0x4E0_res39:1;
      UINT8 ECC_0x4E0_res40:1;
      UINT8 ECC_0x4E0_res41:1;
      UINT8 ECC_0x4E0_res42:1;
      UINT8 ECC_0x4E0_res43:1;
      UINT8 ECC_0x4E0_res45:1;
      UINT8 ECC_0x4E0_res46:1;
      UINT8 ECC_0x4E0_res47:1;
      UINT8 ECC_0x4E0_res48:1;
      UINT8 ECC_0x4E0_res49:1;
      UINT8 ECC_0x4E0_res50:1;
      UINT8 ECC_0x4E0_res51:1;
      UINT8 ECC_0x4E0_res52:1;
      UINT8 ECC_0x4E0_res54:1;
      UINT8 ECC_0x4E0_res55:1;
      UINT8 ECC_0x4E0_res56:1;
      UINT8 ECC_0x4E0_res57:1;
      UINT8 ECC_0x4E0_res58:1;
      UINT8 ECC_0x4E0_res59:1;
      UINT8 ECC_0x4E0_res60:1;
      UINT8 ECC_0x4E0_res61:1;
      UINT8 ECC_0x4E0_res63:1;
      UINT8 ECC_0x4E0_res64:1;
      UINT8 ECC_0x4E0_res65:1;
      UINT8 ECC_0x4E0_res66:1;
      UINT8 ECC_0x4E0_res67:1;
      UINT8 ECC_0x4E0_res68:1;
      UINT8 ECC_0x4E0_res69:1;
      UINT8 ECC_0x4E0_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}ecc_0x4e0_struct;

extern   ecc_0x4e0_struct    ecc_0x4e0;
#define  GET_ECC_0X4E0_MISSING_FLAG()    get_ecc_0x4e0_missing_flag()
#define  GET_ECC_0X4E0_NEVER_RECE_FLAG()    get_ecc_0x4e0_never_reve_flag()
#define  GET_ECC_OUT_TEMP()    get_ECC_OUT_TEMP()

typedef struct
{
    UINT8  Ehu_0x585MissingFlag;
    UINT8  Ehu_0x585NeverReceFlag;
    union
    {
      struct
     {
      UINT8 EHU_0x585_res0:1;
      UINT8 EHU_0x585_res1:1;
      UINT8 EHU_0x585_res2:1;
      UINT8 EHU_0x585_res3:1;
      UINT8 EHU_0x585_res4:1;
      UINT8 EHU_0x585_res5:1;
      UINT8 EHU_0x585_res6:1;
      UINT8 EHU_0x585_res7:1;
      UINT8 EHU_0x585_res9:1;
      UINT8 EHU_0x585_res10:1;
      UINT8 EHU_0x585_res11:1;
      UINT8 EHU_0x585_res12:1;
      UINT8 EHU_0x585_res13:1;
      UINT8 EHU_0x585_res14:1;
      UINT8 EHU_0x585_res15:1;
      UINT8 EHU_0x585_res16:1;
      UINT8 EHU_0x585_res18:1;
      UINT8 EHU_0x585_res19:1;
      UINT8 EHU_0x585_res20:1;
      UINT8 EHU_0x585_res21:1;
      UINT8 EHU_0x585_res22:1;
      UINT8 EHU_0x585_res23:1;
      UINT8 EHU_0x585_res24:1;
      UINT8 EHU_0x585_res25:1;
      UINT8 EHU_0x585_res27:1;
      UINT8 EHU_0x585_res28:1;
      UINT8 EHU_0x585_res29:1;
      UINT8 EHU_0x585_res30:1;
      UINT8 EHU_0x585_res31:1;
      UINT8 EHU_0x585_res32:1;
      UINT8 EHU_0x585_res33:1;
      UINT8 EHU_0x585_res34:1;
      UINT8 EHU_0x585_res36:1;
      UINT8 EHU_0x585_res37:1;
      UINT8 EHU_0x585_res38:1;
      UINT8 EHU_0x585_res39:1;
      UINT8 EHU_0x585_res40:1;
      UINT8 EHU_0x585_res41:1;
      UINT8 EHU_0x585_res42:1;
      UINT8 EHU_0x585_res43:1;
      UINT8 EHU_0x585_res45:1;
      UINT8 EHU_0x585_res46:1;
      UINT8 EHU_0x585_res47:1;
      UINT8 EHU_0x585_res48:1;
      UINT8 EHU_0x585_res49:1;
      UINT8 EHU_0x585_res50:1;
      UINT8 EHU_0x585_res51:1;
      UINT8 EHU_0x585_res52:1;
      UINT8 EHU_585_EHU_Theme:2;
      UINT8 EHU_585_EHU_State:2;
      UINT8 EHU_0x585_res58:1;
      UINT8 EHU_0x585_res59:1;
      UINT8 EHU_0x585_res60:1;
      UINT8 EHU_0x585_res61:1;
      UINT8 EHU_0x585_res63:1;
      UINT8 EHU_0x585_res64:1;
      UINT8 EHU_0x585_res65:1;
      UINT8 EHU_0x585_res66:1;
      UINT8 EHU_0x585_res67:1;
      UINT8 EHU_0x585_res68:1;
      UINT8 EHU_0x585_res69:1;
      UINT8 EHU_0x585_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}ehu_0x585_struct;

extern   ehu_0x585_struct    ehu_0x585;
#define  GET_EHU_0X585_MISSING_FLAG()    get_ehu_0x585_missing_flag()
#define  GET_EHU_0X585_NEVER_RECE_FLAG()    get_ehu_0x585_never_reve_flag()
#define  GET_EHU_EHU_Theme()    get_EHU_EHU_Theme()
#define  GET_EHU_EHU_State()    get_EHU_EHU_State()

typedef struct
{
    UINT8  Vcu_0x611MissingFlag;
    UINT8  Vcu_0x611NeverReceFlag;
    union
    {
      struct
     {
      UINT8 VCU_0x611_res0:1;
      UINT8 VCU_0x611_res1:1;
      UINT8 VCU_0x611_res2:1;
      UINT8 VCU_611_READY_LAMP:1;
      UINT8 VCU_0x611_res4:1;
      UINT8 VCU_611_PARKING_IND:1;
      UINT8 VCU_611_BATT_PWRON:1;
      UINT8 VCU_0x611_res7:1;
      UINT8 VCU_0x611_res9:1;
      UINT8 VCU_0x611_res10:1;
      UINT8 VCU_611_FAULT_ALARM:2;
      UINT8 VCU_611_CHARG_CONNECT_LAMP:1;
      UINT8 VCU_611_Batt_FAULT_IND:1;
      UINT8 VCU_0x611_res15:1;
      UINT8 VCU_0x611_res16:1;
      UINT8 VCU_0x611_res18:1;
      UINT8 VCU_0x611_res19:1;
      UINT8 VCU_0x611_res20:1;
      UINT8 VCU_0x611_res21:1;
      UINT8 VCU_0x611_res22:1;
      UINT8 VCU_0x611_res23:1;
      UINT8 VCU_0x611_res24:1;
      UINT8 VCU_0x611_res25:1;
      UINT8 VCU_611_LIMP_LAMP:1;
      UINT8 VCU_611_VEH_INSULATION_FAULT_IND:1;
      UINT8 VCU_0x611_res29:1;
      UINT8 VCU_611_MOT_TEMP_H_IND:1;
      UINT8 VCU_611_BATT_FAULT_IND:1;
      UINT8 VCU_611_MOT_FAULT_IND:1;
      UINT8 VCU_611_BRAKE_FAULT_IND:1;
      UINT8 VCU_0x611_res34:1;
      UINT8 VCU_0x611_res36:1;
      UINT8 VCU_0x611_res37:1;
      UINT8 VCU_0x611_res38:1;
      UINT8 VCU_611_N_START_REQ:1;
      UINT8 VCU_0x611_res40:1;
      UINT8 VCU_0x611_res41:1;
      UINT8 VCU_0x611_res42:1;
      UINT8 VCU_0x611_res43:1;
      UINT8 VCU_0x611_res45:1;
      UINT8 VCU_0x611_res46:1;
      UINT8 VCU_0x611_res47:1;
      UINT8 VCU_0x611_res48:1;
      UINT8 VCU_0x611_res49:1;
      UINT8 VCU_0x611_res50:1;
      UINT8 VCU_0x611_res51:1;
      UINT8 VCU_0x611_res52:1;
      UINT8 VCU_611_VEH_MODE:8;
      UINT8 VCU_611_MOT_FAULT_LAMP:2;
      UINT8 VCU_611_BATT_FAULT_LAMP:1;
      UINT8 VCU_611_MOT_SYS_TEMP_HIGH_LAMP:1;
      UINT8 VCU_611_CHG_REMIND_LAMP:1;
      UINT8 VCU_0x611_res68:1;
      UINT8 VCU_0x611_res69:1;
      UINT8 VCU_0x611_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}vcu_0x611_struct;

extern   vcu_0x611_struct    vcu_0x611;
#define  GET_VCU_0X611_MISSING_FLAG()    get_vcu_0x611_missing_flag()
#define  GET_VCU_0X611_NEVER_RECE_FLAG()    get_vcu_0x611_never_reve_flag()
#define  GET_VCU_READY_LAMP()    get_VCU_READY_LAMP()
#define  GET_VCU_PARKING_IND()    get_VCU_PARKING_IND()
#define  GET_VCU_BATT_PWRON()    get_VCU_BATT_PWRON()
#define  GET_VCU_FAULT_ALARM()    get_VCU_FAULT_ALARM()
#define  GET_VCU_CHARG_CONNECT_LAMP()    get_VCU_CHARG_CONNECT_LAMP()
#define  GET_VCU_Batt_FAULT_IND()    get_VCU_Batt_FAULT_IND()
#define  GET_VCU_LIMP_LAMP()    get_VCU_LIMP_LAMP()
#define  GET_VCU_VEH_INSULATION_FAULT_IND()    get_VCU_VEH_INSULATION_FAULT_IND()
#define  GET_VCU_MOT_TEMP_H_IND()    get_VCU_MOT_TEMP_H_IND()
#define  GET_VCU_BATT_FAULT_IND()    get_VCU_BATT_FAULT_IND()
#define  GET_VCU_MOT_FAULT_IND()    get_VCU_MOT_FAULT_IND()
#define  GET_VCU_BRAKE_FAULT_IND()    get_VCU_BRAKE_FAULT_IND()
#define  GET_VCU_N_START_REQ()    get_VCU_N_START_REQ()
#define  GET_VCU_VEH_MODE()    get_VCU_VEH_MODE()
#define  GET_VCU_MOT_FAULT_LAMP()    get_VCU_MOT_FAULT_LAMP()
#define  GET_VCU_BATT_FAULT_LAMP()    get_VCU_BATT_FAULT_LAMP()
#define  GET_VCU_MOT_SYS_TEMP_HIGH_LAMP()    get_VCU_MOT_SYS_TEMP_HIGH_LAMP()
#define  GET_VCU_CHG_REMIND_LAMP()    get_VCU_CHG_REMIND_LAMP()

typedef struct
{
    UINT8  Vcu_0x615MissingFlag;
    UINT8  Vcu_0x615NeverReceFlag;
    union
    {
      struct
     {
      UINT8 VCU_0x615_res0:1;
      UINT8 VCU_0x615_res1:1;
      UINT8 VCU_0x615_res2:1;
      UINT8 VCU_0x615_res3:1;
      UINT8 VCU_0x615_res4:1;
      UINT8 VCU_0x615_res5:1;
      UINT8 VCU_0x615_res6:1;
      UINT8 VCU_0x615_res7:1;
      UINT8 VCU_0x615_res9:1;
      UINT8 VCU_0x615_res10:1;
      UINT8 VCU_0x615_res11:1;
      UINT8 VCU_0x615_res12:1;
      UINT8 VCU_0x615_res13:1;
      UINT8 VCU_0x615_res14:1;
      UINT8 VCU_0x615_res15:1;
      UINT8 VCU_0x615_res16:1;
      UINT8 VCU_0x615_res18:1;
      UINT8 VCU_0x615_res19:1;
      UINT8 VCU_0x615_res20:1;
      UINT8 VCU_0x615_res21:1;
      UINT8 VCU_0x615_res22:1;
      UINT8 VCU_0x615_res23:1;
      UINT8 VCU_0x615_res24:1;
      UINT8 VCU_0x615_res25:1;
      UINT8 VCU_0x615_res27:1;
      UINT8 VCU_0x615_res28:1;
      UINT8 VCU_0x615_res29:1;
      UINT8 VCU_0x615_res30:1;
      UINT8 VCU_0x615_res31:1;
      UINT8 VCU_0x615_res32:1;
      UINT8 VCU_0x615_res33:1;
      UINT8 VCU_0x615_res34:1;
      UINT8 VCU_0x615_res36:1;
      UINT8 VCU_0x615_res37:1;
      UINT8 VCU_0x615_res38:1;
      UINT8 VCU_0x615_res39:1;
      UINT8 VCU_0x615_res40:1;
      UINT8 VCU_0x615_res41:1;
      UINT8 VCU_0x615_res42:1;
      UINT8 VCU_0x615_res43:1;
      UINT8 VCU_0x615_res45:1;
      UINT8 VCU_0x615_res46:1;
      UINT8 VCU_0x615_res47:1;
      UINT8 VCU_0x615_res48:1;
      UINT8 VCU_0x615_res49:1;
      UINT8 VCU_0x615_res50:1;
      UINT8 VCU_0x615_res51:1;
      UINT8 VCU_0x615_res52:1;
      UINT16 VCU_615_ENERGY_CONSUM_AV:16;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}vcu_0x615_struct;

extern   vcu_0x615_struct    vcu_0x615;
#define  GET_VCU_0X615_MISSING_FLAG()    get_vcu_0x615_missing_flag()
#define  GET_VCU_0X615_NEVER_RECE_FLAG()    get_vcu_0x615_never_reve_flag()
#define  GET_VCU_ENERGY_CONSUM_AV()    get_VCU_ENERGY_CONSUM_AV()

typedef struct
{
    UINT8  Vcu_0x616MissingFlag;
    UINT8  Vcu_0x616NeverReceFlag;
    union
    {
      struct
     {
      UINT16 VCU_616_DRIVE_RANGE:16;
      UINT8 VCU_0x616_res18:1;
      UINT8 VCU_0x616_res19:1;
      UINT8 VCU_0x616_res20:1;
      UINT8 VCU_0x616_res21:1;
      UINT8 VCU_0x616_res22:1;
      UINT8 VCU_0x616_res23:1;
      UINT8 VCU_0x616_res24:1;
      UINT8 VCU_0x616_res25:1;
      UINT8 VCU_0x616_res27:1;
      UINT8 VCU_0x616_res28:1;
      UINT8 VCU_0x616_res29:1;
      UINT8 VCU_0x616_res30:1;
      UINT8 VCU_0x616_res31:1;
      UINT8 VCU_0x616_res32:1;
      UINT8 VCU_0x616_res33:1;
      UINT8 VCU_0x616_res34:1;
      UINT8 VCU_0x616_res36:1;
      UINT8 VCU_0x616_res37:1;
      UINT8 VCU_0x616_res38:1;
      UINT8 VCU_0x616_res39:1;
      UINT8 VCU_0x616_res40:1;
      UINT8 VCU_0x616_res41:1;
      UINT8 VCU_0x616_res42:1;
      UINT8 VCU_0x616_res43:1;
      UINT8 VCU_0x616_res45:1;
      UINT8 VCU_0x616_res46:1;
      UINT8 VCU_0x616_res47:1;
      UINT8 VCU_0x616_res48:1;
      UINT8 VCU_0x616_res49:1;
      UINT8 VCU_0x616_res50:1;
      UINT8 VCU_0x616_res51:1;
      UINT8 VCU_0x616_res52:1;
      UINT8 VCU_0x616_res54:1;
      UINT8 VCU_0x616_res55:1;
      UINT8 VCU_0x616_res56:1;
      UINT8 VCU_0x616_res57:1;
      UINT8 VCU_0x616_res58:1;
      UINT8 VCU_0x616_res59:1;
      UINT8 VCU_0x616_res60:1;
      UINT8 VCU_0x616_res61:1;
      UINT8 VCU_0x616_res63:1;
      UINT8 VCU_0x616_res64:1;
      UINT8 VCU_0x616_res65:1;
      UINT8 VCU_0x616_res66:1;
      UINT8 VCU_0x616_res67:1;
      UINT8 VCU_0x616_res68:1;
      UINT8 VCU_0x616_res69:1;
      UINT8 VCU_0x616_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}vcu_0x616_struct;

extern   vcu_0x616_struct    vcu_0x616;
#define  GET_VCU_0X616_MISSING_FLAG()    get_vcu_0x616_missing_flag()
#define  GET_VCU_0X616_NEVER_RECE_FLAG()    get_vcu_0x616_never_reve_flag()
#define  GET_VCU_DRIVE_RANGE()    get_VCU_DRIVE_RANGE()

typedef struct
{
    UINT8  Vcu_0x617MissingFlag;
    UINT8  Vcu_0x617NeverReceFlag;
    union
    {
      struct
     {
      UINT8 VCU_617_SYS_FAULT_LAMP:2;
      UINT8 VCU_617_BRAKE_ENGERY_RECOV_STA:1;
      UINT8 VCU_617_BRAKE_ENGERY_RECOV_LEVEL:3;
      UINT8 VCU_0x617_res6:1;
      UINT8 VCU_0x617_res7:1;
      UINT8 VCU_0x617_res9:1;
      UINT8 VCU_0x617_res10:1;
      UINT8 VCU_0x617_res11:1;
      UINT8 VCU_0x617_res12:1;
      UINT8 VCU_0x617_res13:1;
      UINT8 VCU_0x617_res14:1;
      UINT8 VCU_0x617_res15:1;
      UINT8 VCU_0x617_res16:1;
      UINT8 VCU_0x617_res18:1;
      UINT8 VCU_0x617_res19:1;
      UINT8 VCU_0x617_res20:1;
      UINT8 VCU_0x617_res21:1;
      UINT8 VCU_0x617_res22:1;
      UINT8 VCU_0x617_res23:1;
      UINT8 VCU_0x617_res24:1;
      UINT8 VCU_0x617_res25:1;
      UINT8 VCU_0x617_res27:1;
      UINT8 VCU_0x617_res28:1;
      UINT8 VCU_0x617_res29:1;
      UINT8 VCU_0x617_res30:1;
      UINT8 VCU_0x617_res31:1;
      UINT8 VCU_0x617_res32:1;
      UINT8 VCU_0x617_res33:1;
      UINT8 VCU_0x617_res34:1;
      UINT8 VCU_0x617_res36:1;
      UINT8 VCU_0x617_res37:1;
      UINT8 VCU_0x617_res38:1;
      UINT8 VCU_0x617_res39:1;
      UINT8 VCU_0x617_res40:1;
      UINT8 VCU_0x617_res41:1;
      UINT8 VCU_0x617_res42:1;
      UINT8 VCU_0x617_res43:1;
      UINT8 VCU_617_MCU_PWR_PENT:8;
      UINT16 VCU_617_ENERGY_CONSUM_IN:16;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}vcu_0x617_struct;

extern   vcu_0x617_struct    vcu_0x617;
#define  GET_VCU_0X617_MISSING_FLAG()    get_vcu_0x617_missing_flag()
#define  GET_VCU_0X617_NEVER_RECE_FLAG()    get_vcu_0x617_never_reve_flag()
#define  GET_VCU_SYS_FAULT_LAMP()    get_VCU_SYS_FAULT_LAMP()
#define  GET_VCU_BRAKE_ENGERY_RECOV_STA()    get_VCU_BRAKE_ENGERY_RECOV_STA()
#define  GET_VCU_BRAKE_ENGERY_RECOV_LEVEL()    get_VCU_BRAKE_ENGERY_RECOV_LEVEL()
#define  GET_VCU_MCU_PWR_PENT()    get_VCU_MCU_PWR_PENT()
#define  GET_VCU_ENERGY_CONSUM_IN()    get_VCU_ENERGY_CONSUM_IN()

typedef struct
{
    UINT8  Bms_0x650MissingFlag;
    UINT8  Bms_0x650NeverReceFlag;
    union
    {
      struct
     {
      UINT8 BMS_0x650_res0:1;
      UINT8 BMS_0x650_res1:1;
      UINT8 BMS_0x650_res2:1;
      UINT8 BMS_0x650_res3:1;
      UINT8 BMS_650_BATT_HEAT_STA:2;
      UINT8 BMS_0x650_res6:1;
      UINT8 BMS_0x650_res7:1;
      UINT8 BMS_0x650_res9:1;
      UINT8 BMS_0x650_res10:1;
      UINT8 BMS_0x650_res11:1;
      UINT8 BMS_0x650_res12:1;
      UINT8 BMS_0x650_res13:1;
      UINT8 BMS_0x650_res14:1;
      UINT8 BMS_0x650_res15:1;
      UINT8 BMS_0x650_res16:1;
      UINT8 BMS_0x650_res18:1;
      UINT8 BMS_0x650_res19:1;
      UINT8 BMS_0x650_res20:1;
      UINT8 BMS_0x650_res21:1;
      UINT8 BMS_0x650_res22:1;
      UINT8 BMS_0x650_res23:1;
      UINT8 BMS_0x650_res24:1;
      UINT8 BMS_0x650_res25:1;
      UINT8 BMS_0x650_res27:1;
      UINT8 BMS_0x650_res28:1;
      UINT8 BMS_0x650_res29:1;
      UINT8 BMS_0x650_res30:1;
      UINT8 BMS_0x650_res31:1;
      UINT8 BMS_0x650_res32:1;
      UINT8 BMS_0x650_res33:1;
      UINT8 BMS_0x650_res34:1;
      UINT8 BMS_0x650_res36:1;
      UINT8 BMS_0x650_res37:1;
      UINT8 BMS_0x650_res38:1;
      UINT8 BMS_0x650_res39:1;
      UINT8 BMS_0x650_res40:1;
      UINT8 BMS_0x650_res41:1;
      UINT8 BMS_0x650_res42:1;
      UINT8 BMS_0x650_res43:1;
      UINT8 BMS_0x650_res45:1;
      UINT8 BMS_0x650_res46:1;
      UINT8 BMS_0x650_res47:1;
      UINT8 BMS_0x650_res48:1;
      UINT8 BMS_0x650_res49:1;
      UINT8 BMS_0x650_res50:1;
      UINT8 BMS_0x650_res51:1;
      UINT8 BMS_0x650_res52:1;
      UINT8 BMS_0x650_res54:1;
      UINT8 BMS_0x650_res55:1;
      UINT8 BMS_0x650_res56:1;
      UINT8 BMS_0x650_res57:1;
      UINT8 BMS_0x650_res58:1;
      UINT8 BMS_0x650_res59:1;
      UINT8 BMS_0x650_res60:1;
      UINT8 BMS_0x650_res61:1;
      UINT8 BMS_0x650_res63:1;
      UINT8 BMS_0x650_res64:1;
      UINT8 BMS_0x650_res65:1;
      UINT8 BMS_0x650_res66:1;
      UINT8 BMS_0x650_res67:1;
      UINT8 BMS_0x650_res68:1;
      UINT8 BMS_0x650_res69:1;
      UINT8 BMS_0x650_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}bms_0x650_struct;

extern   bms_0x650_struct    bms_0x650;
#define  GET_BMS_0X650_MISSING_FLAG()    get_bms_0x650_missing_flag()
#define  GET_BMS_0X650_NEVER_RECE_FLAG()    get_bms_0x650_never_reve_flag()
#define  GET_BMS_BATT_HEAT_STA()    get_BMS_BATT_HEAT_STA()

typedef struct
{
    UINT8  Icm_0x6a0MissingFlag;
    UINT8  Icm_0x6a0NeverReceFlag;
    union
    {
      struct
     {
      UINT8 ICM_0x6A0_res0:1;
      UINT8 ICM_0x6A0_res1:1;
      UINT8 ICM_0x6A0_res2:1;
      UINT8 ICM_0x6A0_res3:1;
      UINT8 ICM_0x6A0_res4:1;
      UINT8 ICM_0x6A0_res5:1;
      UINT8 ICM_0x6A0_res6:1;
      UINT8 ICM_0x6A0_res7:1;
      UINT32 ICM_6A0_ODO:24;
      UINT8 ICM_0x6A0_res36:1;
      UINT8 ICM_0x6A0_res37:1;
      UINT8 ICM_0x6A0_res38:1;
      UINT8 ICM_0x6A0_res39:1;
      UINT8 ICM_0x6A0_res40:1;
      UINT8 ICM_0x6A0_res41:1;
      UINT8 ICM_0x6A0_res42:1;
      UINT8 ICM_0x6A0_res43:1;
      UINT8 ICM_0x6A0_res45:1;
      UINT8 ICM_0x6A0_res46:1;
      UINT8 ICM_0x6A0_res47:1;
      UINT8 ICM_0x6A0_res48:1;
      UINT8 ICM_0x6A0_res49:1;
      UINT8 ICM_0x6A0_res50:1;
      UINT8 ICM_0x6A0_res51:1;
      UINT8 ICM_0x6A0_res52:1;
      UINT8 ICM_0x6A0_res54:1;
      UINT8 ICM_0x6A0_res55:1;
      UINT8 ICM_0x6A0_res56:1;
      UINT8 ICM_0x6A0_res57:1;
      UINT8 ICM_0x6A0_res58:1;
      UINT8 ICM_0x6A0_res59:1;
      UINT8 ICM_0x6A0_res60:1;
      UINT8 ICM_0x6A0_res61:1;
      UINT8 ICM_0x6A0_res63:1;
      UINT8 ICM_0x6A0_res64:1;
      UINT8 ICM_0x6A0_res65:1;
      UINT8 ICM_0x6A0_res66:1;
      UINT8 ICM_0x6A0_res67:1;
      UINT8 ICM_0x6A0_res68:1;
      UINT8 ICM_0x6A0_res69:1;
      UINT8 ICM_0x6A0_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}icm_0x6a0_struct;

extern   icm_0x6a0_struct    icm_0x6a0;
#define  GET_ICM_0X6A0_MISSING_FLAG()    get_icm_0x6a0_missing_flag()
#define  GET_ICM_0X6A0_NEVER_RECE_FLAG()    get_icm_0x6a0_never_reve_flag()
#define  GET_ICM_ODO()    get_ICM_ODO()

typedef struct
{
    UINT8  Icm_0x6a2MissingFlag;
    UINT8  Icm_0x6a2NeverReceFlag;
    union
    {
      struct
     {
      UINT8 ICM_0x6A2_res0:1;
      UINT8 ICM_0x6A2_res1:1;
      UINT8 ICM_6A2_IP_Fault:1;
      UINT8 ICM_6A2_IP_Theme:2;
      UINT8 ICM_0x6A2_res5:1;
      UINT8 ICM_0x6A2_res6:1;
      UINT8 ICM_0x6A2_res7:1;
      UINT32 ICM_6A2_Distance_To_Service:24;
      UINT8 ICM_0x6A2_res36:1;
      UINT8 ICM_0x6A2_res37:1;
      UINT8 ICM_0x6A2_res38:1;
      UINT8 ICM_0x6A2_res39:1;
      UINT8 ICM_0x6A2_res40:1;
      UINT8 ICM_0x6A2_res41:1;
      UINT8 ICM_0x6A2_res42:1;
      UINT8 ICM_0x6A2_res43:1;
      UINT16 ICM_6A2_Day_To_Service:16;
      UINT8 ICM_0x6A2_res63:1;
      UINT8 ICM_0x6A2_res64:1;
      UINT8 ICM_0x6A2_res65:1;
      UINT8 ICM_0x6A2_res66:1;
      UINT8 ICM_0x6A2_res67:1;
      UINT8 ICM_0x6A2_res68:1;
      UINT8 ICM_0x6A2_res69:1;
      UINT8 ICM_0x6A2_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}icm_0x6a2_struct;

extern   icm_0x6a2_struct    icm_0x6a2;
#define  GET_ICM_0X6A2_MISSING_FLAG()    get_icm_0x6a2_missing_flag()
#define  GET_ICM_0X6A2_NEVER_RECE_FLAG()    get_icm_0x6a2_never_reve_flag()
#define  GET_ICM_IP_Fault()    get_ICM_IP_Fault()
#define  GET_ICM_IP_Theme()    get_ICM_IP_Theme()
#define  GET_ICM_Distance_To_Service()    get_ICM_Distance_To_Service()
#define  GET_ICM_Day_To_Service()    get_ICM_Day_To_Service()

typedef struct
{
    UINT8  Icm_0x6afMissingFlag;
    UINT8  Icm_0x6afNeverReceFlag;
    union
    {
      struct
     {
      UINT8 ICM_0x6AF_res0:1;
      UINT8 ICM_0x6AF_res1:1;
      UINT8 ICM_0x6AF_res2:1;
      UINT8 ICM_0x6AF_res3:1;
      UINT8 ICM_0x6AF_res4:1;
      UINT8 ICM_0x6AF_res5:1;
      UINT8 ICM_0x6AF_res6:1;
      UINT8 ICM_0x6AF_res7:1;
      UINT8 ICM_6AF_CAL_VERS:8;
      UINT32 ICM_6AF_PART_VERS:32;
      UINT8 ICM_6AF_HW_VERS:8;
      UINT8 ICM_6AF_SW_VERS:8;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}icm_0x6af_struct;

extern   icm_0x6af_struct    icm_0x6af;
#define  GET_ICM_0X6AF_MISSING_FLAG()    get_icm_0x6af_missing_flag()
#define  GET_ICM_0X6AF_NEVER_RECE_FLAG()    get_icm_0x6af_never_reve_flag()
#define  GET_ICM_CAL_VERS()    get_ICM_CAL_VERS()
#define  GET_ICM_PART_VERS()    get_ICM_PART_VERS()
#define  GET_ICM_HW_VERS()    get_ICM_HW_VERS()
#define  GET_ICM_SW_VERS()    get_ICM_SW_VERS()

typedef struct
{
    UINT8  Chg_0x6d0MissingFlag;
    UINT8  Chg_0x6d0NeverReceFlag;
    union
    {
      struct
     {
      UINT8 CHG_6D0_CHG_STA:4;
      UINT8 CHG_0x6D0_res4:1;
      UINT8 CHG_0x6D0_res5:1;
      UINT8 CHG_0x6D0_res6:1;
      UINT8 CHG_0x6D0_res7:1;
      UINT8 CHG_0x6D0_res9:1;
      UINT8 CHG_0x6D0_res10:1;
      UINT8 CHG_0x6D0_res11:1;
      UINT8 CHG_0x6D0_res12:1;
      UINT8 CHG_0x6D0_res13:1;
      UINT8 CHG_0x6D0_res14:1;
      UINT8 CHG_0x6D0_res15:1;
      UINT8 CHG_0x6D0_res16:1;
      UINT8 CHG_0x6D0_res18:1;
      UINT8 CHG_0x6D0_res19:1;
      UINT8 CHG_0x6D0_res20:1;
      UINT8 CHG_0x6D0_res21:1;
      UINT8 CHG_0x6D0_res22:1;
      UINT8 CHG_0x6D0_res23:1;
      UINT8 CHG_0x6D0_res24:1;
      UINT8 CHG_0x6D0_res25:1;
      UINT8 CHG_0x6D0_res27:1;
      UINT8 CHG_0x6D0_res28:1;
      UINT8 CHG_0x6D0_res29:1;
      UINT8 CHG_0x6D0_res30:1;
      UINT8 CHG_0x6D0_res31:1;
      UINT8 CHG_0x6D0_res32:1;
      UINT8 CHG_0x6D0_res33:1;
      UINT8 CHG_0x6D0_res34:1;
      UINT8 CHG_0x6D0_res36:1;
      UINT8 CHG_0x6D0_res37:1;
      UINT8 CHG_0x6D0_res38:1;
      UINT8 CHG_0x6D0_res39:1;
      UINT8 CHG_0x6D0_res40:1;
      UINT8 CHG_0x6D0_res41:1;
      UINT8 CHG_0x6D0_res42:1;
      UINT8 CHG_0x6D0_res43:1;
      UINT8 CHG_0x6D0_res45:1;
      UINT8 CHG_0x6D0_res46:1;
      UINT8 CHG_0x6D0_res47:1;
      UINT8 CHG_0x6D0_res48:1;
      UINT8 CHG_0x6D0_res49:1;
      UINT8 CHG_0x6D0_res50:1;
      UINT8 CHG_0x6D0_res51:1;
      UINT8 CHG_0x6D0_res52:1;
      UINT8 CHG_0x6D0_res54:1;
      UINT8 CHG_0x6D0_res55:1;
      UINT8 CHG_0x6D0_res56:1;
      UINT8 CHG_0x6D0_res57:1;
      UINT8 CHG_0x6D0_res58:1;
      UINT8 CHG_0x6D0_res59:1;
      UINT8 CHG_0x6D0_res60:1;
      UINT8 CHG_0x6D0_res61:1;
      UINT8 CHG_0x6D0_res63:1;
      UINT8 CHG_0x6D0_res64:1;
      UINT8 CHG_0x6D0_res65:1;
      UINT8 CHG_0x6D0_res66:1;
      UINT8 CHG_0x6D0_res67:1;
      UINT8 CHG_0x6D0_res68:1;
      UINT8 CHG_0x6D0_res69:1;
      UINT8 CHG_0x6D0_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}chg_0x6d0_struct;

extern   chg_0x6d0_struct    chg_0x6d0;
#define  GET_CHG_0X6D0_MISSING_FLAG()    get_chg_0x6d0_missing_flag()
#define  GET_CHG_0X6D0_NEVER_RECE_FLAG()    get_chg_0x6d0_never_reve_flag()
#define  GET_CHG_CHG_STA()    get_CHG_CHG_STA()

typedef struct
{
    UINT8  Icm_0x420MissingFlag;
    UINT8  Icm_0x420NeverReceFlag;
    union
    {
      struct
     {
      UINT8 ICM_420_NM_DEST_ADDRESS:8;
      UINT8 ICM_420_NM_ALIVE:1;
      UINT8 ICM_420_NM_RING:1;
      UINT8 ICM_420_NM_LIMPHOME:1;
      UINT8 ICM_0x420_res12:1;
      UINT8 ICM_420_NM_SLEEP_IND:1;
      UINT8 ICM_420_NM_SLEEP_ACK:1;
      UINT8 ICM_0x420_res15:1;
      UINT8 ICM_0x420_res16:1;
      UINT8 ICM_0x420_res18:1;
      UINT8 ICM_0x420_res19:1;
      UINT8 ICM_0x420_res20:1;
      UINT8 ICM_0x420_res21:1;
      UINT8 ICM_0x420_res22:1;
      UINT8 ICM_0x420_res23:1;
      UINT8 ICM_0x420_res24:1;
      UINT8 ICM_0x420_res25:1;
      UINT8 ICM_0x420_res27:1;
      UINT8 ICM_0x420_res28:1;
      UINT8 ICM_0x420_res29:1;
      UINT8 ICM_0x420_res30:1;
      UINT8 ICM_0x420_res31:1;
      UINT8 ICM_0x420_res32:1;
      UINT8 ICM_0x420_res33:1;
      UINT8 ICM_0x420_res34:1;
      UINT8 ICM_0x420_res36:1;
      UINT8 ICM_0x420_res37:1;
      UINT8 ICM_0x420_res38:1;
      UINT8 ICM_0x420_res39:1;
      UINT8 ICM_0x420_res40:1;
      UINT8 ICM_0x420_res41:1;
      UINT8 ICM_0x420_res42:1;
      UINT8 ICM_0x420_res43:1;
      UINT8 ICM_0x420_res45:1;
      UINT8 ICM_0x420_res46:1;
      UINT8 ICM_0x420_res47:1;
      UINT8 ICM_0x420_res48:1;
      UINT8 ICM_0x420_res49:1;
      UINT8 ICM_0x420_res50:1;
      UINT8 ICM_0x420_res51:1;
      UINT8 ICM_0x420_res52:1;
      UINT8 ICM_0x420_res54:1;
      UINT8 ICM_0x420_res55:1;
      UINT8 ICM_0x420_res56:1;
      UINT8 ICM_0x420_res57:1;
      UINT8 ICM_0x420_res58:1;
      UINT8 ICM_0x420_res59:1;
      UINT8 ICM_0x420_res60:1;
      UINT8 ICM_0x420_res61:1;
      UINT8 ICM_0x420_res63:1;
      UINT8 ICM_0x420_res64:1;
      UINT8 ICM_0x420_res65:1;
      UINT8 ICM_0x420_res66:1;
      UINT8 ICM_0x420_res67:1;
      UINT8 ICM_0x420_res68:1;
      UINT8 ICM_0x420_res69:1;
      UINT8 ICM_0x420_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}icm_0x420_struct;

extern   icm_0x420_struct    icm_0x420;
#define  GET_ICM_0X420_MISSING_FLAG()    get_icm_0x420_missing_flag()
#define  GET_ICM_0X420_NEVER_RECE_FLAG()    get_icm_0x420_never_reve_flag()
#define  GET_ICM_NM_DEST_ADDRESS()    get_ICM_NM_DEST_ADDRESS()
#define  GET_ICM_NM_ALIVE()    get_ICM_NM_ALIVE()
#define  GET_ICM_NM_RING()    get_ICM_NM_RING()
#define  GET_ICM_NM_LIMPHOME()    get_ICM_NM_LIMPHOME()
#define  GET_ICM_NM_SLEEP_IND()    get_ICM_NM_SLEEP_IND()
#define  GET_ICM_NM_SLEEP_ACK()    get_ICM_NM_SLEEP_ACK()

typedef struct
{
    UINT8  Gw_0x421MissingFlag;
    UINT8  Gw_0x421NeverReceFlag;
    union
    {
      struct
     {
      UINT8 GW_421_NM_DEST_ADDRESS:8;
      UINT8 GW_421_NM_ALIVE:1;
      UINT8 GW_421_NM_RING:1;
      UINT8 GW_421_NM_LIMPHOME:1;
      UINT8 GW_0x421_res12:1;
      UINT8 GW_421_NM_SLEEP_IND:1;
      UINT8 GW_421_NM_SLEEP_ACK:1;
      UINT8 GW_0x421_res15:1;
      UINT8 GW_0x421_res16:1;
      UINT8 GW_0x421_res18:1;
      UINT8 GW_0x421_res19:1;
      UINT8 GW_0x421_res20:1;
      UINT8 GW_0x421_res21:1;
      UINT8 GW_0x421_res22:1;
      UINT8 GW_0x421_res23:1;
      UINT8 GW_0x421_res24:1;
      UINT8 GW_0x421_res25:1;
      UINT8 GW_0x421_res27:1;
      UINT8 GW_0x421_res28:1;
      UINT8 GW_0x421_res29:1;
      UINT8 GW_0x421_res30:1;
      UINT8 GW_0x421_res31:1;
      UINT8 GW_0x421_res32:1;
      UINT8 GW_0x421_res33:1;
      UINT8 GW_0x421_res34:1;
      UINT8 GW_0x421_res36:1;
      UINT8 GW_0x421_res37:1;
      UINT8 GW_0x421_res38:1;
      UINT8 GW_0x421_res39:1;
      UINT8 GW_0x421_res40:1;
      UINT8 GW_0x421_res41:1;
      UINT8 GW_0x421_res42:1;
      UINT8 GW_0x421_res43:1;
      UINT8 GW_0x421_res45:1;
      UINT8 GW_0x421_res46:1;
      UINT8 GW_0x421_res47:1;
      UINT8 GW_0x421_res48:1;
      UINT8 GW_0x421_res49:1;
      UINT8 GW_0x421_res50:1;
      UINT8 GW_0x421_res51:1;
      UINT8 GW_0x421_res52:1;
      UINT8 GW_0x421_res54:1;
      UINT8 GW_0x421_res55:1;
      UINT8 GW_0x421_res56:1;
      UINT8 GW_0x421_res57:1;
      UINT8 GW_0x421_res58:1;
      UINT8 GW_0x421_res59:1;
      UINT8 GW_0x421_res60:1;
      UINT8 GW_0x421_res61:1;
      UINT8 GW_0x421_res63:1;
      UINT8 GW_0x421_res64:1;
      UINT8 GW_0x421_res65:1;
      UINT8 GW_0x421_res66:1;
      UINT8 GW_0x421_res67:1;
      UINT8 GW_0x421_res68:1;
      UINT8 GW_0x421_res69:1;
      UINT8 GW_0x421_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}gw_0x421_struct;

extern   gw_0x421_struct    gw_0x421;
#define  GET_GW_0X421_MISSING_FLAG()    get_gw_0x421_missing_flag()
#define  GET_GW_0X421_NEVER_RECE_FLAG()    get_gw_0x421_never_reve_flag()
#define  GET_GW_NM_DEST_ADDRESS()    get_GW_NM_DEST_ADDRESS()
#define  GET_GW_NM_ALIVE()    get_GW_NM_ALIVE()
#define  GET_GW_NM_RING()    get_GW_NM_RING()
#define  GET_GW_NM_LIMPHOME()    get_GW_NM_LIMPHOME()
#define  GET_GW_NM_SLEEP_IND()    get_GW_NM_SLEEP_IND()
#define  GET_GW_NM_SLEEP_ACK()    get_GW_NM_SLEEP_ACK()

typedef struct
{
    UINT8  Bcm_0x425MissingFlag;
    UINT8  Bcm_0x425NeverReceFlag;
    union
    {
      struct
     {
      UINT8 BCM_425_NM_DEST_ADDRESS:8;
      UINT8 BCM_425_NM_ALIVE:1;
      UINT8 BCM_425_NM_RING:1;
      UINT8 BCM_425_NM_LIMPHOME:1;
      UINT8 BCM_0x425_res12:1;
      UINT8 BCM_425_NM_SLEEP_IND:1;
      UINT8 BCM_425_NM_SLEEP_ACK:1;
      UINT8 BCM_0x425_res15:1;
      UINT8 BCM_0x425_res16:1;
      UINT8 BCM_0x425_res18:1;
      UINT8 BCM_0x425_res19:1;
      UINT8 BCM_0x425_res20:1;
      UINT8 BCM_0x425_res21:1;
      UINT8 BCM_0x425_res22:1;
      UINT8 BCM_0x425_res23:1;
      UINT8 BCM_0x425_res24:1;
      UINT8 BCM_0x425_res25:1;
      UINT8 BCM_0x425_res27:1;
      UINT8 BCM_0x425_res28:1;
      UINT8 BCM_0x425_res29:1;
      UINT8 BCM_0x425_res30:1;
      UINT8 BCM_0x425_res31:1;
      UINT8 BCM_0x425_res32:1;
      UINT8 BCM_0x425_res33:1;
      UINT8 BCM_0x425_res34:1;
      UINT8 BCM_0x425_res36:1;
      UINT8 BCM_0x425_res37:1;
      UINT8 BCM_0x425_res38:1;
      UINT8 BCM_0x425_res39:1;
      UINT8 BCM_0x425_res40:1;
      UINT8 BCM_0x425_res41:1;
      UINT8 BCM_0x425_res42:1;
      UINT8 BCM_0x425_res43:1;
      UINT8 BCM_0x425_res45:1;
      UINT8 BCM_0x425_res46:1;
      UINT8 BCM_0x425_res47:1;
      UINT8 BCM_0x425_res48:1;
      UINT8 BCM_0x425_res49:1;
      UINT8 BCM_0x425_res50:1;
      UINT8 BCM_0x425_res51:1;
      UINT8 BCM_0x425_res52:1;
      UINT8 BCM_0x425_res54:1;
      UINT8 BCM_0x425_res55:1;
      UINT8 BCM_0x425_res56:1;
      UINT8 BCM_0x425_res57:1;
      UINT8 BCM_0x425_res58:1;
      UINT8 BCM_0x425_res59:1;
      UINT8 BCM_0x425_res60:1;
      UINT8 BCM_0x425_res61:1;
      UINT8 BCM_0x425_res63:1;
      UINT8 BCM_0x425_res64:1;
      UINT8 BCM_0x425_res65:1;
      UINT8 BCM_0x425_res66:1;
      UINT8 BCM_0x425_res67:1;
      UINT8 BCM_0x425_res68:1;
      UINT8 BCM_0x425_res69:1;
      UINT8 BCM_0x425_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}bcm_0x425_struct;

extern   bcm_0x425_struct    bcm_0x425;
#define  GET_BCM_0X425_MISSING_FLAG()    get_bcm_0x425_missing_flag()
#define  GET_BCM_0X425_NEVER_RECE_FLAG()    get_bcm_0x425_never_reve_flag()
#define  GET_BCM_NM_DEST_ADDRESS()    get_BCM_NM_DEST_ADDRESS()
#define  GET_BCM_NM_ALIVE()    get_BCM_NM_ALIVE()
#define  GET_BCM_NM_RING()    get_BCM_NM_RING()
#define  GET_BCM_NM_LIMPHOME()    get_BCM_NM_LIMPHOME()
#define  GET_BCM_NM_SLEEP_IND()    get_BCM_NM_SLEEP_IND()
#define  GET_BCM_NM_SLEEP_ACK()    get_BCM_NM_SLEEP_ACK()

typedef struct
{
    UINT8  Peps_0x429MissingFlag;
    UINT8  Peps_0x429NeverReceFlag;
    union
    {
      struct
     {
      UINT8 PEPS_429_NM_DEST_ADDRESS:8;
      UINT8 PEPS_429_NM_ALIVE:1;
      UINT8 PEPS_429_NM_RING:1;
      UINT8 PEPS_429_NM_LIMPHOME:1;
      UINT8 PEPS_0x429_res12:1;
      UINT8 PEPS_429_NM_SLEEP_IND:1;
      UINT8 PEPS_429_NM_SLEEP_ACK:1;
      UINT8 PEPS_0x429_res15:1;
      UINT8 PEPS_0x429_res16:1;
      UINT8 PEPS_0x429_res18:1;
      UINT8 PEPS_0x429_res19:1;
      UINT8 PEPS_0x429_res20:1;
      UINT8 PEPS_0x429_res21:1;
      UINT8 PEPS_0x429_res22:1;
      UINT8 PEPS_0x429_res23:1;
      UINT8 PEPS_0x429_res24:1;
      UINT8 PEPS_0x429_res25:1;
      UINT8 PEPS_0x429_res27:1;
      UINT8 PEPS_0x429_res28:1;
      UINT8 PEPS_0x429_res29:1;
      UINT8 PEPS_0x429_res30:1;
      UINT8 PEPS_0x429_res31:1;
      UINT8 PEPS_0x429_res32:1;
      UINT8 PEPS_0x429_res33:1;
      UINT8 PEPS_0x429_res34:1;
      UINT8 PEPS_0x429_res36:1;
      UINT8 PEPS_0x429_res37:1;
      UINT8 PEPS_0x429_res38:1;
      UINT8 PEPS_0x429_res39:1;
      UINT8 PEPS_0x429_res40:1;
      UINT8 PEPS_0x429_res41:1;
      UINT8 PEPS_0x429_res42:1;
      UINT8 PEPS_0x429_res43:1;
      UINT8 PEPS_0x429_res45:1;
      UINT8 PEPS_0x429_res46:1;
      UINT8 PEPS_0x429_res47:1;
      UINT8 PEPS_0x429_res48:1;
      UINT8 PEPS_0x429_res49:1;
      UINT8 PEPS_0x429_res50:1;
      UINT8 PEPS_0x429_res51:1;
      UINT8 PEPS_0x429_res52:1;
      UINT8 PEPS_0x429_res54:1;
      UINT8 PEPS_0x429_res55:1;
      UINT8 PEPS_0x429_res56:1;
      UINT8 PEPS_0x429_res57:1;
      UINT8 PEPS_0x429_res58:1;
      UINT8 PEPS_0x429_res59:1;
      UINT8 PEPS_0x429_res60:1;
      UINT8 PEPS_0x429_res61:1;
      UINT8 PEPS_0x429_res63:1;
      UINT8 PEPS_0x429_res64:1;
      UINT8 PEPS_0x429_res65:1;
      UINT8 PEPS_0x429_res66:1;
      UINT8 PEPS_0x429_res67:1;
      UINT8 PEPS_0x429_res68:1;
      UINT8 PEPS_0x429_res69:1;
      UINT8 PEPS_0x429_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}peps_0x429_struct;

extern   peps_0x429_struct    peps_0x429;
#define  GET_PEPS_0X429_MISSING_FLAG()    get_peps_0x429_missing_flag()
#define  GET_PEPS_0X429_NEVER_RECE_FLAG()    get_peps_0x429_never_reve_flag()
#define  GET_PEPS_NM_DEST_ADDRESS()    get_PEPS_NM_DEST_ADDRESS()
#define  GET_PEPS_NM_ALIVE()    get_PEPS_NM_ALIVE()
#define  GET_PEPS_NM_RING()    get_PEPS_NM_RING()
#define  GET_PEPS_NM_LIMPHOME()    get_PEPS_NM_LIMPHOME()
#define  GET_PEPS_NM_SLEEP_IND()    get_PEPS_NM_SLEEP_IND()
#define  GET_PEPS_NM_SLEEP_ACK()    get_PEPS_NM_SLEEP_ACK()

typedef struct
{
    UINT8  Peps_0x479MissingFlag;
    UINT8  Peps_0x479NeverReceFlag;
    union
    {
      struct
     {
      UINT8 PEPS_0x479_res0:1;
      UINT8 PEPS_0x479_res1:1;
      UINT8 PEPS_0x479_res2:1;
      UINT8 PEPS_0x479_res3:1;
      UINT8 PEPS_0x479_res4:1;
      UINT8 PEPS_0x479_res5:1;
      UINT8 PEPS_0x479_res6:1;
      UINT8 PEPS_0x479_res7:1;
      UINT8 PEPS_479_POWER_MODE:2;
      UINT8 PEPS_0x479_res11:1;
      UINT8 PEPS_0x479_res12:1;
      UINT8 PEPS_0x479_res13:1;
      UINT8 PEPS_0x479_res14:1;
      UINT8 PEPS_0x479_res15:1;
      UINT8 PEPS_0x479_res16:1;
      UINT8 PEPS_0x479_res18:1;
      UINT8 PEPS_0x479_res19:1;
      UINT8 PEPS_0x479_res20:1;
      UINT8 PEPS_0x479_res21:1;
      UINT8 PEPS_0x479_res22:1;
      UINT8 PEPS_0x479_res23:1;
      UINT8 PEPS_0x479_res24:1;
      UINT8 PEPS_0x479_res25:1;
      UINT8 PEPS_0x479_res27:1;
      UINT8 PEPS_0x479_res28:1;
      UINT8 PEPS_0x479_res29:1;
      UINT8 PEPS_0x479_res30:1;
      UINT8 PEPS_479_RM_Key_LowBattery_Alert:1;
      UINT8 PEPS_479_AuthFailWarning:1;
      UINT8 PEPS_479_One_KeyStart_Swith_Error:1;
      UINT8 PEPS_479_Press_Brake_Pedal_Alert:1;
      UINT8 PEPS_479_ESCLWarning:1;
      UINT8 PEPS_479_ETWS_Alert:1;
      UINT8 PEPS_479_CID_Left_Alert:1;
      UINT8 PEPS_479_DOOR_Lock_Ig_NotOff_Alert:1;
      UINT8 PEPS_479_DOOR_Open_Lock_Alert:1;
      UINT8 PEPS_479_Key_Insid_Vehicle_Alert:1;
      UINT8 PEPS_0x479_res42:1;
      UINT8 PEPS_0x479_res43:1;
      UINT8 PEPS_0x479_res45:1;
      UINT8 PEPS_0x479_res46:1;
      UINT8 PEPS_0x479_res47:1;
      UINT8 PEPS_0x479_res48:1;
      UINT8 PEPS_0x479_res49:1;
      UINT8 PEPS_0x479_res50:1;
      UINT8 PEPS_0x479_res51:1;
      UINT8 PEPS_0x479_res52:1;
      UINT8 PEPS_0x479_res54:1;
      UINT8 PEPS_0x479_res55:1;
      UINT8 PEPS_0x479_res56:1;
      UINT8 PEPS_0x479_res57:1;
      UINT8 PEPS_0x479_res58:1;
      UINT8 PEPS_0x479_res59:1;
      UINT8 PEPS_0x479_res60:1;
      UINT8 PEPS_0x479_res61:1;
      UINT8 PEPS_0x479_res63:1;
      UINT8 PEPS_0x479_res64:1;
      UINT8 PEPS_0x479_res65:1;
      UINT8 PEPS_0x479_res66:1;
      UINT8 PEPS_0x479_res67:1;
      UINT8 PEPS_0x479_res68:1;
      UINT8 PEPS_0x479_res69:1;
      UINT8 PEPS_0x479_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}peps_0x479_struct;

extern   peps_0x479_struct    peps_0x479;
#define  GET_PEPS_0X479_MISSING_FLAG()    get_peps_0x479_missing_flag()
#define  GET_PEPS_0X479_NEVER_RECE_FLAG()    get_peps_0x479_never_reve_flag()
#define  GET_PEPS_POWER_MODE()    get_PEPS_POWER_MODE()
#define  GET_PEPS_RM_Key_LowBattery_Alert()    get_PEPS_RM_Key_LowBattery_Alert()
#define  GET_PEPS_AuthFailWarning()    get_PEPS_AuthFailWarning()
#define  GET_PEPS_One_KeyStart_Swith_Error()    get_PEPS_One_KeyStart_Swith_Error()
#define  GET_PEPS_Press_Brake_Pedal_Alert()    get_PEPS_Press_Brake_Pedal_Alert()
#define  GET_PEPS_ESCLWarning()    get_PEPS_ESCLWarning()
#define  GET_PEPS_ETWS_Alert()    get_PEPS_ETWS_Alert()
#define  GET_PEPS_CID_Left_Alert()    get_PEPS_CID_Left_Alert()
#define  GET_PEPS_DOOR_Lock_Ig_NotOff_Alert()    get_PEPS_DOOR_Lock_Ig_NotOff_Alert()
#define  GET_PEPS_DOOR_Open_Lock_Alert()    get_PEPS_DOOR_Open_Lock_Alert()
#define  GET_PEPS_Key_Insid_Vehicle_Alert()    get_PEPS_Key_Insid_Vehicle_Alert()

typedef struct
{
    UINT8  Bcm_0x4a0MissingFlag;
    UINT8  Bcm_0x4a0NeverReceFlag;
    union
    {
      struct
     {
      UINT8 BCM_4A0_HIGH_BEAM_LIGHT_CMD:1;
      UINT8 BCM_4A0_LOW_BEAM_LIGHT_CMD:1;
      UINT8 BCM_4A0_FRONT_POSITION_LAMP_CMD:1;
      UINT8 BCM_4A0_FRONT_FOG_LAMP_CMD:1;
      UINT8 BCM_0x4A0_res4:1;
      UINT8 BCM_0x4A0_res5:1;
      UINT8 BCM_0x4A0_res6:1;
      UINT8 BCM_0x4A0_res7:1;
      UINT8 BCM_0x4A0_res9:1;
      UINT8 BCM_0x4A0_res10:1;
      UINT8 BCM_0x4A0_res11:1;
      UINT8 BCM_0x4A0_res12:1;
      UINT8 BCM_0x4A0_res13:1;
      UINT8 BCM_0x4A0_res14:1;
      UINT8 BCM_4A0_LEFT_TRUN_LIGHT_CMD:1;
      UINT8 BCM_4A0_RIGHT_TRUN_LIGHT_CMD:1;
      UINT8 BCM_0x4A0_res18:1;
      UINT8 BCM_0x4A0_res19:1;
      UINT8 BCM_0x4A0_res20:1;
      UINT8 BCM_0x4A0_res21:1;
      UINT8 BCM_0x4A0_res22:1;
      UINT8 BCM_4A0_EXTERIOR_LAMP_SWITCH:2;
      UINT8 BCM_0x4A0_res25:1;
      UINT8 BCM_0x4A0_res27:1;
      UINT8 BCM_0x4A0_res28:1;
      UINT8 BCM_0x4A0_res29:1;
      UINT8 BCM_4A0_REAR_FOG_LAMP_SWITCH:1;
      UINT8 BCM_0x4A0_res31:1;
      UINT8 BCM_0x4A0_res32:1;
      UINT8 BCM_0x4A0_res33:1;
      UINT8 BCM_0x4A0_res34:1;
      UINT8 BCM_0x4A0_res36:1;
      UINT8 BCM_0x4A0_res37:1;
      UINT8 BCM_0x4A0_res38:1;
      UINT8 BCM_0x4A0_res39:1;
      UINT8 BCM_0x4A0_res40:1;
      UINT8 BCM_0x4A0_res41:1;
      UINT8 BCM_0x4A0_res42:1;
      UINT8 BCM_0x4A0_res43:1;
      UINT8 BCM_0x4A0_res45:1;
      UINT8 BCM_0x4A0_res46:1;
      UINT8 BCM_0x4A0_res47:1;
      UINT8 BCM_0x4A0_res48:1;
      UINT8 BCM_0x4A0_res49:1;
      UINT8 BCM_0x4A0_res50:1;
      UINT8 BCM_0x4A0_res51:1;
      UINT8 BCM_0x4A0_res52:1;
      UINT8 BCM_0x4A0_res54:1;
      UINT8 BCM_0x4A0_res55:1;
      UINT8 BCM_0x4A0_res56:1;
      UINT8 BCM_0x4A0_res57:1;
      UINT8 BCM_0x4A0_res58:1;
      UINT8 BCM_0x4A0_res59:1;
      UINT8 BCM_0x4A0_res60:1;
      UINT8 BCM_0x4A0_res61:1;
      UINT8 BCM_0x4A0_res63:1;
      UINT8 BCM_0x4A0_res64:1;
      UINT8 BCM_0x4A0_res65:1;
      UINT8 BCM_0x4A0_res66:1;
      UINT8 BCM_0x4A0_res67:1;
      UINT8 BCM_0x4A0_res68:1;
      UINT8 BCM_0x4A0_res69:1;
      UINT8 BCM_0x4A0_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}bcm_0x4a0_struct;

extern   bcm_0x4a0_struct    bcm_0x4a0;
#define  GET_BCM_0X4A0_MISSING_FLAG()    get_bcm_0x4a0_missing_flag()
#define  GET_BCM_0X4A0_NEVER_RECE_FLAG()    get_bcm_0x4a0_never_reve_flag()
#define  GET_BCM_HIGH_BEAM_LIGHT_CMD()    get_BCM_HIGH_BEAM_LIGHT_CMD()
#define  GET_BCM_LOW_BEAM_LIGHT_CMD()    get_BCM_LOW_BEAM_LIGHT_CMD()
#define  GET_BCM_FRONT_POSITION_LAMP_CMD()    get_BCM_FRONT_POSITION_LAMP_CMD()
#define  GET_BCM_FRONT_FOG_LAMP_CMD()    get_BCM_FRONT_FOG_LAMP_CMD()
#define  GET_BCM_LEFT_TRUN_LIGHT_CMD()    get_BCM_LEFT_TRUN_LIGHT_CMD()
#define  GET_BCM_RIGHT_TRUN_LIGHT_CMD()    get_BCM_RIGHT_TRUN_LIGHT_CMD()
#define  GET_BCM_EXTERIOR_LAMP_SWITCH()    get_BCM_EXTERIOR_LAMP_SWITCH()
#define  GET_BCM_REAR_FOG_LAMP_SWITCH()    get_BCM_REAR_FOG_LAMP_SWITCH()

typedef struct
{
    UINT8  Uec_0x4c9MissingFlag;
    UINT8  Uec_0x4c9NeverReceFlag;
    union
    {
      struct
     {
      UINT8 UEC_4C9_Hs_HLBeam_Lamp_Left_Err:1;
      UINT8 UEC_4C9_Hs_HLBeam_Light_Left_Err:2;
      UINT8 UEC_4C9_Hs_HLBeam_Light_Right_Err:1;
      UINT8 UEC_4C9_Hs_HLBeam_Lamp_Right_Err:2;
      UINT8 UEC_4C9_Hs_HLBeam_FDSF_Err:2;
      UINT8 UEC_4C9_Hs_Position_Lamp_Err:2;
      UINT8 UEC_4C9_Hs_Daytime_Light_Left_Err:2;
      UINT8 UEC_4C9_Hs_Daytime_Light_Right_Err:2;
      UINT8 UEC_4C9_Hs_FrontFog_Lamp_Left_Err:2;
      UINT8 UEC_4C9_Hs_FrontFog_Lamp_Right_Err:2;
      UINT8 UEC_4C9_Hs_LR_Brake_Lamp_Err:2;
      UINT8 UEC_4C9_Hs_High_Brake_Lamp_Err:2;
      UINT8 UEC_0x4C9_res24:1;
      UINT8 UEC_0x4C9_res25:1;
      UINT8 UEC_0x4C9_res27:1;
      UINT8 UEC_0x4C9_res28:1;
      UINT8 UEC_0x4C9_res29:1;
      UINT8 UEC_0x4C9_res30:1;
      UINT8 UEC_0x4C9_res31:1;
      UINT8 UEC_0x4C9_res32:1;
      UINT8 UEC_0x4C9_res33:1;
      UINT8 UEC_0x4C9_res34:1;
      UINT8 UEC_0x4C9_res36:1;
      UINT8 UEC_0x4C9_res37:1;
      UINT8 UEC_0x4C9_res38:1;
      UINT8 UEC_0x4C9_res39:1;
      UINT8 UEC_0x4C9_res40:1;
      UINT8 UEC_0x4C9_res41:1;
      UINT8 UEC_0x4C9_res42:1;
      UINT8 UEC_0x4C9_res43:1;
      UINT8 UEC_0x4C9_res45:1;
      UINT8 UEC_0x4C9_res46:1;
      UINT8 UEC_0x4C9_res47:1;
      UINT8 UEC_0x4C9_res48:1;
      UINT8 UEC_0x4C9_res49:1;
      UINT8 UEC_0x4C9_res50:1;
      UINT8 UEC_0x4C9_res51:1;
      UINT8 UEC_0x4C9_res52:1;
      UINT8 UEC_0x4C9_res54:1;
      UINT8 UEC_0x4C9_res55:1;
      UINT8 UEC_0x4C9_res56:1;
      UINT8 UEC_0x4C9_res57:1;
      UINT8 UEC_0x4C9_res58:1;
      UINT8 UEC_0x4C9_res59:1;
      UINT8 UEC_0x4C9_res60:1;
      UINT8 UEC_0x4C9_res61:1;
      UINT8 UEC_0x4C9_res63:1;
      UINT8 UEC_0x4C9_res64:1;
      UINT8 UEC_0x4C9_res65:1;
      UINT8 UEC_0x4C9_res66:1;
      UINT8 UEC_0x4C9_res67:1;
      UINT8 UEC_0x4C9_res68:1;
      UINT8 UEC_0x4C9_res69:1;
      UINT8 UEC_0x4C9_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}uec_0x4c9_struct;

extern   uec_0x4c9_struct    uec_0x4c9;
#define  GET_UEC_0X4C9_MISSING_FLAG()    get_uec_0x4c9_missing_flag()
#define  GET_UEC_0X4C9_NEVER_RECE_FLAG()    get_uec_0x4c9_never_reve_flag()
#define  GET_UEC_Hs_HLBeam_Lamp_Left_Err()    get_UEC_Hs_HLBeam_Lamp_Left_Err()
#define  GET_UEC_Hs_HLBeam_Light_Left_Err()    get_UEC_Hs_HLBeam_Light_Left_Err()
#define  GET_UEC_Hs_HLBeam_Light_Right_Err()    get_UEC_Hs_HLBeam_Light_Right_Err()
#define  GET_UEC_Hs_HLBeam_Lamp_Right_Err()    get_UEC_Hs_HLBeam_Lamp_Right_Err()
#define  GET_UEC_Hs_HLBeam_FDSF_Err()    get_UEC_Hs_HLBeam_FDSF_Err()
#define  GET_UEC_Hs_Position_Lamp_Err()    get_UEC_Hs_Position_Lamp_Err()
#define  GET_UEC_Hs_Daytime_Light_Left_Err()    get_UEC_Hs_Daytime_Light_Left_Err()
#define  GET_UEC_Hs_Daytime_Light_Right_Err()    get_UEC_Hs_Daytime_Light_Right_Err()
#define  GET_UEC_Hs_FrontFog_Lamp_Left_Err()    get_UEC_Hs_FrontFog_Lamp_Left_Err()
#define  GET_UEC_Hs_FrontFog_Lamp_Right_Err()    get_UEC_Hs_FrontFog_Lamp_Right_Err()
#define  GET_UEC_Hs_LR_Brake_Lamp_Err()    get_UEC_Hs_LR_Brake_Lamp_Err()
#define  GET_UEC_Hs_High_Brake_Lamp_Err()    get_UEC_Hs_High_Brake_Lamp_Err()

typedef struct
{
    UINT8  Peps_0x570MissingFlag;
    UINT8  Peps_0x570NeverReceFlag;
    union
    {
      struct
     {
      UINT8 PEPS_570_Door_Lock_Cmd:2;
      UINT8 PEPS_0x570_res2:1;
      UINT8 PEPS_0x570_res3:1;
      UINT8 PEPS_0x570_res4:1;
      UINT8 PEPS_0x570_res5:1;
      UINT8 PEPS_0x570_res6:1;
      UINT8 PEPS_0x570_res7:1;
      UINT8 PEPS_0x570_res9:1;
      UINT8 PEPS_0x570_res10:1;
      UINT8 PEPS_0x570_res11:1;
      UINT8 PEPS_0x570_res12:1;
      UINT8 PEPS_0x570_res13:1;
      UINT8 PEPS_0x570_res14:1;
      UINT8 PEPS_0x570_res15:1;
      UINT8 PEPS_0x570_res16:1;
      UINT8 PEPS_0x570_res18:1;
      UINT8 PEPS_0x570_res19:1;
      UINT8 PEPS_0x570_res20:1;
      UINT8 PEPS_0x570_res21:1;
      UINT8 PEPS_0x570_res22:1;
      UINT8 PEPS_0x570_res23:1;
      UINT8 PEPS_0x570_res24:1;
      UINT8 PEPS_0x570_res25:1;
      UINT8 PEPS_0x570_res27:1;
      UINT8 PEPS_0x570_res28:1;
      UINT8 PEPS_0x570_res29:1;
      UINT8 PEPS_0x570_res30:1;
      UINT8 PEPS_0x570_res31:1;
      UINT8 PEPS_0x570_res32:1;
      UINT8 PEPS_0x570_res33:1;
      UINT8 PEPS_0x570_res34:1;
      UINT8 PEPS_0x570_res36:1;
      UINT8 PEPS_0x570_res37:1;
      UINT8 PEPS_0x570_res38:1;
      UINT8 PEPS_0x570_res39:1;
      UINT8 PEPS_0x570_res40:1;
      UINT8 PEPS_0x570_res41:1;
      UINT8 PEPS_0x570_res42:1;
      UINT8 PEPS_0x570_res43:1;
      UINT8 PEPS_0x570_res45:1;
      UINT8 PEPS_0x570_res46:1;
      UINT8 PEPS_0x570_res47:1;
      UINT8 PEPS_0x570_res48:1;
      UINT8 PEPS_0x570_res49:1;
      UINT8 PEPS_0x570_res50:1;
      UINT8 PEPS_0x570_res51:1;
      UINT8 PEPS_0x570_res52:1;
      UINT8 PEPS_0x570_res54:1;
      UINT8 PEPS_0x570_res55:1;
      UINT8 PEPS_0x570_res56:1;
      UINT8 PEPS_0x570_res57:1;
      UINT8 PEPS_0x570_res58:1;
      UINT8 PEPS_0x570_res59:1;
      UINT8 PEPS_0x570_res60:1;
      UINT8 PEPS_0x570_res61:1;
      UINT8 PEPS_0x570_res63:1;
      UINT8 PEPS_0x570_res64:1;
      UINT8 PEPS_0x570_res65:1;
      UINT8 PEPS_0x570_res66:1;
      UINT8 PEPS_0x570_res67:1;
      UINT8 PEPS_0x570_res68:1;
      UINT8 PEPS_0x570_res69:1;
      UINT8 PEPS_0x570_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}peps_0x570_struct;

extern   peps_0x570_struct    peps_0x570;
#define  GET_PEPS_0X570_MISSING_FLAG()    get_peps_0x570_missing_flag()
#define  GET_PEPS_0X570_NEVER_RECE_FLAG()    get_peps_0x570_never_reve_flag()
#define  GET_PEPS_Door_Lock_Cmd()    get_PEPS_Door_Lock_Cmd()

typedef struct
{
    UINT8  Bcm_0x660MissingFlag;
    UINT8  Bcm_0x660NeverReceFlag;
    union
    {
      struct
     {
      UINT8 BCM_0x660_res0:1;
      UINT8 BCM_0x660_res1:1;
      UINT8 BCM_660_FD_DOOR_STS:1;
      UINT8 BCM_660_FP_DOOR_STS:1;
      UINT8 BCM_0x660_res4:1;
      UINT8 BCM_0x660_res5:1;
      UINT8 BCM_660_FOLLOW_ME_HOME_STS:1;
      UINT8 BCM_660_TRUNK_STA:1;
      UINT8 BCM_0x660_res9:1;
      UINT8 BCM_0x660_res10:1;
      UINT8 BCM_0x660_res11:1;
      UINT8 BCM_0x660_res12:1;
      UINT8 BCM_0x660_res13:1;
      UINT8 BCM_0x660_res14:1;
      UINT8 BCM_0x660_res15:1;
      UINT8 BCM_0x660_res16:1;
      UINT8 BCM_0x660_res18:1;
      UINT8 BCM_0x660_res19:1;
      UINT8 BCM_0x660_res20:1;
      UINT8 BCM_0x660_res21:1;
      UINT8 BCM_0x660_res22:1;
      UINT8 BCM_0x660_res23:1;
      UINT8 BCM_0x660_res24:1;
      UINT8 BCM_0x660_res25:1;
      UINT8 BCM_0x660_res27:1;
      UINT8 BCM_0x660_res28:1;
      UINT8 BCM_0x660_res29:1;
      UINT8 BCM_0x660_res30:1;
      UINT8 BCM_0x660_res31:1;
      UINT8 BCM_0x660_res32:1;
      UINT8 BCM_0x660_res33:1;
      UINT8 BCM_0x660_res34:1;
      UINT8 BCM_0x660_res36:1;
      UINT8 BCM_0x660_res37:1;
      UINT8 BCM_0x660_res38:1;
      UINT8 BCM_0x660_res39:1;
      UINT8 BCM_0x660_res40:1;
      UINT8 BCM_0x660_res41:1;
      UINT8 BCM_0x660_res42:1;
      UINT8 BCM_0x660_res43:1;
      UINT8 BCM_0x660_res45:1;
      UINT8 BCM_0x660_res46:1;
      UINT8 BCM_0x660_res47:1;
      UINT8 BCM_0x660_res48:1;
      UINT8 BCM_0x660_res49:1;
      UINT8 BCM_0x660_res50:1;
      UINT8 BCM_0x660_res51:1;
      UINT8 BCM_0x660_res52:1;
      UINT8 BCM_0x660_res54:1;
      UINT8 BCM_0x660_res55:1;
      UINT8 BCM_0x660_res56:1;
      UINT8 BCM_0x660_res57:1;
      UINT8 BCM_0x660_res58:1;
      UINT8 BCM_0x660_res59:1;
      UINT8 BCM_0x660_res60:1;
      UINT8 BCM_0x660_res61:1;
      UINT8 BCM_0x660_res63:1;
      UINT8 BCM_0x660_res64:1;
      UINT8 BCM_0x660_res65:1;
      UINT8 BCM_0x660_res66:1;
      UINT8 BCM_0x660_res67:1;
      UINT8 BCM_0x660_res68:1;
      UINT8 BCM_0x660_res69:1;
      UINT8 BCM_0x660_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}bcm_0x660_struct;

extern   bcm_0x660_struct    bcm_0x660;
#define  GET_BCM_0X660_MISSING_FLAG()    get_bcm_0x660_missing_flag()
#define  GET_BCM_0X660_NEVER_RECE_FLAG()    get_bcm_0x660_never_reve_flag()
#define  GET_BCM_FD_DOOR_STS()    get_BCM_FD_DOOR_STS()
#define  GET_BCM_FP_DOOR_STS()    get_BCM_FP_DOOR_STS()
#define  GET_BCM_FOLLOW_ME_HOME_STS()    get_BCM_FOLLOW_ME_HOME_STS()
#define  GET_BCM_TRUNK_STA()    get_BCM_TRUNK_STA()

typedef struct
{
    UINT8  Rms_0x6f2MissingFlag;
    UINT8  Rms_0x6f2NeverReceFlag;
    union
    {
      struct
     {
      UINT8 RMS_6F2_YEAR_TIME:8;
      UINT8 RMS_0x6F2_res9:1;
      UINT8 RMS_0x6F2_res10:1;
      UINT8 RMS_0x6F2_res11:1;
      UINT8 RMS_0x6F2_res12:1;
      UINT8 RMS_6F2_MONTH_TIME:4;
      UINT8 RMS_6F2_DAY_TIME:5;
      UINT8 RMS_0x6F2_res23:1;
      UINT8 RMS_0x6F2_res24:1;
      UINT8 RMS_0x6F2_res25:1;
      UINT8 RMS_0x6F2_res27:1;
      UINT8 RMS_0x6F2_res28:1;
      UINT8 RMS_0x6F2_res29:1;
      UINT8 RMS_6F2_HOUR_TIME:5;
      UINT8 RMS_6F2_MINUTE_TIME:6;
      UINT8 RMS_0x6F2_res42:1;
      UINT8 RMS_0x6F2_res43:1;
      UINT8 RMS_0x6F2_res45:1;
      UINT8 RMS_0x6F2_res46:1;
      UINT8 RMS_0x6F2_res47:1;
      UINT8 RMS_0x6F2_res48:1;
      UINT8 RMS_0x6F2_res49:1;
      UINT8 RMS_0x6F2_res50:1;
      UINT8 RMS_0x6F2_res51:1;
      UINT8 RMS_0x6F2_res52:1;
      UINT8 RMS_0x6F2_res54:1;
      UINT8 RMS_0x6F2_res55:1;
      UINT8 RMS_0x6F2_res56:1;
      UINT8 RMS_0x6F2_res57:1;
      UINT8 RMS_0x6F2_res58:1;
      UINT8 RMS_0x6F2_res59:1;
      UINT8 RMS_0x6F2_res60:1;
      UINT8 RMS_0x6F2_res61:1;
      UINT8 RMS_0x6F2_res63:1;
      UINT8 RMS_0x6F2_res64:1;
      UINT8 RMS_0x6F2_res65:1;
      UINT8 RMS_0x6F2_res66:1;
      UINT8 RMS_0x6F2_res67:1;
      UINT8 RMS_0x6F2_res68:1;
      UINT8 RMS_0x6F2_res69:1;
      UINT8 RMS_0x6F2_res70:1;
    }Item;

    UINT8 arr[8];

    }UnionItem;

}rms_0x6f2_struct;

extern   rms_0x6f2_struct    rms_0x6f2;
#define  GET_RMS_0X6F2_MISSING_FLAG()    get_rms_0x6f2_missing_flag()
#define  GET_RMS_0X6F2_NEVER_RECE_FLAG()    get_rms_0x6f2_never_reve_flag()
#define  GET_RMS_YEAR_TIME()    get_RMS_YEAR_TIME()
#define  GET_RMS_MONTH_TIME()    get_RMS_MONTH_TIME()
#define  GET_RMS_DAY_TIME()    get_RMS_DAY_TIME()
#define  GET_RMS_HOUR_TIME()    get_RMS_HOUR_TIME()
#define  GET_RMS_MINUTE_TIME()    get_RMS_MINUTE_TIME()
