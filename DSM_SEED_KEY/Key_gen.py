#!/usr/bin/python
# -*- coding:utf8 -*-
'''
#Created on 2016年5月24日

@author: cetc
'''
seed = 0x8969b69d
Key = ((((seed>>4) ^ seed)<<3) ^ seed)
print hex(Key)

#Rx: 644.352 7FA  67 01 00 16 8E 24










