#!/usr/bin/python
# -*- coding:utf8 -*-
'''
Created on 2016年11月18日

@author: niujianlong
'''
import os
import subprocess 

def cygwin(command):
    """
    Run a Bash command with Cygwin and return output.
    """
    # Find Cygwin binary directory
    for cygwin_bin in [r'C:\cygwin\bin', r'C:\cygwin64\bin']:
        if os.path.isdir(cygwin_bin):
            break
    else:
        raise RuntimeError('Cygwin not found!')
    # Make sure Cygwin binary directory in path
    if cygwin_bin not in os.environ['PATH']:
        os.environ['PATH'] += ';' + cygwin_bin
    # Launch Bash
    p = subprocess.Popen(
        args=['bash', '--login', '-c', command],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    p.wait()
    # Raise exception if return code indicates error
    if p.returncode != 0:
        raise RuntimeError(p.stderr.read().rstrip())
    # Remove trailing newline from output
    print (p.stdout.read() + p.stderr.read()).rstrip()
    p.kill()

# os.chdir(ur'E:\AllProjectGit\B100KIOC')
# os.system(ur'C:\cygwin64\bin\mintty.exe')
# returnP = subprocess.Popen([ur'C:\cygwin64\bin\mintty.exe','-'],stdin = sp.PIPE,stdout = sp.PIPE, stderr = sp.PIPE, shell = True)

# returnP.communicate(input = 'ls' )
# returnP.stdin.write('-e ls\n')
# returnP.stdin.write('-e cd E:AllProjectGit/B100KIOC\n')
# returnP.stdin.write('-e repo sync\n')


# os.chdir(ur'E:\AllProjectGit\B100KIOC')


print '---------------------------------------------------------------------------\n repo sync start!'    
'''
print cygwin('cd E:AllProjectGit/B100KIOC ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/B100KIOC-gas ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/B100KSOC ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/B100KSOC-gas ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/C11IOC ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/C11SOC ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/C51E ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/C4053FIOC ; rm -rf *; repo sync')
print cygwin('cd E:AllProjectGit/C4053FSOC ; rm -rf *; repo sync')'''

for filename in os.listdir(r'E:\AllProjectGit'):
    if filename not in ['GitProject','Pro Git 2nd Edition']:
        print filename
        cygwin('cd E:AllProjectGit/'+filename+' ; repo help') 

print '---------------------------------------------------------------------------\n repo sync done!\n\n'    
#IOC git project update

for filename in os.listdir(r'E:\AllProjectGit\GitProject'):
    if filename not in ['SOC', 'Tool']: #'' and filename != '': #and filename != 'common_base' and filename != 'QNX':
        print filename
        cygwin('cd E:AllProjectGit/GitProject/'+filename+' ; git branch -av')
   
print '---------------------------------------------------------------------------\nIOC git fetch done!\n\n'    
print '---------------------------------------------------------------------------\nSOC git fetch start!\n\n' 

for filename in os.listdir(r'E:\AllProjectGit\GitProject\SOC'): 
    print filename
    cygwin('cd E:AllProjectGit/GitProject/SOC/'+filename+' ; pwd ; git branch -av')
         
#cygwin('cd E:AllProjectGit/GitProject/QNX ; pwd; git branch -av')
    
    #pass
   
    
    #pass
print '---------------------------------------------------------------------------\nSOC git fetch done!\n\n'    
    
    
print '---------------------------------------------------------------------------\ntask done!\n\n'
# print cygwin('pwd')
# print cygwin('ls -l')
# print cygwin('repo sync')
# print cygwin(r'dos2unix $(cygpath -u "C:\some\file.txt")')
# print cygwin(r'md5sum $(cygpath -u "C:\another\file")').split(' ')[0]

