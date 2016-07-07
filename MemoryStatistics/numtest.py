#!/usr/bin/python
# -*- coding:utf8 -*-
'''
Created on 2016 06.29

@author: cetc
'''
lNum=[]
i = 0
number = 1234567
while (number): 
    lNum.append(number % 10)
    number =number /10
    i=i+1
print lNum