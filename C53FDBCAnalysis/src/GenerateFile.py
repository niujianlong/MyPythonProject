# coding=utf-8
import datetime
import os
import C53Fdbc



CANProcessH = file(ur'.\..\CAN\lib\CANProcess.h', "w+")
CANProcessC = file(ur'.\..\CAN\src\CANProcess.c', "w+")
CANMissingProcessH = file(ur'.\..\CAN\lib\CANMissingProcess.h', "w+")
CANMissingProcessC = file(ur'.\..\CAN\src\CANMissingProcess.c', "w+")
                         
        
def WriteNowTime():
    now = datetime.datetime.now()
    return now.strftime("%Y-%m-%d %H:%M:%S")

def GenCommonAnnotation(File,filename):
    File.write('/*****************************************************************************\n')
    File.write('**  Project       BAIC C51E Cluster Project\n')
    File.write('**  (c) copyright '+datetime.datetime.now().strftime("%Y")+'\n')
    File.write('**  Company       O-film\n')
    File.write('**                All rights reserved\n')
    File.write('**  Secrecy Level STRICTLY CONFIDENTIAL\n')
    File.write('*******************************************************************************\n')
    File.write('**\n')
    File.write('**          File  : '+filename+'\n')
    File.write('**          Author: niujianlong\n')
    File.write('**\n')
    File.write('**          Date  : '+WriteNowTime()+'\n')
    File.write('**          Description: modified by the open software\n')
    File.write('**          Warning :This file generated by tool don\'t modify it manually.\n')
    File.write('**          version: V_0_1\n')
    File.write('**\n')
    File.write('******************************************************************************/\n')
    
def GenCANProcessH():
    GenCommonAnnotation(CANProcessH,'CANProcess.h')
    CANProcessH.write('\n#ifndef CANPROCESS_H\n#define CANPROCESS_H\n\n')
    CANProcessH.write('\n#include "common.h"\n#include "s_typedef.h"\n\n')
    CANProcessH.write('#ifdef   CANPROCESS_C \n#define  EXTERN\n#else\n#define  EXTERN    extern\n#endif\n')
    CANProcessH.write('/*************************************************************************\n')
    CANProcessH.write('**                       CAN Frame struct Declaration                   **\n')
    CANProcessH.write('**************************************************************************/\n')
    for line in open(C53Fdbc.struct_h_dir):
        CANProcessH.write(line)
    CANProcessH.write('\n/*************************************************************************\n')
    CANProcessH.write('**                  Is NO Frame Received                                **\n')
    CANProcessH.write('**************************************************************************/\n')
    for line in open(C53Fdbc.CAN_IsNoMsgReceived_h_dir):
        CANProcessH.write(line)    
    CANProcessH.write('\n/*************************************************************************\n')
    CANProcessH.write('**                  Frame Signal Analysis Prototype                     **\n')
    CANProcessH.write('**************************************************************************/\n')
    for line in open(C53Fdbc.SignalAnalysis_h_dir):
        CANProcessH.write(line) 
    CANProcessH.write('\n/*************************************************************************\n')
    CANProcessH.write('**                  Set Signal Function Prototype                       **\n')
    CANProcessH.write('**************************************************************************/\n')
    for line in open(C53Fdbc.ICMSendFrameInterface_h_dir):
        CANProcessH.write(line)
        
    CANProcessH.write('\n\nEXTERN void vbus_receive_frame(uint16 frameID, uint8 *data);\n') 
    CANProcessH.write('\n\n#undef EXTERN\n')   
    CANProcessH.write('#endif\n')
    
def GenCANProcessC():    
    GenCommonAnnotation(CANProcessC,'CANProcess.c')
    CANProcessC.write('\n#include "CANProcess.h"\n#include "s_fbl_driver.h"\n#include "s_dirnm.h"\n#include "s_fbl_driver.h"\n#include "CANMissingProcess.h"\n\n')
    CANProcessC.write('\n#define CANPROCESS_C  \n\n')
    CANProcessC.write('/*************************************************************************\n')
    CANProcessC.write('**              CAN Frame Variable Struct Define                        **\n')
    CANProcessC.write('**************************************************************************/\n')
    for line in open(C53Fdbc.VariableDefinition_c_dir):
        CANProcessC.write(line)
    CANProcessC.write('\n\n/*************************************************************************\n')
    CANProcessC.write('**              CAN Missing Count Variable  Define                      **\n')
    CANProcessC.write('**************************************************************************/\n')
    for line in open(C53Fdbc.missingCounter_c_dir):
        CANProcessC.write(line)
    CANProcessC.write('\n/*************************************************************************\n')
    CANProcessC.write('**              CAN Process Init                                        **\n')
    CANProcessC.write('**************************************************************************/\n\n')
    for line in open(C53Fdbc.CANProcess_Init_c_dir):
        CANProcessC.write(line)
    CANProcessC.write('\n/*************************************************************************\n')
    CANProcessC.write('**              VBUS frame data handle                                  **\n')
    CANProcessC.write('**************************************************************************/\n\n')
    for line in open(C53Fdbc.vbus_receive_frame_c_dir):
        CANProcessC.write(line)    
    CANProcessC.write('\n/*************************************************************************\n')
    CANProcessC.write('**              Frame Missing Handle                                    **\n')
    CANProcessC.write('**************************************************************************/\n\n')
    for line in open(C53Fdbc.frameMissingProcess_c_dir):
        CANProcessC.write(line)      
    CANProcessC.write('\n/*************************************************************************\n')
    CANProcessC.write('**              Signal Analysis Task                                    **\n')
    CANProcessC.write('**************************************************************************/\n\n')
    for line in open(C53Fdbc.SignalAnalysis_c_dir):
        CANProcessC.write(line)      
def GenCANMissingProcessH():        
    GenCommonAnnotation(CANMissingProcessH,'CANMissingProcess.h')    
    CANMissingProcessH.write('\n#ifndef CANMISSINGPROCESS_H\n#define CANMISSINGPROCESS_H\n\n')
    CANMissingProcessH.write('\n#include "CANProcess.h"\n#include "CANService.h"\n#include "can_bus_off.h"\n\n')
    CANMissingProcessH.write('#ifdef   CANMISSINGPROCESS_C \n#define  EXTERN\n#else\n#define  EXTERN    extern\n#endif\n')
    CANMissingProcessH.write('/*************************************************************************\n')
    CANMissingProcessH.write('**              Set Missing Default Value                               **\n')
    CANMissingProcessH.write('**************************************************************************/\n')    
    for line in open(C53Fdbc.DefaultMissingProcess_h_dir):    
        CANMissingProcessH.write(line)
    CANMissingProcessH.write('\n\n#undef EXTERN\n')     
    CANMissingProcessH.write('#endif')    
def GenCANMissingProcessC():        
    GenCommonAnnotation(CANMissingProcessC,'CANMissingProcess.c')     
    CANMissingProcessC.write('\n#include "CANMissingProcess.h"\n\n')
    CANMissingProcessC.write('\n#define CANMISSINGPROCESS_C  \n\n')
    CANMissingProcessC.write('/*************************************************************************\n')
    CANMissingProcessC.write('**              Set Signal Function Body                                **\n')
    CANMissingProcessC.write('**************************************************************************/\n')
    for line in open(C53Fdbc.CANServiceSetFunBody_c_dir):    
        CANMissingProcessC.write(line)
    CANMissingProcessC.write('/*************************************************************************\n')
    CANMissingProcessC.write('**              Set Frame Missing Default Value                         **\n')
    CANMissingProcessC.write('**************************************************************************/\n')    
    for line in open(C53Fdbc.DefaultMissingProcess_c_dir):    
        CANMissingProcessC.write(line)
 
        
GenCANProcessH()
GenCANProcessC()
GenCANMissingProcessH()
GenCANMissingProcessC()