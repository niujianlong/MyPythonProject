/******************************************************************************
**  Project        BAIC C11 Cluster Project
**  (c) copyright 2015
**  Company       O-film
**                All rights reserved
**  Secrecy Level STRICTLY CONFIDENTIAL
*******************************************************************************
**
**          File  : Board.h
**          Author:  jiangyuchang
**          Porting: niujianlong
**
**          Date  : 2016-04-26
**
**
******************************************************************************/
#ifndef BOARD_H
#define BOARD_H

/******************************************************************************
**    INCLUDES
******************************************************************************/

/******************************************************************************
**    MACROS
******************************************************************************/
//#define   RH850F1L_100PIN
#define   RH850D1M1H_176PIN

/****************************BIT MASK*****************************************/
#define      BIT_0                                                           (0x0001u)
#define      BIT_1                                                           (0x0002u)
#define      BIT_2                                                           (0x0004u)
#define      BIT_3                                                           (0x0008u)
#define      BIT_4                                                           (0x0010u)
#define      BIT_5                                                           (0x0020u)
#define      BIT_6                                                           (0x0040u)
#define      BIT_7                                                           (0x0080u)
#define      BIT_8                                                           (0x0100u)
#define      BIT_9                                                           (0x0200u)
#define      BIT_10                                                         (0x0400u)
#define      BIT_11                                                         (0x0800u)
#define      BIT_12                                                         (0x1000u)
#define      BIT_13                                                         (0x2000u)
#define      BIT_14                                                         (0x4000u)
#define      BIT_15                                                         (0x8000u)


/******************************************************************************
**    Data Type
******************************************************************************/
/***********Port Pin Index List**********/
#if defined(RH850D1M1H_176PIN)
typedef enum
{
  /*Port 0*/
  PORT0_0,
  PORT0_1,
  PORT0_2,
  PORT0_3,
  PORT0_4,
  PORT0_5,
  PORT0_6,
  PORT0_7,
  PORT0_8,
  PORT0_9,
  /*Port 1*/
  PORT1_0,
  PORT1_1,
  PORT1_2,
  PORT1_3,
  PORT1_4,
  PORT1_5,
  /*Port 3*/
  PORT3_0,
  PORT3_1,
  PORT3_2,
  PORT3_3,
  PORT3_4,
  PORT3_5,
  PORT3_6,
  PORT3_7,
  PORT3_8,
  PORT3_9,
  /*Port 10*/
  PORT10_0,
  PORT10_1,
  PORT10_2,
  PORT10_3,
  PORT10_4,
  PORT10_5,
  PORT10_6,
  PORT10_7,
  PORT10_8,
  PORT10_9,
  PORT10_10,
  PORT10_11,
  /*Port 11*/
  PORT11_0,
  PORT11_1,
  PORT11_2,
  PORT11_3,
  /*Port 16*/
  PORT16_0,
  PORT16_1,
  PORT16_2,
  PORT16_3,
  PORT16_4,
  PORT16_5,
  PORT16_6,
  PORT16_7,
  PORT16_8,
  PORT16_9,
  PORT16_10,
  PORT16_11,
  /*Port 17*/
  PORT17_0,
  PORT17_1,
  PORT17_2,
  PORT17_3,
  PORT17_4,
  PORT17_5,
  PORT17_6,
  PORT17_7,
  PORT17_8,
  PORT17_9,
  PORT17_10,
  PORT17_11,
  /*Port 21*/
  PORT21_0,
  PORT21_1,
  PORT21_2,
  PORT21_3,
  PORT21_4,
  PORT21_5,
  PORT21_6,
  PORT21_7,
  PORT21_8,
  PORT21_9,
  /*Port 42*/
  PORT42_0,
  PORT42_1,
  PORT42_2,
  PORT42_3,
  PORT42_4,
  PORT42_5,
  PORT42_6,
  PORT42_7,
  PORT42_8,
  PORT42_9,
  PORT42_10,
  PORT42_11,
  PORT42_12,
  PORT42_13,
  PORT42_14,
  PORT42_15,
  /*Port 43*/
  PORT43_0,
  PORT43_1,
  /*Port 44*/
  PORT44_0,
  PORT44_1,
  PORT44_2,
  PORT44_3,
  PORT44_4,
  PORT44_5,
  PORT44_6,
  PORT44_7,
  PORT44_8,
  PORT44_9,
  PORT44_10,
  PORT44_11,
  /*Port 45*/
  PORT45_0,
  PORT45_1,
  PORT45_2,
  PORT45_3,
  PORT45_4,
  PORT45_5,
  PORT45_6,
  PORT45_7,
  PORT45_8,
  PORT45_9,
  PORT45_10,
  PORT45_11,
  PORT45_12,
  PORT45_13,
  /*JPort 0*/
  JPORT0_0,
  JPORT0_1,
  JPORT0_2,
  JPORT0_3,
  JPORT0_4,
  IPORT0_0
} PORT_PIN_TYPE;
#elif defined(RH850F1L_100PIN)
typedef enum
{
  /*Port 0*/
  PORT0_0,
  PORT0_1,
  PORT0_2,
  PORT0_3,
  PORT0_4,
  PORT0_5,
  PORT0_6,
  PORT0_7,
  PORT0_8,
  PORT0_9,
  PORT0_10,
  PORT0_11,
  PORT0_12,
  PORT0_13,
  PORT0_14,
  /*Port 8*/
  PORT8_0,
  PORT8_1,
  PORT8_2,
  PORT8_3,
  PORT8_4,
  PORT8_5,
  PORT8_6,
  PORT8_7,
  PORT8_8,
  PORT8_9,
  PORT8_10,
  PORT8_11,
  PORT8_12,
  /*Port 9*/
  PORT9_0,
  PORT9_1,
  PORT9_2,
  PORT9_3,
  PORT9_4,
  PORT9_5,
  PORT9_6,
  /*Port 10*/
  PORT10_0,
  PORT10_1,
  PORT10_2,
  PORT10_3,
  PORT10_4,
  PORT10_5,
  PORT10_6,
  PORT10_7,
  PORT10_8,
  PORT10_9,
  PORT10_10,
  PORT10_11,
  PORT10_12,
  PORT10_13,
  PORT10_14,
  PORT10_15,
  /*Port 11*/
  PORT11_0,
  PORT11_1,
  PORT11_2,
  PORT11_3,
  PORT11_4,
  PORT11_5,
  PORT11_6,
  PORT11_7,
  /*JPort 0*/
  JPORT0_0,
  JPORT0_1,
  JPORT0_2,
  JPORT0_3,
  JPORT0_4,
  JPORT0_5,
  /*APort 0*/
  APORT0_0,
  APORT0_1,
  APORT0_2,
  APORT0_3,
  APORT0_4,
  APORT0_5,
  APORT0_6,
  APORT0_7,
  APORT0_8,
  APORT0_9,
  APORT0_10,
  APORT0_11,
  APORT0_12,
  APORT0_13,
  APORT0_14,
  APORT0_15
} PORT_PIN_TYPE;
#endif

/***********Port Index List**********/
#if defined(RH850D1M1H_176PIN)
typedef enum
{
  PORT0,
  PORT1,
  PORT3,
  PORT10,
  PORT11,
  PORT16,
  PORT17,
  PORT21,
  PORT42,
  PORT43,
  PORT44,
  PORT45,
  JPORT0,
  IPORT0
} DIO_PORT_TYPE;
#elif defined(RH850F1L_100PIN)
typedef enum
{
  PORT0,
  PORT8,
  PORT9,
  PORT10,
  PORT11,
  JPORT0,
  APORT0
} DIO_PORT_TYPE;
#endif

#endif

/**************************************End Of File******************************************/

