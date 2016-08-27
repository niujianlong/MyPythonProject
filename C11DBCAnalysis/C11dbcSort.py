# coding=utf-8
#from C11dbc import C11DBCSorted_txt_dir
import os

Base_Dir = os.path.dirname(__file__)
C11DBCSorted_txt_dir = os.path.join(Base_Dir,'GenFile//SourceGenFile',"C11DBCSorted.txt")

fw = file(C11DBCSorted_txt_dir, "w+")

def SortDBCFun(filename):
    frameDict = {}
    frameList = []
    sortedFrameList = []
    i = -1
    for line in open(filename):  
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

SortDBCFun(os.path.join(Base_Dir,'SourceFile','C11ABUS.txt')) #一定要注意在 C11ABUS.txt最后边加上一个空行，否则最后一个frame不会被识别    
SortDBCFun(os.path.join(Base_Dir,'SourceFile','C11VBUS.txt')) #同上     