#!/usr/bin/python  
# -*- coding:utf8 -*-  
  
import os  
import subprocess as sp
import shutil
import re

cmd = ['repo','forall','-p','-c','git','remote','-v']
dict1={}
path='/home/cetc/C11/SOC'
if cmd:
    out = sp.Popen(cmd, stdout=sp.PIPE, stderr=sp.STDOUT)
    if cmd:
        while True:
            line = out.stdout.readline()
            if not line: break
            if ('project 'in line):
                print line.split()[1]
                os.chdir(path+'/'+line.split()[1])
                cmd2 = ['git','log','--pretty=format:%H']
                dict1[(line.split()[1])[:-1]]= (sp.Popen(cmd2, stdout=sp.PIPE, stderr=sp.STDOUT)).stdout.read(40)

print dict1

os.chdir('/home/cetc/C11/xml/SOC/')
f = open('/home/cetc/C11/SOC/.repo/manifests/default.xml').readlines()
n=len(f)
xml=open("SOC.xml",'w+')

for i in range(n):
    c = re.findall('path=\"(.+)\" name=.+',f[i])
    if c:
        print c[0]
        print dict1[c[0]]
        xml.write(re.sub('\"( | revision.*)/>','\" revision=\"%s\"/>'%(dict1[c[0]]),f[i]))
    else:
        xml.write(f[i])

        
xml.close()
