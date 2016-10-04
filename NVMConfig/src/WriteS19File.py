#!/usr/bin/python
# -*- coding:utf8 -*-
'''
Created on 2016年10月4日

@author: niujianlong
'''
from S19DataMapList import S19DataMapListSum
# generation file define
S19_Dir = './../gen/c51e.s19'
S19_filename = 'c51e.s19'
S19 = file(S19_Dir, 'w+')
   
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
    dataSum = 0
    for elem in S19DataMapListSum:
        if (index % 28 == 0):
            dataSum = 0
            addressHex = '0' * (8 - len(str(hex(address))[2:])) + str(hex(address))[2:]
            # print addressHex
            File.write('S321' + addressHex.upper())
            address = address + 28
        index = index + 1
        File.write(ChangeTheDataFormat(elem))
        dataSum = dataSum + elem
        if (index % 28 == 0):
            checksum = 0xff - (dataSum & 0xff)
            File.write(ChangeTheDataFormat(checksum) + '\n')
    
def main():
    WriteS19File(S19)    
if __name__ == '__main__':
    main()   
