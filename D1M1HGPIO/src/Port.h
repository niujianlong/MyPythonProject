/******************************************************************************
**  Project        BAIC C11 Cluster Project
**  (c) copyright 2015
**  Company       O-film
**                All rights reserved
**  Secrecy Level STRICTLY CONFIDENTIAL
*******************************************************************************
**
**          File  : Port.h
**          Author: jiangyuchang
**
**          Date  : 2016-01-13
**
**
******************************************************************************/
#ifndef PORT_H
#define PORT_H

#ifndef PORT_C
#define EXTERN  extern
#else
#define EXTERN
#endif

/******************************************************************************
**    INCLUDES
******************************************************************************/
#include "Std_Types.h"
#include "Port_Cfg.h"

/******************************************************************************
**    MACROS
******************************************************************************/
#define   PORT_E_PARAM_PIN                                   (0x0A)
#define   PORT_E_DIRECTION_UNCHANGEABLE          (0x0B)
#define   PORT_E_PARAM_CONFIG                             (0x0C)
#define   PORT_E_PARAM_INVALID_MODE                 (0x0D)
#define   PORT_E_MODE_UNCHANGEABLE                  (0x0E)

#define   PORT_PROTECTION_REGISTER_WRITE_SUCCESS     (1u)
#define   PORT_PROTECTION_REGISTER_WRITE_FAIL            (0u)

#if defined(RH850D1M1H_176PIN)
/********************RH850 Port Pin Register Map List************************/
#define      PORT_PIN_REG16_LIST                                  \
{ PORT0_0, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_0)       }, \
{ PORT0_1, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_1)       }, \
{ PORT0_2, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_2)       }, \
{ PORT0_3, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_3)       }, \
{ PORT0_4, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_4)       }, \
{ PORT0_5, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_5)       }, \
{ PORT0_6, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_6)       }, \
{ PORT0_7, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_7)       }, \
{ PORT0_8, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_8)       }, \
{ PORT0_9, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_9)       }, \

{ PORT1_0, (uint16 *) &PMC1 , (uint16 *) &PM1, (uint16 *) &PFC1, (uint16 *) NULL,  (uint16)(BIT_0)       }, \
{ PORT1_1, (uint16 *) &PMC1 , (uint16 *) &PM1, (uint16 *) &PFC1, (uint16 *) NULL,  (uint16)(BIT_1)       }, \
{ PORT1_2, (uint16 *) &PMC1 , (uint16 *) &PM1, (uint16 *) &PFC1, (uint16 *) NULL,  (uint16)(BIT_2)       }, \
{ PORT1_3, (uint16 *) &PMC1 , (uint16 *) &PM1, (uint16 *) &PFC1, (uint16 *) NULL,  (uint16)(BIT_3)       }, \
{ PORT1_4, (uint16 *) &PMC1 , (uint16 *) &PM1, (uint16 *) &PFC1, (uint16 *) NULL,  (uint16)(BIT_4)       }, \
{ PORT1_5, (uint16 *) &PMC1 , (uint16 *) &PM1, (uint16 *) &PFC1, (uint16 *) NULL,  (uint16)(BIT_5)       }, \

{ PORT3_0, (uint16 *) &PMC3 , (uint16 *) &PM3, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_0)       }, \
{ PORT3_1, (uint16 *) &PMC3 , (uint16 *) &PM3, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_1)       }, \
{ PORT3_2, (uint16 *) &PMC3 , (uint16 *) &PM3, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_2)       }, \
{ PORT3_3, (uint16 *) &PMC3 , (uint16 *) &PM3, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_3)       }, \
{ PORT3_4, (uint16 *) &PMC3 , (uint16 *) &PM3, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_4)       }, \
{ PORT3_5, (uint16 *) &PMC3 , (uint16 *) &PM3, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_5)       }, \
{ PORT3_6, (uint16 *) &PMC3 , (uint16 *) &PM3, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_6)       }, \
{ PORT3_7, (uint16 *) &PMC3 , (uint16 *) &PM8, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_0)       }, \
{ PORT3_8, (uint16 *) &PMC3 , (uint16 *) &PM8, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_1)       }, \
{ PORT3_9, (uint16 *) &PMC3 , (uint16 *) &PM8, (uint16 *) &PFC3, (uint16 *) &PFCE3,  (uint16)(BIT_2)       }, \

{ PORT8_3, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT8_4, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT8_5, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ PORT8_6, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ PORT8_7, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_7)       }, \
{ PORT8_8, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_8)       }, \
{ PORT8_9, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_9)       }, \
{ PORT8_10, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_10)       }, \
{ PORT8_11, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_11)       }, \
{ PORT8_12, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_12)       }, \
{ PORT9_0, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ PORT9_1, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ PORT9_2, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ PORT9_3, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT9_4, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT9_5, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ PORT9_6, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ PORT10_0, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_0)       }, \
{ PORT10_1, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_1)       }, \
{ PORT10_2, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_2)       }, \
{ PORT10_3, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_3)       }, \
{ PORT10_4, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_4)       }, \
{ PORT10_5, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_5)       }, \
{ PORT10_6, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_6)       }, \
{ PORT10_7, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_7)       }, \
{ PORT10_8, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_8)       }, \
{ PORT10_9, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_9)       }, \
{ PORT10_10, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_10)       }, \
{ PORT10_11, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_11)       }, \
{ PORT10_12, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_12)       }, \
{ PORT10_13, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_13)       }, \
{ PORT10_14, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_14)       }, \
{ PORT10_15, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_15)       }, \
{ PORT11_0, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_0)       }, \
{ PORT11_1, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_1)       }, \
{ PORT11_2, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_2)       }, \
{ PORT11_3, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_3)       }, \
{ PORT11_4, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_4)       }, \
{ PORT11_5, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_5)       }, \
{ PORT11_6, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_6)       }, \
{ PORT11_7, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_7)       }, \
{ PORT11_8, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_8)       }, \
{ PORT11_9, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_9)       }, \
{ PORT11_10, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_10)       }, \
{ PORT11_11, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_11)       }, \
{ PORT11_12, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_12)       }, \
{ PORT11_13, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_13)       }, \
{ PORT11_14, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_14)       }, \
{ PORT11_15, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) &PFCAE11, (uint16)(BIT_15)       }, \
{ PORT12_0, (uint16 *) &PMC12 , (uint16 *) &PM12, (uint16 *) &PFC12, (uint16 *) &PFCE12, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ PORT12_1, (uint16 *) &PMC12 , (uint16 *) &PM12, (uint16 *) &PFC12, (uint16 *) &PFCE12, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ PORT12_2, (uint16 *) &PMC12 , (uint16 *) &PM12, (uint16 *) &PFC12, (uint16 *) &PFCE12, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ PORT12_3, (uint16 *) &PMC12 , (uint16 *) &PM12, (uint16 *) &PFC12, (uint16 *) &PFCE12, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT12_4, (uint16 *) &PMC12 , (uint16 *) &PM12, (uint16 *) &PFC12, (uint16 *) &PFCE12, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT12_5, (uint16 *) &PMC12 , (uint16 *) &PM12, (uint16 *) &PFC12, (uint16 *) &PFCE12, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ PORT18_0, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ PORT18_1, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ PORT18_2, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ PORT18_3, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT18_4, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT18_5, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ PORT18_6, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ PORT18_7, (uint16 *) &PMC18 , (uint16 *) &PM18, (uint16 *) &PFC18, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_7)       }, \
{ PORT20_0, (uint16 *) &PMC20 , (uint16 *) &PM20, (uint16 *) &PFC20, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ PORT20_1, (uint16 *) &PMC20 , (uint16 *) &PM20, (uint16 *) &PFC20, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ PORT20_2, (uint16 *) &PMC20 , (uint16 *) &PM20, (uint16 *) &PFC20, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ PORT20_3, (uint16 *) &PMC20 , (uint16 *) &PM20, (uint16 *) &PFC20, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT20_4, (uint16 *) &PMC20 , (uint16 *) &PM20, (uint16 *) &PFC20, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT20_5, (uint16 *) &PMC20 , (uint16 *) &PM20, (uint16 *) &PFC20, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ JPORT0_0, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ JPORT0_1, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ JPORT0_2, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ JPORT0_3, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ JPORT0_4, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ JPORT0_5, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ JPORT0_6, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ APORT0_0, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ APORT0_1, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ APORT0_2, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ APORT0_3, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ APORT0_4, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ APORT0_5, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ APORT0_6, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ APORT0_7, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_7)       }, \
{ APORT0_8, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_8)       }, \
{ APORT0_9, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_9)       }, \
{ APORT0_10, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_10)       }, \
{ APORT0_11, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_11)       }, \
{ APORT0_12, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_12)       }, \
{ APORT0_13, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_13)       }, \
{ APORT0_14, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_14)       }, \
{ APORT0_15, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_15)       }, \
{ APORT1_0, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ APORT1_1, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ APORT1_2, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ APORT1_3, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ APORT1_4, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ APORT1_5, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ APORT1_6, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ APORT1_7, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_7)       }, \
{ APORT1_8, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_8)       }, \
{ APORT1_9, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_9)       }, \
{ APORT1_10, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_10)       }, \
{ APORT1_11, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_11)       }, \
{ APORT1_12, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_12)       }, \
{ APORT1_13, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_13)       }, \
{ APORT1_14, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_14)       }, \
{ APORT1_15, (uint16 *) NULL , (uint16 *) &APM1, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_15)       }, \




/********************RH850 Port Init Register List************************/
#define      PORT_INIT_REG16_LIST                                  \
{ (uint16 *) &PMC0    ,                                                     (uint16)(PMC0_INIT)       }, \
{ (uint16 *) &PM0     ,                                                      (uint16)(PM0_INIT)        }, \
{ (uint16 *) &PU0     ,                                                      (uint16)(PU0_INIT)        }, \
{ (uint16 *) &P0      ,                                                       (uint16)(P0_INIT)         }, \
{ (uint16 *) &PIPC0    ,                                                    (uint16)(PIPC0_INIT)         }, \
{ (uint16 *) &PFCAE0    ,                                                  (uint16)(PFCAE0_INIT)         }, \
{ (uint16 *) &PFCE0    ,                                                    (uint16)(PFCE0_INIT)         }, \
{ (uint16 *) &PFC0    ,                                                      (uint16)(PFC0_INIT)         }, \
{ (uint16 *) &PBDC0    ,                                                    (uint16)(PBDC0_INIT)         }, \
{ (uint16 *) &PD0    ,                                                       (uint16)(PD0_INIT)         }, \
{ (uint16 *) &PIBC0    ,                                                    (uint16)(PIBC0_INIT)         }, \
{ (uint16 *) &PMC1    ,                                                     (uint16)(PMC1_INIT)       }, \
{ (uint16 *) &PM1     ,                                                      (uint16)(PM1_INIT)        }, \
{ (uint16 *) &PU1     ,                                                      (uint16)(PU1_INIT)        }, \
{ (uint16 *) &P1      ,                                                       (uint16)(P1_INIT)         }, \
{ (uint16 *) &PFC1    ,                                                      (uint16)(PFC1_INIT)         }, \
{ (uint16 *) &PBDC1    ,                                                    (uint16)(PBDC1_INIT)         }, \
{ (uint16 *) &PIBC1    ,                                                    (uint16)(PIBC1_INIT)         }, \
{ (uint16 *) &PMC2    ,                                                     (uint16)(PMC2_INIT)       }, \
{ (uint16 *) &PM2     ,                                                      (uint16)(PM2_INIT)        }, \
{ (uint16 *) &PU2     ,                                                      (uint16)(PU2_INIT)        }, \
{ (uint16 *) &P2      ,                                                       (uint16)(P2_INIT)         }, \
{ (uint16 *) &PBDC2    ,                                                    (uint16)(PBDC2_INIT)         }, \
{ (uint16 *) &PIBC2    ,                                                    (uint16)(PIBC2_INIT)         }, \
{ (uint16 *) &PMC8    ,                                                     (uint16)(PMC8_INIT)       }, \
{ (uint16 *) &PM8     ,                                                      (uint16)(PM8_INIT)        }, \
{ (uint16 *) &PU8     ,                                                      (uint16)(PU8_INIT)        }, \
{ (uint16 *) &P8      ,                                                       (uint16)(P8_INIT)         }, \
{ (uint16 *) &PFCE8    ,                                                    (uint16)(PFCE8_INIT)         }, \
{ (uint16 *) &PFC8    ,                                                      (uint16)(PFC8_INIT)         }, \
{ (uint16 *) &PBDC8    ,                                                    (uint16)(PBDC8_INIT)         }, \
{ (uint16 *) &PD8    ,                                                       (uint16)(PD8_INIT)         }, \
{ (uint16 *) &PIBC8    ,                                                    (uint16)(PIBC8_INIT)         }, \
{ (uint16 *) &PMC9    ,                                                     (uint16)(PMC9_INIT)       }, \
{ (uint16 *) &PM9     ,                                                      (uint16)(PM9_INIT)        }, \
{ (uint16 *) &PU9     ,                                                      (uint16)(PU9_INIT)        }, \
{ (uint16 *) &P9      ,                                                       (uint16)(P9_INIT)         }, \
{ (uint16 *) &PFCE9    ,                                                    (uint16)(PFCE9_INIT)         }, \
{ (uint16 *) &PFC9    ,                                                      (uint16)(PFC9_INIT)         }, \
{ (uint16 *) &PBDC9    ,                                                    (uint16)(PBDC9_INIT)         }, \
{ (uint16 *) &PD9    ,                                                        (uint16)(PD9_INIT)         }, \
{ (uint16 *) &PIBC9    ,                                                     (uint16)(PIBC9_INIT)         }, \
{ (uint16 *) &PMC10    ,                                                    (uint16)(PMC10_INIT)       }, \
{ (uint16 *) &PM10     ,                                                     (uint16)(PM10_INIT)        }, \
{ (uint16 *) &PU10     ,                                                     (uint16)(PU10_INIT)        }, \
{ (uint16 *) &P10      ,                                                      (uint16)(P10_INIT)         }, \
{ (uint16 *) &PIPC10    ,                                                    (uint16)(PIPC10_INIT)         }, \
{ (uint16 *) &PFCAE10    ,                                                  (uint16)(PFCE10_INIT)         }, \
{ (uint16 *) &PFCE10    ,                                                    (uint16)(PFCE10_INIT)         }, \
{ (uint16 *) &PFC10    ,                                                      (uint16)(PFC10_INIT)         }, \
{ (uint16 *) &PBDC10    ,                                                    (uint16)(PBDC10_INIT)         }, \
{ (uint16 *) &PD10    ,                                                       (uint16)(PD10_INIT)         }, \
{ (uint16 *) &PIBC10    ,                                                    (uint16)(PIBC10_INIT)         }, \
{ (uint16 *) &PMC11    ,                                                     (uint16)(PMC11_INIT)       }, \
{ (uint16 *) &PM11     ,                                                      (uint16)(PM11_INIT)        }, \
{ (uint16 *) &PU11     ,                                                      (uint16)(PU11_INIT)        }, \
{ (uint16 *) &P11      ,                                                       (uint16)(P11_INIT)         }, \
{ (uint16 *) &PIPC11    ,                                                    (uint16)(PIPC11_INIT)         }, \
{ (uint16 *) &PFCAE11    ,                                                  (uint16)(PFCAE11_INIT)         }, \
{ (uint16 *) &PFCE11    ,                                                    (uint16)(PFCE11_INIT)         }, \
{ (uint16 *) &PFC11    ,                                                      (uint16)(PFC11_INIT)         }, \
{ (uint16 *) &PBDC11    ,                                                    (uint16)(PBDC11_INIT)         }, \
{ (uint16 *) &PD11    ,                                                       (uint16)(PD11_INIT)         }, \
{ (uint16 *) &PIBC11    ,                                                    (uint16)(PIBC11_INIT)         }, \
{ (uint16 *) &PMC12    ,                                                     (uint16)(PMC12_INIT)       }, \
{ (uint16 *) &PM12     ,                                                      (uint16)(PM12_INIT)        }, \
{ (uint16 *) &PU12     ,                                                      (uint16)(PU12_INIT)        }, \
{ (uint16 *) &P12      ,                                                       (uint16)(P12_INIT)         }, \
{ (uint16 *) &PFCE12    ,                                                    (uint16)(PFCE12_INIT)         }, \
{ (uint16 *) &PFC12    ,                                                      (uint16)(PFC12_INIT)         }, \
{ (uint16 *) &PBDC12    ,                                                    (uint16)(PBDC12_INIT)         }, \
{ (uint16 *) &PIBC12    ,                                                    (uint16)(PIBC12_INIT)         }, \
{ (uint16 *) &PMC18    ,                                                     (uint16)(PMC18_INIT)       }, \
{ (uint16 *) &PM18     ,                                                      (uint16)(PM18_INIT)        }, \
{ (uint16 *) &PU18     ,                                                      (uint16)(PU18_INIT)        }, \
{ (uint16 *) &P18      ,                                                       (uint16)(P18_INIT)         }, \
{ (uint16 *) &PFC18    ,                                                      (uint16)(PFC18_INIT)         }, \
{ (uint16 *) &PBDC18    ,                                                    (uint16)(PBDC18_INIT)         }, \
{ (uint16 *) &PIBC18    ,                                                    (uint16)(PIBC18_INIT)         }, \
{ (uint16 *) &PMC20    ,                                                     (uint16)(PMC20_INIT)       }, \
{ (uint16 *) &PM20     ,                                                      (uint16)(PM20_INIT)        }, \
{ (uint16 *) &PU20     ,                                                      (uint16)(PU20_INIT)        }, \
{ (uint16 *) &P20      ,                                                       (uint16)(P20_INIT)         }, \
{ (uint16 *) &PFC20    ,                                                      (uint16)(PFC20_INIT)         }, \
{ (uint16 *) &PBDC20    ,                                                    (uint16)(PBDC20_INIT)         }, \
{ (uint16 *) &PIBC20    ,                                                     (uint16)(PIBC20_INIT)         }, \
{ (uint16 *) &JPMC0    ,                                                      (uint16)(JPMC0_INIT)       }, \
{ (uint16 *) &JPM0     ,                                                       (uint16)(JPM0_INIT)        }, \
{ (uint16 *) &JPU0     ,                                                       (uint16)(JPU0_INIT)        }, \
{ (uint16 *) &JP0      ,                                                        (uint16)(JP0_INIT)         }, \
{ (uint16 *) &JPFC0    ,                                                      (uint16)(JPFC0_INIT)         }, \
{ (uint16 *) &JPBDC0    ,                                                    (uint16)(JPBDC0_INIT)         }, \
{ (uint16 *) &JPD0    ,                                                        (uint16)(JPD0_INIT)         }, \
{ (uint16 *) &JPIBC0    ,                                                     (uint16)(JPIBC0_INIT)         }, \
{ (uint16 *) &APM0     ,                                                      (uint16)(APM0_INIT)        }, \
{ (uint16 *) &AP0      ,                                                       (uint16)(AP0_INIT)         }, \
{ (uint16 *) &APBDC0    ,                                                   (uint16)(APBDC0_INIT)         }, \
{ (uint16 *) &APIBC0    ,                                                    (uint16)(APIBC0_INIT)         }, \
{ (uint16 *) &APM1     ,                                                      (uint16)(APM1_INIT)        }, \
{ (uint16 *) &AP1      ,                                                       (uint16)(AP1_INIT)         }, \
{ (uint16 *) &APBDC1    ,                                                   (uint16)(APBDC1_INIT)         }, \
{ (uint16 *) &APIBC1    ,                                                    (uint16)(APIBC1_INIT)         }, \
{ (uint16 *) &IPIBC0    ,                                                     (uint16)(IPIBC0_INIT)         }, \


/********************RH850 Port Sleep Register List************************/
#define      PORT_SLEEP_REG16_LIST                                  \
{ (uint16 *) &PMC0    ,                                                     (uint16)(PMC0_SLEEP)       }, \
{ (uint16 *) &PM0     ,                                                      (uint16)(PM0_SLEEP)        }, \
{ (uint16 *) &PU0     ,                                                      (uint16)(PU0_SLEEP)        }, \
{ (uint16 *) &P0      ,                                                       (uint16)(P0_SLEEP)         }, \
{ (uint16 *) &PIPC0    ,                                                    (uint16)(PIPC0_SLEEP)         }, \
{ (uint16 *) &PFCAE0    ,                                                  (uint16)(PFCAE0_SLEEP)         }, \
{ (uint16 *) &PFCE0    ,                                                    (uint16)(PFCE0_SLEEP)         }, \
{ (uint16 *) &PFC0    ,                                                      (uint16)(PFC0_SLEEP)         }, \
{ (uint16 *) &PBDC0    ,                                                    (uint16)(PBDC0_SLEEP)         }, \
{ (uint16 *) &PD0    ,                                                       (uint16)(PD0_SLEEP)         }, \
{ (uint16 *) &PIBC0    ,                                                    (uint16)(PIBC0_SLEEP)         }, \
{ (uint16 *) &PMC1    ,                                                     (uint16)(PMC1_SLEEP)       }, \
{ (uint16 *) &PM1     ,                                                      (uint16)(PM1_SLEEP)        }, \
{ (uint16 *) &PU1     ,                                                      (uint16)(PU1_SLEEP)        }, \
{ (uint16 *) &P1      ,                                                       (uint16)(P1_SLEEP)         }, \
{ (uint16 *) &PFC1    ,                                                      (uint16)(PFC1_SLEEP)         }, \
{ (uint16 *) &PBDC1    ,                                                    (uint16)(PBDC1_SLEEP)         }, \
{ (uint16 *) &PIBC1    ,                                                    (uint16)(PIBC1_SLEEP)         }, \
{ (uint16 *) &PMC2    ,                                                     (uint16)(PMC2_SLEEP)       }, \
{ (uint16 *) &PM2     ,                                                      (uint16)(PM2_SLEEP)        }, \
{ (uint16 *) &PU2     ,                                                      (uint16)(PU2_SLEEP)        }, \
{ (uint16 *) &P2      ,                                                       (uint16)(P2_SLEEP)         }, \
{ (uint16 *) &PBDC2    ,                                                    (uint16)(PBDC2_SLEEP)         }, \
{ (uint16 *) &PIBC2    ,                                                    (uint16)(PIBC2_SLEEP)         }, \
{ (uint16 *) &PMC8    ,                                                     (uint16)(PMC8_SLEEP)       }, \
{ (uint16 *) &PM8     ,                                                      (uint16)(PM8_SLEEP)        }, \
{ (uint16 *) &PU8     ,                                                      (uint16)(PU8_SLEEP)        }, \
{ (uint16 *) &P8      ,                                                       (uint16)(P8_SLEEP)         }, \
{ (uint16 *) &PFCE8    ,                                                    (uint16)(PFCE8_SLEEP)         }, \
{ (uint16 *) &PFC8    ,                                                      (uint16)(PFC8_SLEEP)         }, \
{ (uint16 *) &PBDC8    ,                                                    (uint16)(PBDC8_SLEEP)         }, \
{ (uint16 *) &PD8    ,                                                       (uint16)(PD8_SLEEP)         }, \
{ (uint16 *) &PIBC8    ,                                                    (uint16)(PIBC8_SLEEP)         }, \
{ (uint16 *) &PMC9    ,                                                     (uint16)(PMC9_SLEEP)       }, \
{ (uint16 *) &PM9     ,                                                      (uint16)(PM9_SLEEP)        }, \
{ (uint16 *) &PU9     ,                                                      (uint16)(PU9_SLEEP)        }, \
{ (uint16 *) &P9      ,                                                       (uint16)(P9_SLEEP)         }, \
{ (uint16 *) &PFCE9    ,                                                    (uint16)(PFCE9_SLEEP)         }, \
{ (uint16 *) &PFC9    ,                                                      (uint16)(PFC9_SLEEP)         }, \
{ (uint16 *) &PBDC9    ,                                                    (uint16)(PBDC9_SLEEP)         }, \
{ (uint16 *) &PD9    ,                                                        (uint16)(PD9_SLEEP)         }, \
{ (uint16 *) &PIBC9    ,                                                     (uint16)(PIBC9_SLEEP)         }, \
{ (uint16 *) &PMC10    ,                                                    (uint16)(PMC10_SLEEP)       }, \
{ (uint16 *) &PM10     ,                                                     (uint16)(PM10_SLEEP)        }, \
{ (uint16 *) &PU10     ,                                                     (uint16)(PU10_SLEEP)        }, \
{ (uint16 *) &P10      ,                                                      (uint16)(P10_SLEEP)         }, \
{ (uint16 *) &PIPC10    ,                                                    (uint16)(PIPC10_SLEEP)         }, \
{ (uint16 *) &PFCAE10    ,                                                  (uint16)(PFCE10_SLEEP)         }, \
{ (uint16 *) &PFCE10    ,                                                    (uint16)(PFCE10_SLEEP)         }, \
{ (uint16 *) &PFC10    ,                                                      (uint16)(PFC10_SLEEP)         }, \
{ (uint16 *) &PBDC10    ,                                                    (uint16)(PBDC10_SLEEP)         }, \
{ (uint16 *) &PD10    ,                                                       (uint16)(PD10_SLEEP)         }, \
{ (uint16 *) &PIBC10    ,                                                    (uint16)(PIBC10_SLEEP)         }, \
{ (uint16 *) &PMC11    ,                                                     (uint16)(PMC11_SLEEP)       }, \
{ (uint16 *) &PM11     ,                                                      (uint16)(PM11_SLEEP)        }, \
{ (uint16 *) &PU11     ,                                                      (uint16)(PU11_SLEEP)        }, \
{ (uint16 *) &P11      ,                                                       (uint16)(P11_SLEEP)         }, \
{ (uint16 *) &PIPC11    ,                                                    (uint16)(PIPC11_SLEEP)         }, \
{ (uint16 *) &PFCAE11    ,                                                  (uint16)(PFCAE11_SLEEP)         }, \
{ (uint16 *) &PFCE11    ,                                                    (uint16)(PFCE11_SLEEP)         }, \
{ (uint16 *) &PFC11    ,                                                      (uint16)(PFC11_SLEEP)         }, \
{ (uint16 *) &PBDC11    ,                                                    (uint16)(PBDC11_SLEEP)         }, \
{ (uint16 *) &PD11    ,                                                       (uint16)(PD11_SLEEP)         }, \
{ (uint16 *) &PIBC11    ,                                                    (uint16)(PIBC11_SLEEP)         }, \
{ (uint16 *) &PMC12    ,                                                     (uint16)(PMC12_SLEEP)       }, \
{ (uint16 *) &PM12     ,                                                      (uint16)(PM12_SLEEP)        }, \
{ (uint16 *) &PU12     ,                                                      (uint16)(PU12_SLEEP)        }, \
{ (uint16 *) &P12      ,                                                       (uint16)(P12_SLEEP)         }, \
{ (uint16 *) &PFCE12    ,                                                    (uint16)(PFCE12_SLEEP)         }, \
{ (uint16 *) &PFC12    ,                                                      (uint16)(PFC12_SLEEP)         }, \
{ (uint16 *) &PBDC12    ,                                                    (uint16)(PBDC12_SLEEP)         }, \
{ (uint16 *) &PIBC12    ,                                                    (uint16)(PIBC12_SLEEP)         }, \
{ (uint16 *) &PMC18    ,                                                     (uint16)(PMC18_SLEEP)       }, \
{ (uint16 *) &PM18     ,                                                      (uint16)(PM18_SLEEP)        }, \
{ (uint16 *) &PU18     ,                                                      (uint16)(PU18_SLEEP)        }, \
{ (uint16 *) &P18      ,                                                       (uint16)(P18_SLEEP)         }, \
{ (uint16 *) &PFC18    ,                                                      (uint16)(PFC18_SLEEP)         }, \
{ (uint16 *) &PBDC18    ,                                                    (uint16)(PBDC18_SLEEP)         }, \
{ (uint16 *) &PIBC18    ,                                                    (uint16)(PIBC18_SLEEP)         }, \
{ (uint16 *) &PMC20    ,                                                     (uint16)(PMC20_SLEEP)       }, \
{ (uint16 *) &PM20     ,                                                      (uint16)(PM20_SLEEP)        }, \
{ (uint16 *) &PU20     ,                                                      (uint16)(PU20_SLEEP)        }, \
{ (uint16 *) &P20      ,                                                       (uint16)(P20_SLEEP)         }, \
{ (uint16 *) &PFC20    ,                                                      (uint16)(PFC20_SLEEP)         }, \
{ (uint16 *) &PBDC20    ,                                                    (uint16)(PBDC20_SLEEP)         }, \
{ (uint16 *) &PIBC20    ,                                                     (uint16)(PIBC20_SLEEP)         }, \
{ (uint16 *) &JPMC0    ,                                                      (uint16)(JPMC0_SLEEP)       }, \
{ (uint16 *) &JPM0     ,                                                       (uint16)(JPM0_SLEEP)        }, \
{ (uint16 *) &JPU0     ,                                                       (uint16)(JPU0_SLEEP)        }, \
{ (uint16 *) &JP0      ,                                                        (uint16)(JP0_SLEEP)         }, \
{ (uint16 *) &JPFC0    ,                                                      (uint16)(JPFC0_SLEEP)         }, \
{ (uint16 *) &JPBDC0    ,                                                    (uint16)(JPBDC0_SLEEP)         }, \
{ (uint16 *) &JPD0    ,                                                        (uint16)(JPD0_SLEEP)         }, \
{ (uint16 *) &JPIBC0    ,                                                     (uint16)(JPIBC0_SLEEP)         }, \
{ (uint16 *) &APM0     ,                                                      (uint16)(APM0_SLEEP)        }, \
{ (uint16 *) &AP0      ,                                                       (uint16)(AP0_SLEEP)         }, \
{ (uint16 *) &APBDC0    ,                                                   (uint16)(APBDC0_SLEEP)         }, \
{ (uint16 *) &APIBC0    ,                                                    (uint16)(APIBC0_SLEEP)         }, \
{ (uint16 *) &APM1     ,                                                      (uint16)(APM1_SLEEP)        }, \
{ (uint16 *) &AP1      ,                                                       (uint16)(AP1_SLEEP)         }, \
{ (uint16 *) &APBDC1    ,                                                   (uint16)(APBDC1_SLEEP)         }, \
{ (uint16 *) &APIBC1    ,                                                    (uint16)(APIBC1_SLEEP)         }, \
{ (uint16 *) &IPIBC0    ,                                                     (uint16)(IPIBC0_SLEEP)         }, \


/********************RH850 Port Wakeup Register List************************/
#define      PORT_WAKEUP_REG16_LIST                                  \
{ (uint16 *) &PMC0    ,                                                     (uint16)(PMC0_WAKEUP)       }, \
{ (uint16 *) &PM0     ,                                                      (uint16)(PM0_WAKEUP)        }, \
{ (uint16 *) &PU0     ,                                                      (uint16)(PU0_WAKEUP)        }, \
{ (uint16 *) &P0      ,                                                       (uint16)(P0_WAKEUP)         }, \
{ (uint16 *) &PIPC0    ,                                                    (uint16)(PIPC0_WAKEUP)         }, \
{ (uint16 *) &PFCAE0    ,                                                  (uint16)(PFCAE0_WAKEUP)         }, \
{ (uint16 *) &PFCE0    ,                                                    (uint16)(PFCE0_WAKEUP)         }, \
{ (uint16 *) &PFC0    ,                                                      (uint16)(PFC0_WAKEUP)         }, \
{ (uint16 *) &PBDC0    ,                                                    (uint16)(PBDC0_WAKEUP)         }, \
{ (uint16 *) &PD0    ,                                                       (uint16)(PD0_WAKEUP)         }, \
{ (uint16 *) &PIBC0    ,                                                    (uint16)(PIBC0_WAKEUP)         }, \
{ (uint16 *) &PMC1    ,                                                     (uint16)(PMC1_WAKEUP)       }, \
{ (uint16 *) &PM1     ,                                                      (uint16)(PM1_WAKEUP)        }, \
{ (uint16 *) &PU1     ,                                                      (uint16)(PU1_WAKEUP)        }, \
{ (uint16 *) &P1      ,                                                       (uint16)(P1_WAKEUP)         }, \
{ (uint16 *) &PFC1    ,                                                      (uint16)(PFC1_WAKEUP)         }, \
{ (uint16 *) &PBDC1    ,                                                    (uint16)(PBDC1_WAKEUP)         }, \
{ (uint16 *) &PIBC1    ,                                                    (uint16)(PIBC1_WAKEUP)         }, \
{ (uint16 *) &PMC2    ,                                                     (uint16)(PMC2_WAKEUP)       }, \
{ (uint16 *) &PM2     ,                                                      (uint16)(PM2_WAKEUP)        }, \
{ (uint16 *) &PU2     ,                                                      (uint16)(PU2_WAKEUP)        }, \
{ (uint16 *) &P2      ,                                                       (uint16)(P2_WAKEUP)         }, \
{ (uint16 *) &PBDC2    ,                                                    (uint16)(PBDC2_WAKEUP)         }, \
{ (uint16 *) &PIBC2    ,                                                    (uint16)(PIBC2_WAKEUP)         }, \
{ (uint16 *) &PMC8    ,                                                     (uint16)(PMC8_WAKEUP)       }, \
{ (uint16 *) &PM8     ,                                                      (uint16)(PM8_WAKEUP)        }, \
{ (uint16 *) &PU8     ,                                                      (uint16)(PU8_WAKEUP)        }, \
{ (uint16 *) &P8      ,                                                       (uint16)(P8_WAKEUP)         }, \
{ (uint16 *) &PFCE8    ,                                                    (uint16)(PFCE8_WAKEUP)         }, \
{ (uint16 *) &PFC8    ,                                                      (uint16)(PFC8_WAKEUP)         }, \
{ (uint16 *) &PBDC8    ,                                                    (uint16)(PBDC8_WAKEUP)         }, \
{ (uint16 *) &PD8    ,                                                       (uint16)(PD8_WAKEUP)         }, \
{ (uint16 *) &PIBC8    ,                                                    (uint16)(PIBC8_WAKEUP)         }, \
{ (uint16 *) &PMC9    ,                                                     (uint16)(PMC9_WAKEUP)       }, \
{ (uint16 *) &PM9     ,                                                      (uint16)(PM9_WAKEUP)        }, \
{ (uint16 *) &PU9     ,                                                      (uint16)(PU9_WAKEUP)        }, \
{ (uint16 *) &P9      ,                                                       (uint16)(P9_WAKEUP)         }, \
{ (uint16 *) &PFCE9    ,                                                    (uint16)(PFCE9_WAKEUP)         }, \
{ (uint16 *) &PFC9    ,                                                      (uint16)(PFC9_WAKEUP)         }, \
{ (uint16 *) &PBDC9    ,                                                    (uint16)(PBDC9_WAKEUP)         }, \
{ (uint16 *) &PD9    ,                                                        (uint16)(PD9_WAKEUP)         }, \
{ (uint16 *) &PIBC9    ,                                                     (uint16)(PIBC9_WAKEUP)         }, \
{ (uint16 *) &PMC10    ,                                                    (uint16)(PMC10_WAKEUP)       }, \
{ (uint16 *) &PM10     ,                                                     (uint16)(PM10_WAKEUP)        }, \
{ (uint16 *) &PU10     ,                                                     (uint16)(PU10_WAKEUP)        }, \
{ (uint16 *) &P10      ,                                                      (uint16)(P10_WAKEUP)         }, \
{ (uint16 *) &PIPC10    ,                                                    (uint16)(PIPC10_WAKEUP)         }, \
{ (uint16 *) &PFCAE10    ,                                                  (uint16)(PFCE10_WAKEUP)         }, \
{ (uint16 *) &PFCE10    ,                                                    (uint16)(PFCE10_WAKEUP)         }, \
{ (uint16 *) &PFC10    ,                                                      (uint16)(PFC10_WAKEUP)         }, \
{ (uint16 *) &PBDC10    ,                                                    (uint16)(PBDC10_WAKEUP)         }, \
{ (uint16 *) &PD10    ,                                                       (uint16)(PD10_WAKEUP)         }, \
{ (uint16 *) &PIBC10    ,                                                    (uint16)(PIBC10_WAKEUP)         }, \
{ (uint16 *) &PMC11    ,                                                     (uint16)(PMC11_WAKEUP)       }, \
{ (uint16 *) &PM11     ,                                                      (uint16)(PM11_WAKEUP)        }, \
{ (uint16 *) &PU11     ,                                                      (uint16)(PU11_WAKEUP)        }, \
{ (uint16 *) &P11      ,                                                       (uint16)(P11_WAKEUP)         }, \
{ (uint16 *) &PIPC11    ,                                                    (uint16)(PIPC11_WAKEUP)         }, \
{ (uint16 *) &PFCAE11    ,                                                  (uint16)(PFCAE11_WAKEUP)         }, \
{ (uint16 *) &PFCE11    ,                                                    (uint16)(PFCE11_WAKEUP)         }, \
{ (uint16 *) &PFC11    ,                                                      (uint16)(PFC11_WAKEUP)         }, \
{ (uint16 *) &PBDC11    ,                                                    (uint16)(PBDC11_WAKEUP)         }, \
{ (uint16 *) &PD11    ,                                                       (uint16)(PD11_WAKEUP)         }, \
{ (uint16 *) &PIBC11    ,                                                    (uint16)(PIBC11_WAKEUP)         }, \
{ (uint16 *) &PMC12    ,                                                     (uint16)(PMC12_WAKEUP)       }, \
{ (uint16 *) &PM12     ,                                                      (uint16)(PM12_WAKEUP)        }, \
{ (uint16 *) &PU12     ,                                                      (uint16)(PU12_WAKEUP)        }, \
{ (uint16 *) &P12      ,                                                       (uint16)(P12_WAKEUP)         }, \
{ (uint16 *) &PFCE12    ,                                                    (uint16)(PFCE12_WAKEUP)         }, \
{ (uint16 *) &PFC12    ,                                                      (uint16)(PFC12_WAKEUP)         }, \
{ (uint16 *) &PBDC12    ,                                                    (uint16)(PBDC12_WAKEUP)         }, \
{ (uint16 *) &PIBC12    ,                                                    (uint16)(PIBC12_WAKEUP)         }, \
{ (uint16 *) &PMC18    ,                                                     (uint16)(PMC18_WAKEUP)       }, \
{ (uint16 *) &PM18     ,                                                      (uint16)(PM18_WAKEUP)        }, \
{ (uint16 *) &PU18     ,                                                      (uint16)(PU18_WAKEUP)        }, \
{ (uint16 *) &P18      ,                                                       (uint16)(P18_WAKEUP)         }, \
{ (uint16 *) &PFC18    ,                                                      (uint16)(PFC18_WAKEUP)         }, \
{ (uint16 *) &PBDC18    ,                                                    (uint16)(PBDC18_WAKEUP)         }, \
{ (uint16 *) &PIBC18    ,                                                    (uint16)(PIBC18_WAKEUP)         }, \
{ (uint16 *) &PMC20    ,                                                     (uint16)(PMC20_WAKEUP)       }, \
{ (uint16 *) &PM20     ,                                                      (uint16)(PM20_WAKEUP)        }, \
{ (uint16 *) &PU20     ,                                                      (uint16)(PU20_WAKEUP)        }, \
{ (uint16 *) &P20      ,                                                       (uint16)(P20_WAKEUP)         }, \
{ (uint16 *) &PFC20    ,                                                      (uint16)(PFC20_WAKEUP)         }, \
{ (uint16 *) &PBDC20    ,                                                    (uint16)(PBDC20_WAKEUP)         }, \
{ (uint16 *) &PIBC20    ,                                                     (uint16)(PIBC20_WAKEUP)         }, \
{ (uint16 *) &JPMC0    ,                                                      (uint16)(JPMC0_WAKEUP)       }, \
{ (uint16 *) &JPM0     ,                                                       (uint16)(JPM0_WAKEUP)        }, \
{ (uint16 *) &JPU0     ,                                                       (uint16)(JPU0_WAKEUP)        }, \
{ (uint16 *) &JP0      ,                                                        (uint16)(JP0_WAKEUP)         }, \
{ (uint16 *) &JPFC0    ,                                                      (uint16)(JPFC0_WAKEUP)         }, \
{ (uint16 *) &JPBDC0    ,                                                    (uint16)(JPBDC0_WAKEUP)         }, \
{ (uint16 *) &JPD0    ,                                                        (uint16)(JPD0_WAKEUP)         }, \
{ (uint16 *) &JPIBC0    ,                                                     (uint16)(JPIBC0_WAKEUP)         }, \
{ (uint16 *) &APM0     ,                                                      (uint16)(APM0_WAKEUP)        }, \
{ (uint16 *) &AP0      ,                                                       (uint16)(AP0_WAKEUP)         }, \
{ (uint16 *) &APBDC0    ,                                                   (uint16)(APBDC0_WAKEUP)         }, \
{ (uint16 *) &APIBC0    ,                                                    (uint16)(APIBC0_WAKEUP)         }, \
{ (uint16 *) &APM1     ,                                                      (uint16)(APM1_WAKEUP)        }, \
{ (uint16 *) &AP1      ,                                                       (uint16)(AP1_WAKEUP)         }, \
{ (uint16 *) &APBDC1    ,                                                   (uint16)(APBDC1_WAKEUP)         }, \
{ (uint16 *) &APIBC1    ,                                                    (uint16)(APIBC1_WAKEUP)         }, \
{ (uint16 *) &IPIBC0    ,                                                     (uint16)(IPIBC0_WAKEUP)         }, \

#elif defined(RH850F1L_100PIN)
/********************RH850 Port Pin Register Map List************************/
#define      PORT_PIN_REG16_LIST                                  \
{ PORT0_0, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0,  (uint16)(BIT_0)       }, \
{ PORT0_1, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_1)       }, \
{ PORT0_2, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_2)       }, \
{ PORT0_3, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_3)       }, \
{ PORT0_4, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_4)       }, \
{ PORT0_5, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_5)       }, \
{ PORT0_6, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_6)       }, \
{ PORT0_7, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_7)       }, \
{ PORT0_8, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_8)       }, \
{ PORT0_9, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_9)       }, \
{ PORT0_10, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_10)       }, \
{ PORT0_11, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_11)       }, \
{ PORT0_12, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_12)       }, \
{ PORT0_13, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_13)       }, \
{ PORT0_14, (uint16 *) &PMC0 , (uint16 *) &PM0, (uint16 *) &PFC0, (uint16 *) &PFCE0, (uint16 *) &PFCAE0, (uint16)(BIT_14)       }, \
{ PORT8_0, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ PORT8_1, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ PORT8_2, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ PORT8_3, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT8_4, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT8_5, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ PORT8_6, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ PORT8_7, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_7)       }, \
{ PORT8_8, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_8)       }, \
{ PORT8_9, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_9)       }, \
{ PORT8_10, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_10)       }, \
{ PORT8_11, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_11)       }, \
{ PORT8_12, (uint16 *) &PMC8 , (uint16 *) &PM8, (uint16 *) &PFC8, (uint16 *) &PFCE8, (uint16 *) NULL, (uint16)(BIT_12)       }, \
{ PORT9_0, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ PORT9_1, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ PORT9_2, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ PORT9_3, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT9_4, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT9_5, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ PORT9_6, (uint16 *) &PMC9 , (uint16 *) &PM9, (uint16 *) &PFC9, (uint16 *) &PFCE9, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ PORT10_0, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_0)       }, \
{ PORT10_1, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_1)       }, \
{ PORT10_2, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_2)       }, \
{ PORT10_3, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_3)       }, \
{ PORT10_4, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_4)       }, \
{ PORT10_5, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_5)       }, \
{ PORT10_6, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_6)       }, \
{ PORT10_7, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_7)       }, \
{ PORT10_8, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_8)       }, \
{ PORT10_9, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_9)       }, \
{ PORT10_10, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_10)       }, \
{ PORT10_11, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_11)       }, \
{ PORT10_12, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_12)       }, \
{ PORT10_13, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_13)       }, \
{ PORT10_14, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_14)       }, \
{ PORT10_15, (uint16 *) &PMC10 , (uint16 *) &PM10, (uint16 *) &PFC10, (uint16 *) &PFCE10, (uint16 *) &PFCAE10, (uint16)(BIT_15)       }, \
{ PORT11_0, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ PORT11_1, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ PORT11_2, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ PORT11_3, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ PORT11_4, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ PORT11_5, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ PORT11_6, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ PORT11_7, (uint16 *) &PMC11 , (uint16 *) &PM11, (uint16 *) &PFC11, (uint16 *) &PFCE11, (uint16 *) NULL, (uint16)(BIT_7)       }, \
{ JPORT0_0, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ JPORT0_1, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ JPORT0_2, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ JPORT0_3, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ JPORT0_4, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ JPORT0_5, (uint16 *) &JPMC0 , (uint16 *) &JPM0, (uint16 *) &JPFC0, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ APORT0_0, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_0)       }, \
{ APORT0_1, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_1)       }, \
{ APORT0_2, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_2)       }, \
{ APORT0_3, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_3)       }, \
{ APORT0_4, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_4)       }, \
{ APORT0_5, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_5)       }, \
{ APORT0_6, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_6)       }, \
{ APORT0_7, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_7)       }, \
{ APORT0_8, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_8)       }, \
{ APORT0_9, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_9)       }, \
{ APORT0_10, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_10)       }, \
{ APORT0_11, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_11)       }, \
{ APORT0_12, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_12)       }, \
{ APORT0_13, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_13)       }, \
{ APORT0_14, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_14)       }, \
{ APORT0_15, (uint16 *) NULL , (uint16 *) &APM0, (uint16 *) NULL, (uint16 *) NULL, (uint16 *) NULL, (uint16)(BIT_15)       }, \


/********************RH850 Port Init Register List************************/
#define      PORT_INIT_REG16_LIST                                  \
{ (uint16 *) &PMC0    ,                                                     (uint16)(PMC0_INIT)       }, \
{ (uint16 *) &PM0     ,                                                      (uint16)(PM0_INIT)        }, \
{ (uint16 *) &PU0     ,                                                      (uint16)(PU0_INIT)        }, \
{ (uint16 *) &P0      ,                                                       (uint16)(P0_INIT)         }, \
{ (uint16 *) &PIPC0    ,                                                    (uint16)(PIPC0_INIT)         }, \
{ (uint16 *) &PFCAE0    ,                                                  (uint16)(PFCAE0_INIT)         }, \
{ (uint16 *) &PFCE0    ,                                                    (uint16)(PFCE0_INIT)         }, \
{ (uint16 *) &PFC0    ,                                                      (uint16)(PFC0_INIT)         }, \
{ (uint16 *) &PBDC0    ,                                                    (uint16)(PBDC0_INIT)         }, \
{ (uint16 *) &PD0    ,                                                       (uint16)(PD0_INIT)         }, \
{ (uint16 *) &PIBC0    ,                                                    (uint16)(PIBC0_INIT)         }, \
{ (uint16 *) &PMC8    ,                                                     (uint16)(PMC8_INIT)       }, \
{ (uint16 *) &PM8     ,                                                      (uint16)(PM8_INIT)        }, \
{ (uint16 *) &PU8     ,                                                      (uint16)(PU8_INIT)        }, \
{ (uint16 *) &P8      ,                                                       (uint16)(P8_INIT)         }, \
{ (uint16 *) &PFCE8    ,                                                    (uint16)(PFCE8_INIT)         }, \
{ (uint16 *) &PFC8    ,                                                      (uint16)(PFC8_INIT)         }, \
{ (uint16 *) &PBDC8    ,                                                    (uint16)(PBDC8_INIT)         }, \
{ (uint16 *) &PD8    ,                                                       (uint16)(PD8_INIT)         }, \
{ (uint16 *) &PIBC8    ,                                                    (uint16)(PIBC8_INIT)         }, \
{ (uint16 *) &PMC9    ,                                                     (uint16)(PMC9_INIT)       }, \
{ (uint16 *) &PM9     ,                                                      (uint16)(PM9_INIT)        }, \
{ (uint16 *) &PU9     ,                                                      (uint16)(PU9_INIT)        }, \
{ (uint16 *) &P9      ,                                                       (uint16)(P9_INIT)         }, \
{ (uint16 *) &PFCE9    ,                                                    (uint16)(PFCE9_INIT)         }, \
{ (uint16 *) &PFC9    ,                                                      (uint16)(PFC9_INIT)         }, \
{ (uint16 *) &PBDC9    ,                                                    (uint16)(PBDC9_INIT)         }, \
{ (uint16 *) &PD9    ,                                                        (uint16)(PD9_INIT)         }, \
{ (uint16 *) &PIBC9    ,                                                     (uint16)(PIBC9_INIT)         }, \
{ (uint16 *) &PMC10    ,                                                    (uint16)(PMC10_INIT)       }, \
{ (uint16 *) &PM10     ,                                                     (uint16)(PM10_INIT)        }, \
{ (uint16 *) &PU10     ,                                                     (uint16)(PU10_INIT)        }, \
{ (uint16 *) &P10      ,                                                      (uint16)(P10_INIT)         }, \
{ (uint16 *) &PIPC10    ,                                                    (uint16)(PIPC10_INIT)         }, \
{ (uint16 *) &PFCAE10    ,                                                  (uint16)(PFCE10_INIT)         }, \
{ (uint16 *) &PFCE10    ,                                                    (uint16)(PFCE10_INIT)         }, \
{ (uint16 *) &PFC10    ,                                                      (uint16)(PFC10_INIT)         }, \
{ (uint16 *) &PBDC10    ,                                                    (uint16)(PBDC10_INIT)         }, \
{ (uint16 *) &PD10    ,                                                       (uint16)(PD10_INIT)         }, \
{ (uint16 *) &PIBC10    ,                                                    (uint16)(PIBC10_INIT)         }, \
{ (uint16 *) &PMC11    ,                                                     (uint16)(PMC11_INIT)       }, \
{ (uint16 *) &PM11     ,                                                      (uint16)(PM11_INIT)        }, \
{ (uint16 *) &PU11     ,                                                      (uint16)(PU11_INIT)        }, \
{ (uint16 *) &P11      ,                                                       (uint16)(P11_INIT)         }, \
{ (uint16 *) &PIPC11    ,                                                    (uint16)(PIPC11_INIT)         }, \
{ (uint16 *) &PFCE11    ,                                                    (uint16)(PFCE11_INIT)         }, \
{ (uint16 *) &PFC11    ,                                                      (uint16)(PFC11_INIT)         }, \
{ (uint16 *) &PBDC11    ,                                                    (uint16)(PBDC11_INIT)         }, \
{ (uint16 *) &PD11    ,                                                       (uint16)(PD11_INIT)         }, \
{ (uint16 *) &PIBC11    ,                                                    (uint16)(PIBC11_INIT)         }, \
{ (uint16 *) &JPMC0    ,                                                      (uint16)(JPMC0_INIT)       }, \
{ (uint16 *) &JPM0     ,                                                       (uint16)(JPM0_INIT)        }, \
{ (uint16 *) &JPU0     ,                                                       (uint16)(JPU0_INIT)        }, \
{ (uint16 *) &JP0      ,                                                        (uint16)(JP0_INIT)         }, \
{ (uint16 *) &JPFC0    ,                                                      (uint16)(JPFC0_INIT)         }, \
{ (uint16 *) &JPBDC0    ,                                                    (uint16)(JPBDC0_INIT)         }, \
{ (uint16 *) &JPD0    ,                                                        (uint16)(JPD0_INIT)         }, \
{ (uint16 *) &JPIBC0    ,                                                     (uint16)(JPIBC0_INIT)         }, \
{ (uint16 *) &APM0     ,                                                      (uint16)(APM0_INIT)        }, \
{ (uint16 *) &AP0      ,                                                       (uint16)(AP0_INIT)         }, \
{ (uint16 *) &APBDC0    ,                                                   (uint16)(APBDC0_INIT)         }, \
{ (uint16 *) &APIBC0    ,                                                    (uint16)(APIBC0_INIT)         }, \


/********************RH850 Port Sleep Register List************************/
#define      PORT_SLEEP_REG16_LIST                                  \
{ (uint16 *) &PMC0    ,                                                     (uint16)(PMC0_SLEEP)       }, \
{ (uint16 *) &PM0     ,                                                      (uint16)(PM0_SLEEP)        }, \
{ (uint16 *) &PU0     ,                                                      (uint16)(PU0_SLEEP)        }, \
{ (uint16 *) &P0      ,                                                       (uint16)(P0_SLEEP)         }, \
{ (uint16 *) &PIPC0    ,                                                    (uint16)(PIPC0_SLEEP)         }, \
{ (uint16 *) &PFCAE0    ,                                                  (uint16)(PFCAE0_SLEEP)         }, \
{ (uint16 *) &PFCE0    ,                                                    (uint16)(PFCE0_SLEEP)         }, \
{ (uint16 *) &PFC0    ,                                                      (uint16)(PFC0_SLEEP)         }, \
{ (uint16 *) &PBDC0    ,                                                    (uint16)(PBDC0_SLEEP)         }, \
{ (uint16 *) &PD0    ,                                                       (uint16)(PD0_SLEEP)         }, \
{ (uint16 *) &PIBC0    ,                                                    (uint16)(PIBC0_SLEEP)         }, \
{ (uint16 *) &PMC8    ,                                                     (uint16)(PMC8_SLEEP)       }, \
{ (uint16 *) &PM8     ,                                                      (uint16)(PM8_SLEEP)        }, \
{ (uint16 *) &PU8     ,                                                      (uint16)(PU8_SLEEP)        }, \
{ (uint16 *) &P8      ,                                                       (uint16)(P8_SLEEP)         }, \
{ (uint16 *) &PFCE8    ,                                                    (uint16)(PFCE8_SLEEP)         }, \
{ (uint16 *) &PFC8    ,                                                      (uint16)(PFC8_SLEEP)         }, \
{ (uint16 *) &PBDC8    ,                                                    (uint16)(PBDC8_SLEEP)         }, \
{ (uint16 *) &PD8    ,                                                       (uint16)(PD8_SLEEP)         }, \
{ (uint16 *) &PIBC8    ,                                                    (uint16)(PIBC8_SLEEP)         }, \
{ (uint16 *) &PMC9    ,                                                     (uint16)(PMC9_SLEEP)       }, \
{ (uint16 *) &PM9     ,                                                      (uint16)(PM9_SLEEP)        }, \
{ (uint16 *) &PU9     ,                                                      (uint16)(PU9_SLEEP)        }, \
{ (uint16 *) &P9      ,                                                       (uint16)(P9_SLEEP)         }, \
{ (uint16 *) &PFCE9    ,                                                    (uint16)(PFCE9_SLEEP)         }, \
{ (uint16 *) &PFC9    ,                                                      (uint16)(PFC9_SLEEP)         }, \
{ (uint16 *) &PBDC9    ,                                                    (uint16)(PBDC9_SLEEP)         }, \
{ (uint16 *) &PD9    ,                                                        (uint16)(PD9_SLEEP)         }, \
{ (uint16 *) &PIBC9    ,                                                     (uint16)(PIBC9_SLEEP)         }, \
{ (uint16 *) &PMC10    ,                                                    (uint16)(PMC10_SLEEP)       }, \
{ (uint16 *) &PM10     ,                                                     (uint16)(PM10_SLEEP)        }, \
{ (uint16 *) &PU10     ,                                                     (uint16)(PU10_SLEEP)        }, \
{ (uint16 *) &P10      ,                                                      (uint16)(P10_SLEEP)         }, \
{ (uint16 *) &PIPC10    ,                                                    (uint16)(PIPC10_SLEEP)         }, \
{ (uint16 *) &PFCAE10    ,                                                  (uint16)(PFCE10_SLEEP)         }, \
{ (uint16 *) &PFCE10    ,                                                    (uint16)(PFCE10_SLEEP)         }, \
{ (uint16 *) &PFC10    ,                                                      (uint16)(PFC10_SLEEP)         }, \
{ (uint16 *) &PBDC10    ,                                                    (uint16)(PBDC10_SLEEP)         }, \
{ (uint16 *) &PD10    ,                                                       (uint16)(PD10_SLEEP)         }, \
{ (uint16 *) &PIBC10    ,                                                    (uint16)(PIBC10_SLEEP)         }, \
{ (uint16 *) &PMC11    ,                                                     (uint16)(PMC11_SLEEP)       }, \
{ (uint16 *) &PM11     ,                                                      (uint16)(PM11_SLEEP)        }, \
{ (uint16 *) &PU11     ,                                                      (uint16)(PU11_SLEEP)        }, \
{ (uint16 *) &P11      ,                                                       (uint16)(P11_SLEEP)         }, \
{ (uint16 *) &PIPC11    ,                                                    (uint16)(PIPC11_SLEEP)         }, \
{ (uint16 *) &PFCE11    ,                                                    (uint16)(PFCE11_SLEEP)         }, \
{ (uint16 *) &PFC11    ,                                                      (uint16)(PFC11_SLEEP)         }, \
{ (uint16 *) &PBDC11    ,                                                    (uint16)(PBDC11_SLEEP)         }, \
{ (uint16 *) &PD11    ,                                                       (uint16)(PD11_SLEEP)         }, \
{ (uint16 *) &PIBC11    ,                                                    (uint16)(PIBC11_SLEEP)         }, \
{ (uint16 *) &JPMC0    ,                                                      (uint16)(JPMC0_SLEEP)       }, \
{ (uint16 *) &JPM0     ,                                                       (uint16)(JPM0_SLEEP)        }, \
{ (uint16 *) &JPU0     ,                                                       (uint16)(JPU0_SLEEP)        }, \
{ (uint16 *) &JP0      ,                                                        (uint16)(JP0_SLEEP)         }, \
{ (uint16 *) &JPFC0    ,                                                      (uint16)(JPFC0_SLEEP)         }, \
{ (uint16 *) &JPBDC0    ,                                                    (uint16)(JPBDC0_SLEEP)         }, \
{ (uint16 *) &JPD0    ,                                                        (uint16)(JPD0_SLEEP)         }, \
{ (uint16 *) &JPIBC0    ,                                                     (uint16)(JPIBC0_SLEEP)         }, \
{ (uint16 *) &APM0     ,                                                      (uint16)(APM0_SLEEP)        }, \
{ (uint16 *) &AP0      ,                                                       (uint16)(AP0_SLEEP)         }, \
{ (uint16 *) &APBDC0    ,                                                   (uint16)(APBDC0_SLEEP)         }, \
{ (uint16 *) &APIBC0    ,                                                    (uint16)(APIBC0_SLEEP)         }, \


/********************RH850 Port Wakeup Register List************************/
#define      PORT_WAKEUP_REG16_LIST                                  \
{ (uint16 *) &PMC0    ,                                                     (uint16)(PMC0_WAKEUP)       }, \
{ (uint16 *) &PM0     ,                                                      (uint16)(PM0_WAKEUP)        }, \
{ (uint16 *) &PU0     ,                                                      (uint16)(PU0_WAKEUP)        }, \
{ (uint16 *) &P0      ,                                                       (uint16)(P0_WAKEUP)         }, \
{ (uint16 *) &PIPC0    ,                                                    (uint16)(PIPC0_WAKEUP)         }, \
{ (uint16 *) &PFCAE0    ,                                                  (uint16)(PFCAE0_WAKEUP)         }, \
{ (uint16 *) &PFCE0    ,                                                    (uint16)(PFCE0_WAKEUP)         }, \
{ (uint16 *) &PFC0    ,                                                      (uint16)(PFC0_WAKEUP)         }, \
{ (uint16 *) &PBDC0    ,                                                    (uint16)(PBDC0_WAKEUP)         }, \
{ (uint16 *) &PD0    ,                                                       (uint16)(PD0_WAKEUP)         }, \
{ (uint16 *) &PIBC0    ,                                                    (uint16)(PIBC0_WAKEUP)         }, \
{ (uint16 *) &PMC8    ,                                                     (uint16)(PMC8_WAKEUP)       }, \
{ (uint16 *) &PM8     ,                                                      (uint16)(PM8_WAKEUP)        }, \
{ (uint16 *) &PU8     ,                                                      (uint16)(PU8_WAKEUP)        }, \
{ (uint16 *) &P8      ,                                                       (uint16)(P8_WAKEUP)         }, \
{ (uint16 *) &PFCE8    ,                                                    (uint16)(PFCE8_WAKEUP)         }, \
{ (uint16 *) &PFC8    ,                                                      (uint16)(PFC8_WAKEUP)         }, \
{ (uint16 *) &PBDC8    ,                                                    (uint16)(PBDC8_WAKEUP)         }, \
{ (uint16 *) &PD8    ,                                                       (uint16)(PD8_WAKEUP)         }, \
{ (uint16 *) &PIBC8    ,                                                    (uint16)(PIBC8_WAKEUP)         }, \
{ (uint16 *) &PMC9    ,                                                     (uint16)(PMC9_WAKEUP)       }, \
{ (uint16 *) &PM9     ,                                                      (uint16)(PM9_WAKEUP)        }, \
{ (uint16 *) &PU9     ,                                                      (uint16)(PU9_WAKEUP)        }, \
{ (uint16 *) &P9      ,                                                       (uint16)(P9_WAKEUP)         }, \
{ (uint16 *) &PFCE9    ,                                                    (uint16)(PFCE9_WAKEUP)         }, \
{ (uint16 *) &PFC9    ,                                                      (uint16)(PFC9_WAKEUP)         }, \
{ (uint16 *) &PBDC9    ,                                                    (uint16)(PBDC9_WAKEUP)         }, \
{ (uint16 *) &PD9    ,                                                        (uint16)(PD9_WAKEUP)         }, \
{ (uint16 *) &PIBC9    ,                                                     (uint16)(PIBC9_WAKEUP)         }, \
{ (uint16 *) &PMC10    ,                                                    (uint16)(PMC10_WAKEUP)       }, \
{ (uint16 *) &PM10     ,                                                     (uint16)(PM10_WAKEUP)        }, \
{ (uint16 *) &PU10     ,                                                     (uint16)(PU10_WAKEUP)        }, \
{ (uint16 *) &P10      ,                                                      (uint16)(P10_WAKEUP)         }, \
{ (uint16 *) &PIPC10    ,                                                    (uint16)(PIPC10_WAKEUP)         }, \
{ (uint16 *) &PFCAE10    ,                                                  (uint16)(PFCE10_WAKEUP)         }, \
{ (uint16 *) &PFCE10    ,                                                    (uint16)(PFCE10_WAKEUP)         }, \
{ (uint16 *) &PFC10    ,                                                      (uint16)(PFC10_WAKEUP)         }, \
{ (uint16 *) &PBDC10    ,                                                    (uint16)(PBDC10_WAKEUP)         }, \
{ (uint16 *) &PD10    ,                                                       (uint16)(PD10_WAKEUP)         }, \
{ (uint16 *) &PIBC10    ,                                                    (uint16)(PIBC10_WAKEUP)         }, \
{ (uint16 *) &PMC11    ,                                                     (uint16)(PMC11_WAKEUP)       }, \
{ (uint16 *) &PM11     ,                                                      (uint16)(PM11_WAKEUP)        }, \
{ (uint16 *) &PU11     ,                                                      (uint16)(PU11_WAKEUP)        }, \
{ (uint16 *) &P11      ,                                                       (uint16)(P11_WAKEUP)         }, \
{ (uint16 *) &PIPC11    ,                                                    (uint16)(PIPC11_WAKEUP)         }, \
{ (uint16 *) &PFCE11    ,                                                    (uint16)(PFCE11_WAKEUP)         }, \
{ (uint16 *) &PFC11    ,                                                      (uint16)(PFC11_WAKEUP)         }, \
{ (uint16 *) &PBDC11    ,                                                    (uint16)(PBDC11_WAKEUP)         }, \
{ (uint16 *) &PD11    ,                                                       (uint16)(PD11_WAKEUP)         }, \
{ (uint16 *) &PIBC11    ,                                                    (uint16)(PIBC11_WAKEUP)         }, \
{ (uint16 *) &JPMC0    ,                                                      (uint16)(JPMC0_WAKEUP)       }, \
{ (uint16 *) &JPM0     ,                                                       (uint16)(JPM0_WAKEUP)        }, \
{ (uint16 *) &JPU0     ,                                                       (uint16)(JPU0_WAKEUP)        }, \
{ (uint16 *) &JP0      ,                                                        (uint16)(JP0_WAKEUP)         }, \
{ (uint16 *) &JPFC0    ,                                                      (uint16)(JPFC0_WAKEUP)         }, \
{ (uint16 *) &JPBDC0    ,                                                    (uint16)(JPBDC0_WAKEUP)         }, \
{ (uint16 *) &JPD0    ,                                                        (uint16)(JPD0_WAKEUP)         }, \
{ (uint16 *) &JPIBC0    ,                                                     (uint16)(JPIBC0_WAKEUP)         }, \
{ (uint16 *) &APM0     ,                                                      (uint16)(APM0_WAKEUP)        }, \
{ (uint16 *) &AP0      ,                                                       (uint16)(AP0_WAKEUP)         }, \
{ (uint16 *) &APBDC0    ,                                                   (uint16)(APBDC0_WAKEUP)         }, \
{ (uint16 *) &APIBC0    ,                                                    (uint16)(APIBC0_WAKEUP)         }, \

#endif

/******************************************************************************
**    DATA TYPES AND STRUCTURES DEFINITIONS
******************************************************************************/
/*Type of the external data structure containing the initialization data for this module*/
typedef struct 
{
   uint16 *address;
   uint16 value;
} Port_ConfigType;

/*Data type for the symbolic name of a port pin*/
typedef uint16 Port_PinType;

/*Possible directions of a port pin*/
typedef enum
{
   PORT_PIN_OUT = 0,
   PORT_PIN_IN = 1
} Port_PinDirectionType;

/*Different port pin modes*/
typedef uint16 Port_PinMode;

/*Port Pin Mode enum list*/
/*typedef enum
{
   PORT_PIN_MODE_ADC,
   PORT_PIN_MODE_CAN,
   PORT_PIN_MODE_DIO,
   PORT_PIN_MODE_DIO_GPT,
   PORT_PIN_MODE_DIO_WDG,
   PORT_PIN_MODE_FLEXRAY,
   PORT_PIN_MODE_ICU,
   PORT_PIN_MODE_LIN,
   PORT_PIN_MODE_MEM,
   PORT_PIN_MODE_PWM,
   PORT_PIN_MODE_SPI,
   PORT_PIN_MODE_MAX_VALUE
} PORT_PIN_MODE;*/

/*Port Pin Mode enum list*/
typedef enum
{
   PORT_PIN_MODE_GPIO,
   PORT_PIN_MODE_ALT_OUT1,
   PORT_PIN_MODE_ALT_IN1,
   PORT_PIN_MODE_ALT_OUT2,
   PORT_PIN_MODE_ALT_IN2,
   PORT_PIN_MODE_ALT_OUT3,
   PORT_PIN_MODE_ALT_IN3,
   PORT_PIN_MODE_ALT_OUT4,
   PORT_PIN_MODE_ALT_IN4,
   PORT_PIN_MODE_MAX_VALUE
} PORT_PIN_MODE;

/*Type of the external data structure containing the pin number, pin direction register, port function control register,
**port function control expansion register, port function control additional expansion register, pin bit mask*/
typedef struct 
{
   Port_PinType pin_index;   /*pin number index*/
   uint16 *pmc;                  /*port mode control register*/
   uint16 *pm;                   /*port mode register*/
   uint16 *pfc;                   /*port function control register*/
   uint16 *pfce;                 /*port function control expansion register*/
   
   uint16 bit_mask;            /*port pin bit mask*/
} Port_Pin_Reg16_Map;


/*****************************************************************************
*                       Externel Function Prototypes                           *
******************************************************************************/
#ifdef FULL_AUTOSAR
EXTERN void Port_Init(const Port_ConfigType *ConfigPtr);
EXTERN void Port_Sleep(const Port_ConfigType *ConfigPtr);
EXTERN void Port_Wakeup(const Port_ConfigType *ConfigPtr);
#else
EXTERN void Port_Init(void);
EXTERN void Port_Sleep(void);
EXTERN void Port_Wakeup(void);
#endif
EXTERN void Port_SetPinDirection(Port_PinType Pin, Port_PinDirectionType Direction);
EXTERN void Port_SetPinMode(Port_PinType Pin, Port_PinMode Mode);
EXTERN void Port_RefreshPortDirection(void);
EXTERN void Port_GetVersionInfo(Std_VersionInfoType *Versioninfo);
EXTERN uint8 Port_WriteProRegister(volatile uint32 *protCmdReg, volatile uint32 *pprotStatusReg, volatile uint32 *targetReg,uint32 regValue, uint8 repeatTime);


#undef EXTERN

#endif

/**************************************End Of File******************************************/
