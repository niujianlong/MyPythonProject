#!/usr/bin/python
# -*- coding:utf8 -*-
'''
Created on 2016年6月24日

@author: cetc
'''
fw = file("result.txt", "w+")
MoudleNameInfo = []
rocode = []
rodata = []
rwdata = []
absrodata = []
absrwdata = []
CANFileName = []
CANFileData = []


for line in open("Memory.txt"): 
    #line_split = line.split(' ')
    '''
    for str in line[4:29]:
        if(str==''):
            break;
        else:
            MoudleName.append(str)
    print MoudleName 
    '''       
    MoudleNameInfo = line[4:29]
    MoudleNameInfo = ''.join([x for x in MoudleNameInfo if x != ' '])
    print MoudleNameInfo
    rocode = line[29:36]
    rocode = ''.join([x for x in rocode if x != ' '])
    #print rocode
    rodata = line[38:45]
    rodata = ''.join(x for x in rodata if x != ' ')
    #print rodata
    rwdata = line[47:54]
    rwdata = ''.join(x for x in rwdata if x != ' ')
    #print rwdata
    absrodata = line[56:63]
    absrodata = ''.join(x for x in absrodata if x != ' ')
    #print absrodata
    absrwdata = line[65:72]
    absrwdata = ''.join(x for x in absrwdata if x != ' ')
    #print absrwdata
    fw.write(MoudleNameInfo + '  '+rocode+'       '+rodata+'       '+rwdata+'       '+absrodata+'         '+absrwdata +'\n')

    
        
    
    #print line[29:36]