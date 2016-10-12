# coding=utf-8
import os
Base_Dir = os.path.dirname(__file__)

fw = file(ur'.\..\gen\C53FSorted.txt', "w+")
frameDict = {}
frameList = []
sortedFrameList = []
i = -1
for line in open(ur'.\..\res\C53F.txt'):  
    line_split = line.split(' ')
    if line_split[0] == 'BO_':
        frameID=int(line_split[1])
        frameList.append(line)
        i = i + 1
    elif line_split[0] == '':
        frameList.append(line)
    else: 
        frameDict[frameID]= frameList
        frameID = 0
        frameList = []    
       
sortedFrameList = sorted(frameDict.iteritems(),key = lambda asd:asd[0],reverse = False)
k=0
for tupleIndex in sortedFrameList:
    if k != 0:
        fw.write('\n')
    for BOandSG in tupleIndex[1]:
        print BOandSG
        fw.write(BOandSG)
        k = k+1
fw.write('\n')        