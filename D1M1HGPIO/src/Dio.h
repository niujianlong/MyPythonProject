/******************************************************************************
**  Project        BAIC C11 Cluster Project
**  (c) copyright 2015
**  Company       O-film
**                All rights reserved
**  Secrecy Level STRICTLY CONFIDENTIAL
*******************************************************************************
**
**          File  : Dio.h
**          Author: jiangyuchang
**
**          Date  : 2016-01-16
**
**
******************************************************************************/
#ifndef DIO_H
#define DIO_H

#ifndef DIO_C
#define EXTERN  extern
#else
#define EXTERN
#endif

/******************************************************************************
**    INCLUDES
******************************************************************************/
#include "Std_Types.h"
#include "Dio_Cfg.h"

/******************************************************************************
**    MACROS
******************************************************************************/
#define DIO_E_PARAM_INVALID_CHANNEL_ID    (0x0Au)
#define DIO_E_PARAM_INVALID_PORT_ID          (0x14u)
#define DIO_E_PARAM_INVALID_GROUP             (0x1Fu)
#define DIO_E_PARAM_CONFIG                           (0x10u)

#define DIO_E_PARAM_INVALID_DBNC_CHANNEL_ID                           (0xFFu)

#define      BIT00_MASK                                                         (0x00000001u)
#define      BIT01_MASK                                                         (0x00000002u)
#define      BIT02_MASK                                                         (0x00000004u)
#define      BIT03_MASK                                                         (0x00000008u)
#define      BIT04_MASK                                                         (0x00000010u)
#define      BIT05_MASK                                                         (0x00000020u)
#define      BIT06_MASK                                                         (0x00000040u)
#define      BIT07_MASK                                                         (0x00000080u)
#define      BIT08_MASK                                                         (0x00000100u)
#define      BIT09_MASK                                                         (0x00000200u)
#define      BIT10_MASK                                                         (0x00000400u)
#define      BIT11_MASK                                                         (0x00000800u)
#define      BIT12_MASK                                                         (0x00001000u)
#define      BIT13_MASK                                                         (0x00002000u)
#define      BIT14_MASK                                                         (0x00004000u)
#define      BIT15_MASK                                                         (0x00008000u)
#define      BIT16_MASK                                                         (0x00010000u)
#define      BIT17_MASK                                                         (0x00020000u)
#define      BIT18_MASK                                                         (0x00040000u)
#define      BIT19_MASK                                                         (0x00080000u)
#define      BIT20_MASK                                                         (0x00100000u)
#define      BIT21_MASK                                                         (0x00200000u)
#define      BIT22_MASK                                                         (0x00400000u)
#define      BIT23_MASK                                                         (0x00800000u)
#define      BIT24_MASK                                                         (0x01000000u)
#define      BIT25_MASK                                                         (0x02000000u)
#define      BIT26_MASK                                                         (0x04000000u)
#define      BIT27_MASK                                                         (0x08000000u)
#define      BIT28_MASK                                                         (0x10000000u)
#define      BIT29_MASK                                                         (0x20000000u)
#define      BIT30_MASK                                                         (0x40000000u)
#define      BIT31_MASK                                                         (0x80000000u)

#if defined(RH850D1M1H_176PIN)
/********************RH850 Port Pin Dio Register Map List************************/
#define      PIN_DIO_REG16_LIST                                  \
{ PORT0_0, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_0)       }, \
{ PORT0_1, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_1)       }, \
{ PORT0_2, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_2)       }, \
{ PORT0_3, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_3)       }, \
{ PORT0_4, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_4)       }, \
{ PORT0_5, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_5)       }, \
{ PORT0_6, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_6)       }, \
{ PORT0_7, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_7)       }, \
{ PORT0_8, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_8)       }, \
{ PORT0_9, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_9)       }, \
{ PORT0_10, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_10)       }, \
{ PORT0_11, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_11)       }, \
{ PORT0_12, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_12)       }, \
{ PORT0_13, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_13)       }, \
{ PORT0_14, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_14)       }, \
{ PORT1_0, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_0)       }, \
{ PORT1_1, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_1)       }, \
{ PORT1_2, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_2)       }, \
{ PORT1_3, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_3)       }, \
{ PORT1_4, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_4)       }, \
{ PORT1_5, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_5)       }, \
{ PORT1_6, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_6)       }, \
{ PORT1_7, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_7)       }, \
{ PORT1_8, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_8)       }, \
{ PORT1_9, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_9)       }, \
{ PORT1_10, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_10)       }, \
{ PORT1_11, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_11)       }, \
{ PORT1_12, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_12)       }, \
{ PORT1_13, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_13)       }, \
{ PORT1_14, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_14)       }, \
{ PORT1_15, (uint16 *) &P1 , (uint16 *) &PPR1, (uint16)(BIT_15)       }, \
{ PORT2_0, (uint16 *) &P2 , (uint16 *) &PPR2, (uint16)(BIT_0)       }, \
{ PORT2_1, (uint16 *) &P2 , (uint16 *) &PPR2, (uint16)(BIT_1)       }, \
{ PORT2_2, (uint16 *) &P2 , (uint16 *) &PPR2, (uint16)(BIT_2)       }, \
{ PORT2_3, (uint16 *) &P2 , (uint16 *) &PPR2, (uint16)(BIT_3)       }, \
{ PORT2_4, (uint16 *) &P2 , (uint16 *) &PPR2, (uint16)(BIT_4)       }, \
{ PORT2_5, (uint16 *) &P2 , (uint16 *) &PPR2, (uint16)(BIT_5)       }, \
{ PORT2_6, (uint16 *) &P2 , (uint16 *) &PPR2, (uint16)(BIT_6)       }, \
{ PORT8_0, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_0)       }, \
{ PORT8_1, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_1)       }, \
{ PORT8_2, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_2)       }, \
{ PORT8_3, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_3)       }, \
{ PORT8_4, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_4)       }, \
{ PORT8_5, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_5)       }, \
{ PORT8_6, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_6)       }, \
{ PORT8_7, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_7)       }, \
{ PORT8_8, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_8)       }, \
{ PORT8_9, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_9)       }, \
{ PORT8_10, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_10)       }, \
{ PORT8_11, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_11)       }, \
{ PORT8_12, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_12)       }, \
{ PORT9_0, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_0)       }, \
{ PORT9_1, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_1)       }, \
{ PORT9_2, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_2)       }, \
{ PORT9_3, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_3)       }, \
{ PORT9_4, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_4)       }, \
{ PORT9_5, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_5)       }, \
{ PORT9_6, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_6)       }, \
{ PORT10_0, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_0)       }, \
{ PORT10_1, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_1)       }, \
{ PORT10_2, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_2)       }, \
{ PORT10_3, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_3)       }, \
{ PORT10_4, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_4)       }, \
{ PORT10_5, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_5)       }, \
{ PORT10_6, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_6)       }, \
{ PORT10_7, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_7)       }, \
{ PORT10_8, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_8)       }, \
{ PORT10_9, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_9)       }, \
{ PORT10_10, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_10)       }, \
{ PORT10_11, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_11)       }, \
{ PORT10_12, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_12)       }, \
{ PORT10_13, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_13)       }, \
{ PORT10_14, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_14)       }, \
{ PORT10_15, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_15)       }, \
{ PORT11_0, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_0)       }, \
{ PORT11_1, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_1)       }, \
{ PORT11_2, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_2)       }, \
{ PORT11_3, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_3)       }, \
{ PORT11_4, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_4)       }, \
{ PORT11_5, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_5)       }, \
{ PORT11_6, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_6)       }, \
{ PORT11_7, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_7)       }, \
{ PORT11_8, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_8)       }, \
{ PORT11_9, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_9)       }, \
{ PORT11_10, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_10)       }, \
{ PORT11_11, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_11)       }, \
{ PORT11_12, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_12)       }, \
{ PORT11_13, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_13)       }, \
{ PORT11_14, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_14)       }, \
{ PORT11_15, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_15)       }, \
{ PORT12_0, (uint16 *) &P12 , (uint16 *) &PPR12, (uint16)(BIT_0)       }, \
{ PORT12_1, (uint16 *) &P12 , (uint16 *) &PPR12, (uint16)(BIT_1)       }, \
{ PORT12_2, (uint16 *) &P12 , (uint16 *) &PPR12, (uint16)(BIT_2)       }, \
{ PORT12_3, (uint16 *) &P12 , (uint16 *) &PPR12, (uint16)(BIT_3)       }, \
{ PORT12_4, (uint16 *) &P12 , (uint16 *) &PPR12, (uint16)(BIT_4)       }, \
{ PORT12_5, (uint16 *) &P12 , (uint16 *) &PPR12, (uint16)(BIT_5)       }, \
{ PORT18_0, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_0)       }, \
{ PORT18_1, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_1)       }, \
{ PORT18_2, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_2)       }, \
{ PORT18_3, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_3)       }, \
{ PORT18_4, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_4)       }, \
{ PORT18_5, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_5)       }, \
{ PORT18_6, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_6)       }, \
{ PORT18_7, (uint16 *) &P18 , (uint16 *) &PPR18, (uint16)(BIT_7)       }, \
{ PORT20_0, (uint16 *) &P20 , (uint16 *) &PPR20, (uint16)(BIT_0)       }, \
{ PORT20_1, (uint16 *) &P20 , (uint16 *) &PPR20, (uint16)(BIT_1)       }, \
{ PORT20_2, (uint16 *) &P20 , (uint16 *) &PPR20, (uint16)(BIT_2)       }, \
{ PORT20_3, (uint16 *) &P20 , (uint16 *) &PPR20, (uint16)(BIT_3)       }, \
{ PORT20_4, (uint16 *) &P20 , (uint16 *) &PPR20, (uint16)(BIT_4)       }, \
{ PORT20_5, (uint16 *) &P20 , (uint16 *) &PPR20, (uint16)(BIT_5)       }, \
{ JPORT0_0, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_0)       }, \
{ JPORT0_1, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_1)       }, \
{ JPORT0_2, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_2)       }, \
{ JPORT0_3, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_3)       }, \
{ JPORT0_4, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_4)       }, \
{ JPORT0_5, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_5)       }, \
{ JPORT0_6, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_6)       }, \
{ APORT0_0, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_0)       }, \
{ APORT0_1, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_1)       }, \
{ APORT0_2, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_2)       }, \
{ APORT0_3, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_3)       }, \
{ APORT0_4, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_4)       }, \
{ APORT0_5, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_5)       }, \
{ APORT0_6, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_6)       }, \
{ APORT0_7, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_7)       }, \
{ APORT0_8, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_8)       }, \
{ APORT0_9, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_9)       }, \
{ APORT0_10, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_10)       }, \
{ APORT0_11, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_11)       }, \
{ APORT0_12, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_12)       }, \
{ APORT0_13, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_13)       }, \
{ APORT0_14, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_14)       }, \
{ APORT0_15, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_15)       }, \
{ APORT1_0, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_0)       }, \
{ APORT1_1, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_1)       }, \
{ APORT1_2, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_2)       }, \
{ APORT1_3, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_3)       }, \
{ APORT1_4, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_4)       }, \
{ APORT1_5, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_5)       }, \
{ APORT1_6, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_6)       }, \
{ APORT1_7, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_7)       }, \
{ APORT1_8, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_8)       }, \
{ APORT1_9, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_9)       }, \
{ APORT1_10, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_10)       }, \
{ APORT1_11, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_11)       }, \
{ APORT1_12, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_12)       }, \
{ APORT1_13, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_13)       }, \
{ APORT1_14, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_14)       }, \
{ APORT1_15, (uint16 *) &AP1 , (uint16 *) &APPR1, (uint16)(BIT_15)       }, \
{ IPORT0_0, (uint16 *) NULL, (uint16 *) &IPPR0, (uint16)(BIT_0)       }, \



/********************RH850 Port  Dio Register Map List************************/
#define PORT_DIO_REG16_LIST      \
{ PORT0, (uint16 *) &P0 , (uint16 *) &PPR0   }, \
{ PORT1, (uint16 *) &P1 , (uint16 *) &PPR1   }, \
{ PORT2, (uint16 *) &P2 , (uint16 *) &PPR2   }, \
{ PORT8, (uint16 *) &P8 , (uint16 *) &PPR8   }, \
{ PORT9, (uint16 *) &P9 , (uint16 *) &PPR9   }, \
{ PORT10, (uint16 *) &P10 , (uint16 *) &PPR10   }, \
{ PORT11, (uint16 *) &P11 , (uint16 *) &PPR11   }, \
{ PORT12, (uint16 *) &P12 , (uint16 *) &PPR12   }, \
{ PORT18, (uint16 *) &P18 , (uint16 *) &PPR18   }, \
{ PORT20, (uint16 *) &P20 , (uint16 *) &PPR20   }, \
{ JPORT0, (uint16 *) &JP0 , (uint16 *) &JPPR0   }, \
{ APORT0, (uint16 *) &AP0 , (uint16 *) &APPR0   }, \
{ APORT1, (uint16 *) &AP1 , (uint16 *) &APPR1   }, \
{ IPORT0, (uint16 *) NULL , (uint16 *) &IPPR0   }, \

#elif defined(RH850F1L_100PIN)
/********************RH850 Port Pin Dio Register Map List************************/
#define      PIN_DIO_REG16_LIST                                  \
{ PORT0_0, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_0)       }, \
{ PORT0_1, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_1)       }, \
{ PORT0_2, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_2)       }, \
{ PORT0_3, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_3)       }, \
{ PORT0_4, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_4)       }, \
{ PORT0_5, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_5)       }, \
{ PORT0_6, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_6)       }, \
{ PORT0_7, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_7)       }, \
{ PORT0_8, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_8)       }, \
{ PORT0_9, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_9)       }, \
{ PORT0_10, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_10)       }, \
{ PORT0_11, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_11)       }, \
{ PORT0_12, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_12)       }, \
{ PORT0_13, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_13)       }, \
{ PORT0_14, (uint16 *) &P0 , (uint16 *) &PPR0, (uint16)(BIT_14)       }, \
{ PORT8_0, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_0)       }, \
{ PORT8_1, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_1)       }, \
{ PORT8_2, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_2)       }, \
{ PORT8_3, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_3)       }, \
{ PORT8_4, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_4)       }, \
{ PORT8_5, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_5)       }, \
{ PORT8_6, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_6)       }, \
{ PORT8_7, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_7)       }, \
{ PORT8_8, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_8)       }, \
{ PORT8_9, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_9)       }, \
{ PORT8_10, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_10)       }, \
{ PORT8_11, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_11)       }, \
{ PORT8_12, (uint16 *) &P8 , (uint16 *) &PPR8, (uint16)(BIT_12)       }, \
{ PORT9_0, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_0)       }, \
{ PORT9_1, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_1)       }, \
{ PORT9_2, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_2)       }, \
{ PORT9_3, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_3)       }, \
{ PORT9_4, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_4)       }, \
{ PORT9_5, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_5)       }, \
{ PORT9_6, (uint16 *) &P9 , (uint16 *) &PPR9, (uint16)(BIT_6)       }, \
{ PORT10_0, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_0)       }, \
{ PORT10_1, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_1)       }, \
{ PORT10_2, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_2)       }, \
{ PORT10_3, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_3)       }, \
{ PORT10_4, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_4)       }, \
{ PORT10_5, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_5)       }, \
{ PORT10_6, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_6)       }, \
{ PORT10_7, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_7)       }, \
{ PORT10_8, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_8)       }, \
{ PORT10_9, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_9)       }, \
{ PORT10_10, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_10)       }, \
{ PORT10_11, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_11)       }, \
{ PORT10_12, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_12)       }, \
{ PORT10_13, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_13)       }, \
{ PORT10_14, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_14)       }, \
{ PORT10_15, (uint16 *) &P10 , (uint16 *) &PPR10, (uint16)(BIT_15)       }, \
{ PORT11_0, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_0)       }, \
{ PORT11_1, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_1)       }, \
{ PORT11_2, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_2)       }, \
{ PORT11_3, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_3)       }, \
{ PORT11_4, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_4)       }, \
{ PORT11_5, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_5)       }, \
{ PORT11_6, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_6)       }, \
{ PORT11_7, (uint16 *) &P11 , (uint16 *) &PPR11, (uint16)(BIT_7)       }, \
{ JPORT0_0, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_0)       }, \
{ JPORT0_1, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_1)       }, \
{ JPORT0_2, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_2)       }, \
{ JPORT0_3, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_3)       }, \
{ JPORT0_4, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_4)       }, \
{ JPORT0_5, (uint16 *) &JP0 , (uint16 *) &JPPR0, (uint16)(BIT_5)       }, \
{ APORT0_0, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_0)       }, \
{ APORT0_1, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_1)       }, \
{ APORT0_2, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_2)       }, \
{ APORT0_3, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_3)       }, \
{ APORT0_4, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_4)       }, \
{ APORT0_5, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_5)       }, \
{ APORT0_6, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_6)       }, \
{ APORT0_7, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_7)       }, \
{ APORT0_8, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_8)       }, \
{ APORT0_9, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_9)       }, \
{ APORT0_10, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_10)       }, \
{ APORT0_11, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_11)       }, \
{ APORT0_12, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_12)       }, \
{ APORT0_13, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_13)       }, \
{ APORT0_14, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_14)       }, \
{ APORT0_15, (uint16 *) &AP0 , (uint16 *) &APPR0, (uint16)(BIT_15)       }, \


/********************RH850 Port  Dio Register Map List************************/
#define PORT_DIO_REG16_LIST      \
{ PORT0, (uint16 *) &P0 , (uint16 *) &PPR0   }, \
{ PORT8, (uint16 *) &P8 , (uint16 *) &PPR8   }, \
{ PORT9, (uint16 *) &P9 , (uint16 *) &PPR9   }, \
{ PORT10, (uint16 *) &P10 , (uint16 *) &PPR10   }, \
{ PORT11, (uint16 *) &P11 , (uint16 *) &PPR11   }, \
{ JPORT0, (uint16 *) &JP0 , (uint16 *) &JPPR0   }, \
{ APORT0, (uint16 *) &AP0 , (uint16 *) &APPR0   }, \

#endif

/******************************************************************************
**    DATA TYPES AND STRUCTURES DEFINITIONS
******************************************************************************/
/*This structure contains all post-build configurable parameters of the DIO driver.
**A pointer to this structure is passed to the DIO driver initialization function for configuration.*/
typedef struct 
{
   uint16 *address;
   uint16 value;
} Dio_ConfigType;

/*Numeric ID of a DIO channel.*/
typedef uint16 Dio_ChannelType;

/*Numeric ID of a DIO port.*/
typedef uint8 Dio_PortType;

/*Type for the definition of a channel group, which consists of several adjoining channels within a port.*/
typedef struct 
{
   Dio_PortType port;   /*This shall be the port on which the Channel group is defined.*/
   uint8 offset;           /*This element shall be the position of the Channel Group on the port, counted from the LSB.*/
   uint16 mask;          /*This element mask which defines the positions of the channel group.*/
} Dio_ChannelGroupType;

/*These are the possible levels a DIO channel can have (input or output)*/
typedef uint8 Dio_LevelType;

/*If the MCU owns ports of different port widths (e.g. 4, 8,16...Bit) 
**Dio_PortLevelType inherits the size of the largest port.*/
typedef uint16 Dio_PortLevelType;


/*Type of the external data structure containing the pin number, pin input register,
**pin outpur register, pin bit mask*/
typedef struct 
{
   Dio_ChannelType pin_index;   /*Pin number index*/
   uint16 *p;                            /*Port register*/
   uint16 *ppr;                         /*Port pin read register*/
   uint16 bit_mask;                  /*Port pin bit mask*/
} Pin_Dio_Reg16_Map;


/*Type of the external data structure containing the pin number, pin input register,
**pin outpur register, pin bit mask*/
typedef struct 
{
   Dio_PortType port_index;   /*Port index*/
   uint16 *p;                            /*Port register*/
   uint16 *ppr;                         /*Port pin read register*/
} Port_Dio_Reg16_Map;


typedef struct
{
   uint32   rawValue;    /* Raw value           */
   uint32   dbncValue;   /* Debounced value */
   uint32   cntBit0;        /* Counter bit 0       */
   uint32   cntBit1;        /* Counter bit 1       */
   uint32   cntBit2;        /* Counter bit 2       */
   uint32   cntBit3;        /* Counter bit 3       */
} Pin_Dio_DBNC;

typedef struct
{
   uint32   cntInitBit0;     /* Init value for bit 0         */
   uint32   cntInitBit1;     /* Init value for bit 1         */
   uint32   cntInitBit2;     /* Init value for bit 2         */
   uint32   cntInitBit3;     /* Init value for bit 2         */
} Pin_Dio_DBNC_Init_Value;

typedef enum
{
   DIO_00_DBNC_CHANNEL,
   DIO_01_DBNC_CHANNEL,
   DIO_02_DBNC_CHANNEL,
   DIO_03_DBNC_CHANNEL,
   DIO_04_DBNC_CHANNEL,
   DIO_05_DBNC_CHANNEL,
   DIO_06_DBNC_CHANNEL,
   DIO_07_DBNC_CHANNEL,
   DIO_08_DBNC_CHANNEL,
   DIO_09_DBNC_CHANNEL,
   DIO_10_DBNC_CHANNEL,
   DIO_11_DBNC_CHANNEL,
   DIO_12_DBNC_CHANNEL,
   DIO_13_DBNC_CHANNEL,
   DIO_14_DBNC_CHANNEL,
   DIO_15_DBNC_CHANNEL,
   DIO_16_DBNC_CHANNEL,
   DIO_17_DBNC_CHANNEL,
   DIO_18_DBNC_CHANNEL,
   DIO_19_DBNC_CHANNEL,
   DIO_20_DBNC_CHANNEL,
   DIO_21_DBNC_CHANNEL,
   DIO_22_DBNC_CHANNEL,
   DIO_23_DBNC_CHANNEL,
   DIO_24_DBNC_CHANNEL,
   DIO_25_DBNC_CHANNEL,
   DIO_26_DBNC_CHANNEL,
   DIO_27_DBNC_CHANNEL,
   DIO_28_DBNC_CHANNEL,
   DIO_29_DBNC_CHANNEL,
   DIO_30_DBNC_CHANNEL,
   DIO_31_DBNC_CHANNEL,
   DIO_DBNC_CHANNEL_MAX
} DIO_DBNC_CHANNEL;

/*****************************************************************************
*                       Externel Function Prototypes                           *
******************************************************************************/
#ifdef FULL_AUTOSAR
EXTERN void Dio_Init(const Dio_ConfigType *ConfigPtr);
#else
EXTERN void Dio_Init(void);
#endif
EXTERN Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
EXTERN void Dio_WriteChannel(Dio_ChannelType ChannelId, Dio_LevelType Level);
EXTERN Dio_LevelType Dio_FlipChannel(Dio_ChannelType ChannelId);
EXTERN Dio_PortLevelType Dio_ReadPort(Dio_PortType PortId);
EXTERN void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level);
EXTERN Dio_PortLevelType Dio_ReadChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr);
EXTERN void Dio_WriteChannelGroup(const Dio_ChannelGroupType *ChannelGroupIdPtr, Dio_PortLevelType Level);
EXTERN void Dio_GetVersionInfo(Std_VersionInfoType *Versioninfo);
EXTERN void Dio_Mainfunction(void);
EXTERN uint8 Dio_getDbncState(uint8 dbncChannelId);
EXTERN uint8 Dio_getRawState(uint8 dbncChannelId);


#undef EXTERN

#endif

/**************************************End Of File******************************************/