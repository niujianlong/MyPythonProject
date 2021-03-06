# coding=utf-8
import datetime

Port_Cfg_H = file("C:\\Users\\cetc\\workspace\\C53F_GPIO\\cfg\\Port_Cfg.h", "w+")
Dio_Cfg_H = file("C:\\Users\\cetc\\workspace\\C53F_GPIO\\cfg\\Dio_Cfg.h", "w+")
                         
        
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
    
def GenPort_Cfg_H():
    for line in open('Port_Cfg_temp.h'):
        if line =='/**************END OF PORT DIRECTION SETTING******************/\n':
            Port_Cfg_H.write(line)
            Port_Cfg_H.write('\n\n')    
            for line in open('Port.h'):
                Port_Cfg_H.write(line)
            Port_Cfg_H.write('\n\n')    
        else:
            Port_Cfg_H.write(line)
            print line
      
def GenDio_Cfg_H():            
    for line in open('Dio_Cfg_temp.h'):    
        if line == '/*************END OF DIO DBNC CONFIGURATION**************/\n':
            Dio_Cfg_H.write(line)
            Dio_Cfg_H.write('\n\n')
            for line in open('Dio.h'):
                Dio_Cfg_H.write(line)
            Dio_Cfg_H.write('\n\n')
        else:
            Dio_Cfg_H.write(line)        
      
        
GenPort_Cfg_H()
GenDio_Cfg_H()
