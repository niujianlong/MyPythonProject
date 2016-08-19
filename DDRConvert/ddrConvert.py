'''
@author: niujianlong
'''
#!/usr/bin/python
# -*- coding:utf8 -*-
# variable define
fr_ofilm_inc = "ofilm.inc"
fw_flash_header_s = file("flash_header.S", "w+")
fw_imximage_cfg = file("imximage.cfg", "w+")
LineHeader = 'MXC_DCD_ITEM'
LineAnnotation = '#'

def GetRegisterAddress(line):  # line is split with \t
    if line[0] == 'setmem /32':
        line = line[1].split(' ')
        return line[0]
def GetRegisterValue(line):  # line is split with \t
    if line[0] == 'setmem /32':
        return line[2]   
def HexNumReversal(num, count):  
    numstr = (str(hex(num * 8 + 4 * count))).lstrip('0x')
    numstr = '0' * (4 - len(numstr)) + numstr
    numstr = numstr[2:4].upper() + numstr[0:2].upper()
    return numstr    
 
linenum = 1
linenumReved = 1
def WriteHeaderTwoLine(fr_ofilm_inc):
    global linenumReved
    for line in open(fr_ofilm_inc):
        line = line.split('\t')
        if line[0] == 'setmem /32': 
            linenumReved = linenumReved + 1
         
    fw_flash_header_s.write('dcd_hdr:          .word 0x40' + HexNumReversal(linenumReved - 1, 2) + 'D2 /* Tag=0xD2, Len=' + str(linenumReved - 1) + '*8 + 4 + 4, Ver=0x40 */\n')        
    fw_flash_header_s.write('write_dcd_cmd:    .word 0x04' + HexNumReversal(linenumReved - 1, 1) + 'CC /* Tag=0xCC, Len=' + str(linenumReved - 1) + '*8 + 4, Param=0x04 */\n')        

def ReadFileAnalysis(fr_ofilm_inc):
    global linenum
    for line in open(fr_ofilm_inc):
        lineSave = line
        line = line.split('\t')
        if str(line[0]).startswith('//'):
            fw_flash_header_s.write(LineAnnotation + lineSave.lstrip('//'))
            fw_imximage_cfg.write(lineSave)
        if line[0] == 'setmem /32': 
            fw_flash_header_s.write(LineHeader + '(' + str(linenum) + ', ' + GetRegisterAddress(line) + ', ' + GetRegisterValue(line) + ')\n')
            fw_imximage_cfg.write('DATA 4 ' + GetRegisterAddress(line) + ' ' + GetRegisterValue(line) + '\n')
            linenum = linenum + 1  
        if line[0] == '':
            fw_flash_header_s.write(lineSave)
            fw_imximage_cfg.write(lineSave)    
           
if __name__ == '__main__':
    WriteHeaderTwoLine(fr_ofilm_inc)
    ReadFileAnalysis(fr_ofilm_inc)
