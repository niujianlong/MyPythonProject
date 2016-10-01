#!/usr/bin/python
# -*- coding:utf8 -*-
'''
Created on 2016年10月1日

@author: niujianlong
'''
import sys
import xlrd
import datetime
from symbol import except_clause

# the global variable define

# resource file define
NVM_Table_Dir = './../res/NVM_Table.xlsx'
sheetName = ['ConstNvmMapSection', \
             'VariableNvmMapSection', \
             'FblNvmMapSection', \
             'DtcNvmMapSection', \
             'OdoNvmMapSection']
excel = xlrd.open_workbook(NVM_Table_Dir)
# resource row and col define
StartOffsetRow = 1
StartOffsetCol = 2
SectionSizeRow = 2
SectionSizecol = 2

NVMMapIdStartRow = 6
NVMMapIdCol = 1

NVMMapTypeStartRow = 6
NVMMapTypeCol = 2

NVMMapResetLevelStartRow = 6
NVMMapResetLevelCol = 3

NVMMapDefaultValueStartRow = 6
NVMMapDefaultValueCol = 4
#
# generation file define
NVM_Cfg_Dir = './../gen/NVM_Cfg.h'
NVM_Cfg_filename = 'NVM_Cfg.h'
NVM_Cfg = file(NVM_Cfg_Dir, 'w+')


def WriteNowTime():
    now = datetime.datetime.now()
    return now.strftime("%Y-%m-%d %H:%M:%S")

def GenCommonAnnotation(File, filename):
    File.write('/*****************************************************************************\n')
    File.write('**  Project       BAIC C51E Cluster Project\n')
    File.write('**  (c) copyright ' + datetime.datetime.now().strftime("%Y") + '\n')
    File.write('**  Company       O-film\n')
    File.write('**                All rights reserved\n')
    File.write('**  Secrecy Level STRICTLY CONFIDENTIAL\n')
    File.write('*******************************************************************************\n')
    File.write('**\n')
    File.write('**          File  : ' + filename + '\n')
    File.write('**          Author: niujianlong\n')
    File.write('**\n')
    File.write('**          Date  : ' + WriteNowTime() + '\n')
    File.write('**          Description: modified by the open software\n')
    File.write('**          Warning :This file generated by tool don\'t modify it manually.\n')
    File.write('**          version: V_0_1\n')
    File.write('**\n')
    File.write('******************************************************************************/\n')
    

def GetNVMStartOffset(sheetName, StartOffsetRow, StartOffsetCol):
    sheet = excel.sheet_by_name(sheetName)
    offsetStr = str(sheet.cell(StartOffsetRow, StartOffsetCol).value)
    offsetStrList = offsetStr.split('+')
    sumValue = 0
    for i in offsetStrList:
        sumValue = sumValue + int(float(i))
    return sumValue
    
def GetNVMSectionSize(sheetName, StartOffsetRow, StartOffsetCol):
    return GetNVMStartOffset(sheetName, StartOffsetRow, StartOffsetCol)

def GetNVMMapID(sheetName, row, col):
    sheet = excel.sheet_by_name(sheetName)
    return str(sheet.cell(row, col).value)

def CalcTypeSize(Type):
    BasicTypeEnum = ['int8', 'int16', 'int32', 'string']
    TypePartList = Type.split('[')
    if TypePartList[0] not in BasicTypeEnum:
        print 'The type value is illegal'
        sys.exit(-1)
    else:
        if  TypePartList[0] == BasicTypeEnum[0] :
            if  len(TypePartList)==1:
                return 1
            else:
                return 1*int(TypePartList[1])
def WriteNVMMapID(File):
    File.write('#define NVM_ID_LIST           \\\n')
    for sheetNam in sheetName:
        print sheetNam
        File.write('/*the MAP ID in ' + sheetNam + ' list*/\\\n')
        row = NVMMapIdStartRow
        try:
            while GetNVMMapID(sheetNam, row, NVMMapIdCol) != '':
                File.write('        ' + GetNVMMapID(sheetNam, row, NVMMapIdCol) + ',    \\\n')
                row = row + 1
        except IndexError:
            continue    

def main():
    GenCommonAnnotation(NVM_Cfg, NVM_Cfg_filename)
    WriteNVMMapID(NVM_Cfg)



if __name__ == '__main__':
    main()
    print CalcTypeSize('int8[8]')