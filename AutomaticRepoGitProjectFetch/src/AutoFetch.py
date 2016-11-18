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
        args=['bash', '--login','-c', command],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    p.wait()
    # Raise exception if return code indicates error
    if p.returncode != 0:
        raise RuntimeError(p.stderr.read().rstrip())
    # Remove trailing newline from output
    return (p.stdout.read() + p.stderr.read()).rstrip()

#os.chdir(ur'E:\AllProjectGit\B100KIOC')
#os.system(ur'C:\cygwin64\bin\mintty.exe')
#returnP = subprocess.Popen([ur'C:\cygwin64\bin\mintty.exe','-'],stdin = sp.PIPE,stdout = sp.PIPE, stderr = sp.PIPE, shell = True)

#returnP.communicate(input = 'ls' )
# returnP.stdin.write('-e ls\n')
# returnP.stdin.write('-e cd E:AllProjectGit/B100KIOC\n')
# returnP.stdin.write('-e repo sync\n')


#os.chdir(ur'E:\AllProjectGit\B100KIOC')

print cygwin('cd E:AllProjectGit/B100KIOC ; pwd ; repo sync')

# print cygwin('pwd')
# print cygwin('ls -l')
# print cygwin('repo sync')
# print cygwin(r'dos2unix $(cygpath -u "C:\some\file.txt")')
# print cygwin(r'md5sum $(cygpath -u "C:\another\file")').split(' ')[0]
os.system("pause")
