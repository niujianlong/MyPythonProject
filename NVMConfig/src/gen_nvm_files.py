#!/usr/bin/python
# -*- coding:utf8 -*-

import os
import sys
import xlrd
import datetime


BIG_ENDIAN = 0
LITTLE_ENDIAN = 0

MEMOMY_MODE = LITTLE_ENDIAN

RAM_START_OFFSET = 0

NVM_SECTION_LIST = [ur'ConstNvmMapSection', ur'VariableNvmMapSection', ur'FblNvmMapSection', ur'DtcNvmMapSection', ur'OdoNvmMapSection']

def  main():    
    #Read NVM configure information from excel file
    filename = '.\NVM_Table.xlsx'
    excel = xlrd.open_workbook(filename)

    type_list = ["int8", "int16", "int32", "string"]
    type_size = [1, 2, 4, 1]
    nvmId_list = []
    defaultValue_list = []
    nvm_config_info_list = []
    section_start_nvm_offset_table = {}
    section_start_ram_offset_table = {}
    section_total_size_table = {}
    section_actual_size_table = {} 
    
    ramOffset = RAM_START_OFFSET 

    nvm_total_size = 0
    nvm_actual_size = 0   
    
    for section in NVM_SECTION_LIST:
        sheet = excel.sheet_by_name(section)
        #Get the number of sheet rows
        num_rows = sheet.nrows
        #print num_rows
        
        sectionStartOffset =  int(sheet.cell(1,2).value)
        #print sectionStartOffset
        
        sectionSize =  int(sheet.cell(2,2).value)
        #print sectionSize
                        
        nvmOffset = sectionStartOffset
        
        section_start_nvm_offset_table.update({section:nvmOffset})
        section_start_ram_offset_table.update({section:ramOffset})
        section_total_size_table.update({section:sectionSize})
        
        nvm_total_size += sectionSize
        
        section_actual_size = 0
        for row in range(6,num_rows):
            nvmId = str(sheet.cell(row,1).value).strip()
            if '' == nvmId:
                print "Row %d have invalid nvm id! Please input valid nvm id."%(row+1)
                sys.exit(-1)
            #print nvmId
            nvmId_list.append(nvmId)

            type = str(sheet.cell(row,2).value).strip()
            count = 0
            valid_data_type = 0
            for item in type_list:
                if -1 != type.find(item,0,len(type)):
                    pos1= type.find('[',0,len(type))
                    pos2= type.find(']',0,len(type))
                    if -1 != pos1 and -1 != pos2:
                        if item == type[0:pos1]:
                            size = int(type[pos1+1:pos2])* type_size[count]
                            valid_data_type = 1
                            type = type[0:pos1]
                        break
                    elif -1 == pos1 and -1 == pos2:
                        if item == type:
                            size = type_size[count]
                            valid_data_type = 1
                        break
                    else:
                        print "Row %d have invalid data type! Please input valid data type."%(row+1)
                        sys.exit(-1)
                count += 1
            
            if 0 == valid_data_type:
                print "Row %d have invalid data type! Please input valid data type."%(row+1)
                sys.exit(-1)
                    
            #print size
            
            resetLevel = int(sheet.cell(row,3).value)
            #print resetLevel
            
            nvm_config_info = "{%d,     %d,     %d,     %d},    /*%s*/    \\"%(nvmOffset, ramOffset, size, resetLevel, nvmId)
            nvm_config_info_list.append(nvm_config_info)
            ramOffset += size
            nvmOffset += size
            section_actual_size += size
            
            
            defaultValue = str(sheet.cell(row,4).value).strip()
            #print defaultValue
            #print len(defaultValue) 
            defaultValue_temp = ''        
            if type != "string":
                #int parse
                str_list = defaultValue.split(",")
                #print str_list
                valid_default_value = 1
                hex_value_list = []
                for item in str_list:
                    item = item.strip()
                    pos = item.find('0x')
                    if -1 != pos:
                        if 0 != pos:
                            valid_default_value = 0
                        else:
                            dec_value = hex_str_to_dec(item[2:])
                    else:
                        if '' != item:
                            dec_value = int(float(item))     
                        
                    first,second,third,fourth = dec_to_hex(dec_value)
                    if 'int8' == type:
                        hex_value_list.append(fourth)  
                    elif 'int16' == type:
                        if LITTLE_ENDIAN == MEMOMY_MODE:
                            hex_value_list.append(fourth)
                            hex_value_list.append(third)
                        else:
                            hex_value_list.append(first)
                            hex_value_list.append(second)     
                    elif 'int32' == type:
                        if LITTLE_ENDIAN == MEMOMY_MODE:
                            hex_value_list.append(fourth)
                            hex_value_list.append(third)
                            hex_value_list.append(second)
                            hex_value_list.append(first)
                        else:
                            hex_value_list.append(first)
                            hex_value_list.append(second)
                            hex_value_list.append(third)
                            hex_value_list.append(fourth)                                               
                
                
                if  0 == valid_default_value:
                    print "Row %d have invalid default value! Please input valid default value."%(row+1)
                    sys.exit(-1)
                    

                #for item in hex_value_list:
                    #defaultValue_temp += ('0x%02X, '%item)
                
                for i in range(0, size):
                    if (i != 0) and (i % 16 == 0):
                        #Newline when size greater than 16
                        if i < len(hex_value_list):
                            defaultValue_temp += ('      \\\n          0x%02X, '%hex_value_list[i])
                        else:
                            defaultValue_temp += '      \\\n          0x00, ' 
                    else:
                        if i < len(hex_value_list):
                            defaultValue_temp += ('0x%02X, '%hex_value_list[i])
                        else:
                            defaultValue_temp += '0x00, '
                
                defaultValue_temp += '    /*%s*/     \\'%nvmId
                    
                    
            else:
                #string parse
                for i in range(0, size): 
                    if (i != 0) and (i % 16 == 0):
                        #Newline when size greater than 16
                        if (i < len(defaultValue)):
                            defaultValue_temp += ('      \\\n          0x%02X, '%ord(defaultValue[i]))
                        else:
                            defaultValue_temp += '      \\\n          0x00, '
                    else:                    
                        if (i < len(defaultValue)):
                            defaultValue_temp += ('0x%02X, '%ord(defaultValue[i]))
                        else:
                            defaultValue_temp += '0x00, '
                        
                defaultValue_temp += '    /*%s*/     \\'%nvmId     
                
            defaultValue_list.append(defaultValue_temp)
        
        section_actual_size_table.update({section:section_actual_size})
        nvm_actual_size += section_actual_size
        #print nvmId_list   
        #print nvm_config_info_list
        #print defaultValue_list
    
    #generate NVM configure file
    nvm_cfg_addr = ur'.\NVM_Cfg.h'
    fw = open(nvm_cfg_addr, 'w+')

    now = datetime.datetime.now()
    
    fw.write('/******************************************************************************\n')
    fw.write('**  (c) copyright 2015\n')   
    fw.write('**  Company       O-film\n')    
    fw.write('**                All rights reserved\n')    
    fw.write('**  Secrecy Level STRICTLY CONFIDENTIAL\n')    
    fw.write('*******************************************************************************\n')
    fw.write('**\n')
    fw.write('**          File  : NVM_Cfg.h\n')
    fw.write('**          Author: jiangyuchang\n')
    fw.write('**          Description: RH850D1x NVM configure file, generated by tool automatically.\n')   
    fw.write('**                           Don\'t modify it manually.\n')         
    fw.write('**          Date  : %s\n'%(now.strftime("%Y-%m-%d %H:%M:%S")))    
    fw.write('**\n')
    fw.write('**\n')
    fw.write('******************************************************************************/\n')    
    fw.write('\n')
    fw.write('\n')
 
    fw.write("#define        NVM_TOTAL_SIZE" + '            %d\n'%nvm_total_size) 
    fw.write("#define        NVM_ACTUAL_SIZE" + '            %d\n'%nvm_actual_size) 
    fw.write('\n')
    for section in NVM_SECTION_LIST:
        fw.write("#define        " + section + '_START_NVM_OFFSET' + '            %d\n'%section_start_nvm_offset_table[section])
        fw.write("#define        " + section + '_START_RAM_OFFSET' + '            %d\n'%section_start_ram_offset_table[section])
        fw.write("#define        " + section + '_TOTAL_SIZE' + '            %d\n'%section_total_size_table[section])
        fw.write("#define        " + section + '_ACTUAL_SIZE' + '            %d\n'%section_actual_size_table[section])
        fw.write('\n')
 
    #generate NVM_ID_LIST
    #fw.write("#define          NVM_ID_LIST       \\\n")
    #for eachline in nvmId_list:
        #fw.write("          "+ eachline + ",       \\\n")
        
    fw.write("/*NVM ID enum definition*/\n")
    fw.write("typedef enum\n")
    fw.write("{\n")
    fw.write("    NVM_ID_START  =  0,\n")
    fw.write('\n')
    for eachline in nvmId_list:
        fw.write("    "+ eachline + ",\n")        
    fw.write('\n')
    fw.write("    NVM_ID_END\n")
    fw.write("}  NVM_ID_TYPE;\n")
        
    fw.write('\n')
    fw.write('\n')
    fw.write('\n')        

    #generate NVM_CONFIG_INFO_TABLE_LIST    
    fw.write("/*\n")
    fw.write("typedef struct\n")
    fw.write("{\n")
    fw.write("  uint16 nvmOffset;\n")
    fw.write("  uint16 ramOffset;\n")
    fw.write("  uint16 size;\n")
    fw.write("  uint8  resetLevel;\n")
    fw.write("} NVM_Config_Info;\n")
    fw.write("*/\n")

    fw.write("#define  NVM_CONFIG_INFO_TABLE_LIST      \\\n")
    for eachline in nvm_config_info_list:
        fw.write("          "+ eachline + "\n")
 
    fw.write('\n')
    fw.write('\n')
    fw.write('\n') 
    fw.write("#define  NVM_DEFAULT_VALUES   \\\n")
    for eachline in defaultValue_list:
        fw.write("          "+ eachline + "\n")

    fw.write('\n')
    fw.write('\n') 
    fw.write('/*************************************End Of File*******************************************/\n')   
    fw.close()
    

def dec_to_hex(value):
    first_byte = value/(256*256*256)
    second_byte = (value - first_byte*256*256*256)/(256*256)
    third_byte = (value - first_byte*256*256*256 - second_byte*256*256)/256
    fourth_byte = value - first_byte*256*256*256 - second_byte*256*256 - third_byte*256
    return (first_byte,second_byte,third_byte,fourth_byte)
    
def hex_str_to_dec(str):
    sum = 0
    for i in range(0, len(str)):
        if (ord(str[i]) >= ord('A')) and (ord(str[i]) <= ord('F')):
            dec_value = 10 + ord(str[i]) - ord('A')
        elif (ord(str[i]) >= ord('a')) and (ord(str[i]) <= ord('f')):
            dec_value = 10 + ord(str[i]) - ord('a') 
        else:
            dec_value = int(str[i])        
        
        sum += dec_value * (16**(len(str)-i-1))
    return sum
    
    
if __name__ == '__main__':
    main()
    print dec_to_hex(10000)
  
