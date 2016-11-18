#!/usr/bin/python
# -*- coding:utf8 -*-
'''
Created on 2016年11月18日

@author: niujianlong
'''
import os
import subprocess 
  
#os.chdir(ur'E:\AllProjectGit\B100KIOC')
#os.system(ur'C:\cygwin64\bin\mintty.exe')
#returnP = sp.Popen(args=['bash', '-s'],stdin = sp.PIPE,stdout = sp.PIPE, stderr = sp.PIPE, shell = True)
program = subprocess.Popen([ur'C:\cygwin64\bin\bash.exe','--login'], stdin=subprocess.PIPE, stdout=subprocess.PIPE)

#program.stdin.write("ls\n")

#print program.stdout.read()
program.stdin.write('cd E:AllProjectGit/B100KIOC\n')
program.stdin.write("ls\n")
# stdout, stderr = program.communicate() 
program.stdin.write("repo status\n")
#program.stdin.write("repo sync\n")
stdout, stderr = program.communicate() 
print stdout,stderr
#returnP.communicate(input = 'ls' )
# returnP.stdin.write('ls\n')
# returnP.stdin.write('cd E:AllProjectGit/B100KIOC\n')
# returnP.stdin.write('repo sync\n')
# print (returnP.stdout.read() + returnP.stderr.read())
#os.system(ur'C:\cygwin64\bin\mintty.exe gitlogAndxml.py')