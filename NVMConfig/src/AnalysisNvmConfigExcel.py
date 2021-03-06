#!/usr/bin/python
# -*- coding:utf8 -*-
'''
Created on 2016年10月1日

@author: niujianlong
'''
import sys
import xlrd
import xlwt
import datetime
#import os
#import shutil





# the global variable define
BIG_ENDIAN = 0
LITTLE_ENDIAN = 0
MEMOMY_MODE = LITTLE_ENDIAN
defaultValue_list = []
S19DataList = []
nvm_config_info_list = []
section_start_nvm_offset_table = {}
section_start_ram_offset_table = {}
section_total_size_table = {}
section_actual_size_table = {}

nvm_total_size = 0
nvm_actual_size = 0 
'''
if True == os.path.exists(ur'./../gen'):
    shutil.rmtree(ur'./../gen')
os.makedirs(ur'./../gen')
'''    
S19_Dir = './lib/c51e_nvm.s19'
S19_filename = 'c51e_nvm.s19'
S19 = file(S19_Dir, 'w+')

# resource file define
NVM_Table_Dir = './res/NVM_Table.xlsx'
sheetName = ['ConstNvmMapSection', \
             'VariableNvmMapSection', \
             'DtcNvmMapSection', \
             'OdoNvmMapSection', \
             'FblNvmMapSection']
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

Each_Section_Actual_Size = []
Var_Gen_List = []
Var_Gen_C_List = []
NVM_RAM_MAP_INFO_LIST = []
#
# generation file define
NVM_Cfg_Dir = './lib/NVM_Cfg.h'
NVM_Cfg_filename = 'NVM_Cfg.h'
NVM_Cfg = file(NVM_Cfg_Dir, 'w+')

nvm_cfg_dir = './lib/nvm_config.h'
nvm_cfg_filename = 'nvm_config.h'
nvm_cfg = file(nvm_cfg_dir, 'w+')

nvm_cfg_c_dir = './src/nvm_config.c'
nvm_cfg_c_filename = 'nvm_config.c'
nvm_cfg_c = file(nvm_cfg_c_dir, 'w+')

NVM_MAP_TABLE_Dir = './lib/NVM_MAP_TABLE.xls'
NVM_MAP_TABLE_filename = 'NVM_MAP_TABLE.xls'
# NVM_MAP_TABLE = file(NVM_MAP_TABLE_Dir, 'w+')
# S19DataMapList = file('S19DataMapList.py', 'w+')

def dec_to_hex(value):
    '''
    first_byte = value/(256*256*256)
    second_byte = (value - first_byte*256*256*256)/(256*256)
    third_byte = (value - first_byte*256*256*256 - second_byte*256*256)/256
    fourth_byte = value - first_byte*256*256*256 - second_byte*256*256 - third_byte*256
    return (first_byte,second_byte,third_byte,fourth_byte)
    '''
    first_byte = int((int(eval(value)) & 0xff000000) >> 24)
    second_byte = int((int(eval(value)) & 0xff0000) >> 16)
    third_byte = int((int(eval(value)) & 0xff00) >> 8)
    fourth_byte = int((int(eval(value)) & 0xff))
    return (first_byte, second_byte, third_byte, fourth_byte)

def WriteNowTime():
    now = datetime.datetime.now()
    return now.strftime("%Y-%m-%d %H:%M:%S")

def GenExcelCommonAnnotation(worksheet, filename, style):
    worksheet.write(0, 5, '/*****************************************************************************\n', style)
    worksheet.write(1, 5, '**  Project       BAIC C51E Cluster Project\n', style)
    worksheet.write(2, 5, '**  (c) copyright ' + datetime.datetime.now().strftime("%Y") + '\n', style)
    worksheet.write(3, 5, '**  Company       O-film\n', style)
    worksheet.write(4, 5, '**                All rights reserved\n', style)
    worksheet.write(5, 5, '**  Secrecy Level STRICTLY CONFIDENTIAL\n', style)
    worksheet.write(6, 5, '*******************************************************************************\n', style)
    worksheet.write(7, 5, '**\n', style)
    worksheet.write(8, 5, '**          File  : ' + filename + '\n', style)
    worksheet.write(9, 5, '**          Author: niujianlong\n', style)
    worksheet.write(10, 5, '**\n', style)
    worksheet.write(11, 5, '**          Date  : ' + WriteNowTime() + '\n', style)
    worksheet.write(12, 5, '**          Description: modified by the open software\n', style)
    WarningColorStyle = xlwt.easyxf('pattern: pattern solid, fore_colour red; font: bold on;')
    worksheet.write(13, 5, '**          Warning :This file is generated by tool don\'t modify it manually.\n', WarningColorStyle)
    worksheet.write(14, 5, '**          version: V_0_1\n', style)
    worksheet.write(15, 5, '**\n', style)
    worksheet.write(16, 5, '******************************************************************************/\n', style)
    
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
    File.write('**          Warning :This file is generated by tool don\'t modify it manually.\n')
    File.write('**          version: V_0_1\n')
    File.write('**\n')
    File.write('******************************************************************************/\n')  
    if filename != 'nvm_config.c':
        File.write('#ifndef ' + filename[:-2].upper() + '_H\n#define ' + filename[:-2].upper() + '_H\n')    
    

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
    return str((sheet.cell(row, col).value).strip())

def GetNVMMapType(sheetName, row, col):
    sheet = excel.sheet_by_name(sheetName)
    return str(sheet.cell(row, col).value)

def GetNVMMapResetLevel(sheetName, row, col):
    sheet = excel.sheet_by_name(sheetName)
    return int(float(sheet.cell(row, col).value))

def GetNVMMapDefaultValue(sheetName, row, col):
    sheet = excel.sheet_by_name(sheetName)
    return str((sheet.cell(row, col).value)).strip()

def int32int16Toint8(num, size):
    if size == 2:
        return str(str(hex(int(eval(num)) & 0xff)) + ',' + str(hex((int(eval(num)) & 0xff00) >> 8)))
    elif size == 4:
        return str(str(hex(int(eval(num)) & 0xff)).rstrip('L') + ',' \
              + str(hex((int(eval(num)) & 0xff00) >> 8)).rstrip('L') + ','\
              + str(hex((int(eval(num)) & 0xff0000) >> 16)).rstrip('L') + ','\
              + str(hex((int(eval(num)) & 0xff000000) >> 24)).rstrip('L'))
    else:
        print 'the argv size is illegal'
        sys.exit(-1)
        
def StringToASCII(string):
    unicodeValue = string.decode('utf-8')
    if len(unicodeValue) == len(string):
        return map(ord, string)
    else:
        print 'the string include illegal ASCII code'
        sys.exit(-1)  
             
def CalcTypeSize(Type):
    BasicTypeEnum = ['int8', 'int16', 'int32', 'string']
    TypePartList = Type.split('[')
    if TypePartList[0] not in BasicTypeEnum:
        print 'The type value is illegal'
        sys.exit(-1)
    else:
        if  TypePartList[0] == BasicTypeEnum[0] or TypePartList[0] == BasicTypeEnum[3]:
            if  len(TypePartList) == 1:
                return 1
            else:
                return 1 * int(TypePartList[1].split(']')[0])
        elif  TypePartList[0] == BasicTypeEnum[1]:
            if  len(TypePartList) == 1:
                return 2
            else:
                return 2 * int(TypePartList[1].split(']')[0])    
        elif  TypePartList[0] == BasicTypeEnum[2]:
            if  len(TypePartList) == 1:
                return 4
            else:
                return 4 * int(TypePartList[1].split(']')[0])    
        else:
            print 'Typr Error'
            sys.exit(-1)    
def WriteNVMMapID(File):
    File.write("/*NVM ID enum definition*/\n")
    File.write("typedef enum\n")
    File.write("{\n")
    File.write("    NVM_ID_START  =  0,\n")
    File.write('\n')
    StartAndEndList = []
   
    for sheetNam in sheetName:
        # print sheetNam
        IDListTemp = []
        File.write('/*the MAP ID in ' + sheetNam + ' list*/\n')
        row = NVMMapIdStartRow
        try:
            while GetNVMMapID(sheetNam, row, NVMMapIdCol) != '':
                IDListTemp.append(GetNVMMapID(sheetNam, row, NVMMapIdCol))
                File.write('    ' + GetNVMMapID(sheetNam, row, NVMMapIdCol) + ',    \n')
                row = row + 1
        except IndexError:
            #print IDListTemp
            if not IDListTemp:
                IDListTemp = [None, None]
                StartAndEndList.append(IDListTemp)
            else:  
                IDListTemp = [IDListTemp[0], IDListTemp[-1]]  
                StartAndEndList.append(IDListTemp)
            #print StartAndEndList
            if sheetNam == sheetName[-1]:
                File.write('\n')
                File.write("    NVM_ID_END,\n")
                for i in range(len(sheetName)):
                    if StartAndEndList[i][0] != None:
                        File.write('    NVM_' + str(sheetName[i]) + 'ID_START  =  ' + str(StartAndEndList[i][0]) + ',\n')
                        File.write('    NVM_' + str(sheetName[i]) + 'ID_END  =  ' + str(StartAndEndList[i][1]) + ',\n')
                    
                File.write("}  NVM_ID_TYPE;\n")
            continue  
    File.write('\n\n\n')    
 

def AppendDefaultValue2List(defaultList, S19DataList):  
    for sheetNam in sheetName:
        row = NVMMapIdStartRow
        Each_Section_Total_Content = [0xFF] * GetNVMSectionSize(sheetNam, SectionSizeRow, SectionSizecol)
        Var_Gen_List.append('/*the Var in'+sheetNam+'gen*/\n')
        NVM_RAM_MAP_INFO_LIST.append('/*the Var in'+sheetNam+'gen*/\\\n')
        try:
            while GetNVMMapID(sheetNam, row, NVMMapIdCol) != '':
                hex_value_list = []
                defaultValue_temp = ''
                BasicTypeEnum = ['int8', 'int16', 'int32', 'string']
                Type = GetNVMMapType(sheetNam, row, NVMMapTypeCol)
                DefaultValue = GetNVMMapDefaultValue(sheetNam, row, NVMMapDefaultValueCol)
                MapID = GetNVMMapID(sheetNam, row, NVMMapIdCol)
                ValueSize = CalcTypeSize(Type)
                del Each_Section_Total_Content[0:ValueSize] 
                TypePartList = Type.split('[')
                GenVarElem = ''
                nvm_ram_map_info_list = ''
                if TypePartList[0] == 'string':
                    if len(TypePartList) == 1 :
                        if sheetNam == sheetName[0]:
                            GenVarElem = 'extern  ' + 'char' +'    '+ MapID + '_Const;'
                            nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Const},    \\\n'
                        else:
                            GenVarElem = 'extern  ' + 'char' +'    '+ MapID + '_Var;'
                            nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Var},    \\\n'
                    else:
                        if sheetNam == sheetName[0]:
                            GenVarElem = 'extern  ' + 'char' +'    '+ MapID + '_Const' + Type[-3:] + ';'
                            nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Const[0]},    \\\n'
                        else:
                            GenVarElem = 'extern  ' + 'char' +'    '+ MapID + '_Var' + Type[-3:] + ';'   
                            nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Var[0]},    \\\n'
                else:
                    if len(TypePartList) == 1 :
                        if sheetNam == sheetName[0]:
                            GenVarElem = 'extern  u' + TypePartList[0] +'    '+ MapID + '_Const;'
                            nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Const},    \\\n'
                        else:
                            GenVarElem = 'extern  u' + TypePartList[0] +'    '+ MapID + '_Var;'
                            nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Var},    \\\n'
                    else:
                        if sheetNam == sheetName[0]:
                            if int(TypePartList[1].split(']')[0])>=10:
                                GenVarElem = 'extern  u' + Type[:-4] +'    '+ MapID + '_Const' + Type[-4:] + ';'
                                nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Const[0]},    \\\n'
                            else:
                                GenVarElem = 'extern  u' + Type[:-3] +'    '+ MapID + '_Const' + Type[-3:] + ';'
                                nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Const[0]},    \\\n'
                        else:
                            if int(TypePartList[1].split(']')[0])>=10:
                                GenVarElem = 'extern  u' + Type[:-4] +'    '+ MapID + '_Var' + Type[-4:] + ';'  
                                nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Var[0]},    \\\n'
                            else:    
                                GenVarElem = 'extern  u' + Type[:-3] +'    '+ MapID + '_Var' + Type[-3:] + ';'  
                                nvm_ram_map_info_list = '{'+MapID+',    &'+MapID + '_Var[0]},    \\\n'
                            
                Var_Gen_List.append(GenVarElem + '\n')  
                Var_Gen_C_List.append(GenVarElem[8:]+'\n')
                NVM_RAM_MAP_INFO_LIST.append(nvm_ram_map_info_list)  
                if TypePartList[0] not in BasicTypeEnum:
                    print 'The type value is illegal'
                    sys.exit(-1)
                DefaultValue = DefaultValue.split(',')
                for DefaultValue in DefaultValue: 
                    if DefaultValue == '':
                        DefaultValue = '0'
                    if TypePartList[0] == BasicTypeEnum[0]:
                        first, second, third, fourth = dec_to_hex(DefaultValue)
                        hex_value_list.append(fourth)
                        # S19DataList.append(fourth)
                    elif TypePartList[0] == BasicTypeEnum[1] :
                        first, second, third, fourth = dec_to_hex(DefaultValue)
                        if LITTLE_ENDIAN == MEMOMY_MODE:
                            hex_value_list.append(fourth)
                            hex_value_list.append(third)
                            # S19DataList.append(fourth)
                            # S19DataList.append(third)
                        else:
                            hex_value_list.append(first)
                            hex_value_list.append(second)      
                    elif TypePartList[0] == BasicTypeEnum[2]:
                        first, second, third, fourth = dec_to_hex(DefaultValue)
                        if LITTLE_ENDIAN == MEMOMY_MODE:
                            hex_value_list.append(fourth)
                            hex_value_list.append(third)
                            hex_value_list.append(second)
                            hex_value_list.append(first)
                            # S19DataList.append(fourth)
                            # S19DataList.append(third)
                            # S19DataList.append(second)
                            # S19DataList.append(first)
                        else:
                            hex_value_list.append(first)
                            hex_value_list.append(second)
                            hex_value_list.append(third)
                            hex_value_list.append(fourth) 
                if TypePartList[0] != BasicTypeEnum[3]:            
                    for i in range(0, ValueSize):
                        if (i != 0) and (i % 16 == 0):
                            # Newline when size greater than 16
                            if i < len(hex_value_list):
                                defaultValue_temp += ('      \\\n          0x%02X, ' % hex_value_list[i])
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(hex_value_list[i])
                            else:
                                defaultValue_temp += '      \\\n          0x00, '  # 如果用户在Excel填的数据小于实际的size就在后边补0
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(0x00)
                        else:
                            if i < len(hex_value_list):
                                defaultValue_temp += ('0x%02X, ' % hex_value_list[i])
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(hex_value_list[i])
                            else:
                                defaultValue_temp += '0x00, '
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(0x00)
                    
                    defaultValue_temp += '    /*%s*/     \\' % MapID  
                                 
                if TypePartList[0] == BasicTypeEnum[3]:
                    # File.write('{')
                    ASCIIList = StringToASCII(DefaultValue)
                    for ASCIIElem in ASCIIList:
                        hex_value_list.append(ASCIIElem) 
                    
                    for i in range(0, ValueSize): 
                        if (i != 0) and (i % 16 == 0):
                            # Newline when size greater than 16
                            if (i < len(hex_value_list)):
                                defaultValue_temp += ('      \\\n          0x%02X, ' % (hex_value_list[i]))
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(hex_value_list[i])
                            else:
                                defaultValue_temp += '      \\\n          0x00, '
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(0x00)
                        else:                    
                            if (i < len(hex_value_list)):
                                defaultValue_temp += ('0x%02X, ' % (hex_value_list[i]))
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(hex_value_list[i])
                            else:
                                defaultValue_temp += '0x00, '
                                if sheetNam != 'FblNvmMapSection':
                                    S19DataList.append(0x00)
                        
                    defaultValue_temp += '    /*%s*/     \\' % MapID    
                              
                row = row + 1
                defaultList.append(defaultValue_temp)
        except IndexError:
            ValueSize = len(Each_Section_Total_Content)
            #print Each_Section_Total_Content
            #print ValueSize
            for elem in Each_Section_Total_Content:
                if sheetNam != 'FblNvmMapSection':
                    S19DataList.append(elem)
                   
            if sheetNam == sheetName[-1]:
                # defaultList.append(defaultValue_temp)
                pass
            continue  


def WriteDefaultValueNew(File):  
    File.write('#define NVM_DEFAULT_VALUES           \\\n')
    
    for eachline in defaultValue_list:
        File.write("          " + eachline + "\n")

def WriteNVMConfigInfo(File):
    # AppendSectionSize()
    File.write("/*\n")
    File.write("typedef struct\n")
    File.write("{\n")
    File.write("  uint16 nvmOffset;\n")
    File.write("  uint16 ramOffset;\n")
    File.write("  uint16 size;\n")
    File.write("  uint8  resetLevel;\n")
    File.write("} NVM_Config_Info;\n")
    File.write("*/\n")
    File.write("#define  NVM_CONFIG_INFO_TABLE_LIST      \\\n")
    for eachline in nvm_config_info_list:
        File.write("          " + eachline + "\n")
    File.write('\n\n\n')    
def AppendSectionSize():
    global nvm_total_size
    global nvm_actual_size
    NVM_ACTUAL_SIZE = 0
    
    ramOffset = 0
    for sheetNam in sheetName:
        row = NVMMapIdStartRow
        nvmOffset = GetNVMStartOffset(sheetNam, StartOffsetRow, StartOffsetCol)
        LastValueSize = nvmOffset
        EachSectionActualSize = 0
        section_actual_size = 0
        sectionSize = GetNVMSectionSize(sheetNam, SectionSizeRow, SectionSizecol)
        
        section_start_nvm_offset_table.update({sheetNam:nvmOffset})
        section_start_ram_offset_table.update({sheetNam:ramOffset})
        section_total_size_table.update({sheetNam:sectionSize})
        
        nvm_total_size += sectionSize
        
        try:
            while GetNVMMapID(sheetNam, row, NVMMapIdCol) != '':
                Type = GetNVMMapType(sheetNam, row, NVMMapTypeCol)
                ValueSize = CalcTypeSize(Type)
                # BasicTypeEnum = ['int8', 'int16', 'int32', 'string']
                # DefaultValue = GetNVMMapDefaultValue(sheetNam, row, NVMMapDefaultValueCol)
                MapID = GetNVMMapID(sheetNam, row, NVMMapIdCol)
                ResetLevel = GetNVMMapResetLevel(sheetNam, row, NVMMapResetLevelCol)
                
                nvm_config_info = "{%d,     %d,     %d,     %d},    /*%s*/    \\" % (nvmOffset, ramOffset, ValueSize, ResetLevel, MapID)
                nvm_config_info_list.append(nvm_config_info)
                ramOffset += ValueSize
                nvmOffset += ValueSize
                section_actual_size += ValueSize
                
                LastValueSize = LastValueSize + ValueSize
                EachSectionActualSize = EachSectionActualSize + ValueSize
                NVM_ACTUAL_SIZE = NVM_ACTUAL_SIZE + ValueSize
                row = row + 1
        except IndexError:
            section_actual_size_table.update({sheetNam:section_actual_size})
            nvm_actual_size += section_actual_size
            Each_Section_Actual_Size.append(EachSectionActualSize) 
            continue         
        
def WriteSectionOffsetAndSize(File):
    # i = 0
    File.write('\n\n')
    File.write("#define        NVM_TOTAL_SIZE" + '            (%d)\n' % nvm_total_size) 
    File.write("#define        NVM_ACTUAL_SIZE" + '            (%d)\n' % nvm_actual_size)
    File.write('\n')
    for section in sheetName:
        # print section_start_nvm_offset_table
        File.write("#define        " + section + '_START_NVM_OFFSET' + '            (%d)\n' % section_start_nvm_offset_table[section])
        File.write("#define        " + section + '_START_RAM_OFFSET' + '            (%d)\n' % section_start_ram_offset_table[section])
        File.write("#define        " + section + '_TOTAL_SIZE' + '            (%d)\n' % section_total_size_table[section])
        if section_actual_size_table[section] <= section_total_size_table[section]:
            File.write("#define        " + section + '_ACTUAL_SIZE' + '            (%d)\n' % section_actual_size_table[section])
        else:
            print 'Error:    section_actual_size > section_total_size'
            sys.exit(-1)
        File.write('\n')
        
        '''
        File.write('#define  ' + sheetNam + '_START_OFFSET    ' + '(' + str(GetNVMStartOffset(sheetNam, StartOffsetRow, StartOffsetCol)) + ')\n')               
        File.write('#define  ' + sheetNam + '_TOTAL_SIZE    ' + '(' + str(GetNVMSectionSize(sheetNam, SectionSizeRow, SectionSizecol)) + ')\n')               
        File.write('#define  ' + sheetNam + '_ACTUAL_SIZE    ' + '(' + str(Each_Section_Actual_Size[i]) + ')\n\n') 
        i = i + 1'''
                      
def WriteNVMMapTable():
    workbook = xlwt.Workbook()
    worksheet = workbook.add_sheet('NVM_MAP_TABLE', cell_overwrite_ok=True)
    
    AnnotationStyle = xlwt.easyxf('pattern: pattern solid, fore_colour sea_green; font: bold on;')
    GenExcelCommonAnnotation(worksheet, NVM_MAP_TABLE_filename, AnnotationStyle)
    # workbook.save(NVM_MAP_TABLE_Dir)
   
    Headstyle = xlwt.easyxf('pattern: pattern solid, fore_colour ocean_blue; font: bold on;')
    # style.pattern.pattern_fore_colour = 4
    worksheet.write(18, 1, 'ID', Headstyle)
    worksheet.write(18, 2, 'NVM OFFSET', Headstyle)
    worksheet.write(18, 3, 'RAM OFFSET', Headstyle)
    worksheet.write(18, 4, 'Size', Headstyle)
    worksheet.write(18, 5, 'RAM Address', Headstyle)
    worksheet.write(18, 6, 'NVM Address', Headstyle)
    worksheet.write(18, 7, 'Reset Level', Headstyle)
    worksheet.write(18, 8, 'Default Value', Headstyle)
    worksheet.write(18, 9, 'Section', Headstyle)
    Tablerow = 19
    HeadstyleColor = ['rose', 'cyan_ega', 'ice_blue', 'lime', 'gray25']
    ramOffset = 0
    for sheetNam in sheetName:
        Headstyle = xlwt.easyxf('pattern: pattern solid, fore_colour ' + HeadstyleColor.pop() + '; font: bold off;')
        row = NVMMapIdStartRow
        nvmOffset = GetNVMStartOffset(sheetNam, StartOffsetRow, StartOffsetCol)
        EachSectionActualSize = 0
        try:
            while GetNVMMapID(sheetNam, row, NVMMapIdCol) != '':
                Type = GetNVMMapType(sheetNam, row, NVMMapTypeCol)
                ValueSize = CalcTypeSize(Type)
                # BasicTypeEnum = ['int8', 'int16', 'int32', 'string']
                DefaultValue = GetNVMMapDefaultValue(sheetNam, row, NVMMapDefaultValueCol)
                MapID = GetNVMMapID(sheetNam, row, NVMMapIdCol)
                ResetLevel = GetNVMMapResetLevel(sheetNam, row, NVMMapResetLevelCol)
                worksheet.write(Tablerow, 1, MapID, Headstyle)
                worksheet.write(Tablerow, 2, str(nvmOffset), Headstyle)
                worksheet.write(Tablerow, 3, str(ramOffset), Headstyle)
                worksheet.write(Tablerow, 4, str(ValueSize), Headstyle)
                worksheet.write(Tablerow, 5, str(hex(0x3FCE4000 + ramOffset)), Headstyle)
                worksheet.write(Tablerow, 6, str(hex(0x0000 + nvmOffset)), Headstyle)
                worksheet.write(Tablerow, 7, str(ResetLevel), Headstyle)
                if -1 != DefaultValue.find('.0'):
                    DefaultValue = str(int(float(DefaultValue)))
                    worksheet.write(Tablerow, 8, DefaultValue, Headstyle)
                else:
                    worksheet.write(Tablerow, 8, DefaultValue, Headstyle)
                worksheet.write(Tablerow, 9, sheetNam, Headstyle)
                
                nvmOffset = nvmOffset + ValueSize
                ramOffset = ramOffset + ValueSize
                EachSectionActualSize = EachSectionActualSize + ValueSize
                # NVM_ACTUAL_SIZE = NVM_ACTUAL_SIZE + ValueSize
                row = row + 1
                Tablerow = Tablerow + 1
        except IndexError:
            # Each_Section_Actual_Size.append(EachSectionActualSize) 
            if sheetNam == sheetName[-1]:
                pass
            continue 
    workbook.save(NVM_MAP_TABLE_Dir)
    
def ChangeTheDataFormat(elem):
    if elem > 0xf:
        elem = str(elem)
        if elem.startswith('0x' or '0X'):
            elem = elem[2:]
        else:
            elem = str(hex(int(elem)))
            elem = elem[2:]  
    else:
        elem = str(elem)
        if elem.startswith('0x' or '0X'):
            elem = '0' + elem[2:]
        else:
            elem = str(hex(int(elem)))
            elem = '0' + elem[2:]            
    return elem.upper()    

def WriteS19File(File):
    index = 0
    address = 0
    addressSum = 0
    dataSum = 0
    linenum = 0
    for elem in S19DataList:
        if (index % 28 == 0):
            dataSum = 0
            addressHex = '0' * (8 - len(str(hex(address))[2:])) + str(hex(address))[2:]
            # print addressHex
            File.write('S321' + addressHex.upper())
            #if linenum != 0:
            address = address + 28
        index = index + 1
        File.write(ChangeTheDataFormat(elem))
        dataSum = dataSum + elem
        if (index % 28 == 0):  
            first, second, third, fourth = dec_to_hex(str(addressSum)) 
            addressSum = first + second + third + fourth
            checksum = 0xff - ((dataSum+addressSum+0x21) & 0xff)
            addressSum = addressSum + 28
            #print address
            print linenum
            File.write(ChangeTheDataFormat(checksum) + '\n')
            linenum = linenum + 1

def WriteExternVar(File):
    File.write('\n')
    for elem in Var_Gen_List:
        File.write(elem)
    File.write('\n')
    
    
def WriteExternVarInC(File):
    File.write('\n')
    File.write('#include "nvm_config.h"\n\n\n')
    for elem in Var_Gen_C_List:
        File.write(elem)
    File.write('\n')    
    

def WriteNVM_RAM_MAP_INFO_LIST(File):
    File.write('\n')
    File.write('#define  NVM_RAM_MAP_INFO_LIST        \\\n')
    for elem in NVM_RAM_MAP_INFO_LIST:
        File.write(elem)
    File.write('\n')
    
        
def main():
    GenCommonAnnotation(NVM_Cfg, NVM_Cfg_filename)
    GenCommonAnnotation(nvm_cfg, nvm_cfg_filename)
    GenCommonAnnotation(nvm_cfg_c, nvm_cfg_c_filename)
    nvm_cfg.write('#include "Platform_Types.h"\n\n')
    AppendSectionSize()
    AppendDefaultValue2List(defaultValue_list, S19DataList)
    WriteSectionOffsetAndSize(NVM_Cfg)
    WriteNVMMapID(NVM_Cfg)
    WriteNVMConfigInfo(NVM_Cfg)
    WriteDefaultValueNew(NVM_Cfg)
    NVM_Cfg.write('\n\n#endif\n')
    NVM_Cfg.write('/*************************************End Of File*******************************************/\n')   
    NVM_Cfg.close()
    
    WriteNVMMapTable()
    WriteS19File(S19)
    
    WriteExternVar(nvm_cfg)
    WriteNVM_RAM_MAP_INFO_LIST(nvm_cfg)
    nvm_cfg.write('\n\n#endif\n')
    nvm_cfg.write('/*************************************End Of File*******************************************/\n')  
    
    WriteExternVarInC(nvm_cfg_c)
    nvm_cfg_c.write('/*************************************End Of File*******************************************/\n')  

if __name__ == '__main__':
    main()
    #print S19DataList 
    #print len(S19DataList)
