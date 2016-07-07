#coding=utf-8
import re
import string
global frameStructName
cycleList = [] #把所有的signal的四个参数的列表再用一个列表封装一下
cycleIDList = [] # 这个是记录每个信号名字的列表
DistinccycleIDList = [] # 这个是记录每个信号名字的列表
beforeAndafter = []
fw=file("CycleResult.h","w+")#生成报文的联合体
    
for line in open("beforeAndafter.c"): 
    line = line.strip('\n') 
    beforeAndafter.append(line)
    print beforeAndafter
for line in open("CycleValue.txt"):  
    line_split = line.split(' ')
    print line_split
    
    if line_split[1]=='"GenMsgCycleTime"' or line_split[1]=='"GenMsgSendType"': #如果以BO_开头则做下边的准备工作
       cycleIDList.append(line_split[3])
       if cycleIDList.count(line_split[3])==1: 
           cycleList.append(line_split[4].split(';')[0])
           print cycleList  
           print len(cycleList) 
                               
for i in range(len(beforeAndafter)):
    fw.write(beforeAndafter[i]+'    /*'+cycleList[i]+'*/\n')  
#打印数组
lenList = []
fw.write('uint8 cycleArr[25] ={') 
for i in cycleList[:-1]:
    if i!='1': #这里一开始写的是1 结果1是去不掉的 因为List里边是’1’
        num = re.findall(r"\d+\.?\d*",i) # 这3句代码主要是为了提取出像'1'中的1这个数字，因为这个数字就是信号长度的索引
        num = int(num[0])#正则表达式返回的是列表 所以这里获取到第一个索引值  获得具体的数字
        fw.write(str(num*4/5)+',')  
        lenList.append(i) 
num = re.findall(r"\d+\.?\d*",cycleList[-1])
num = int(num[0])
fw.write(str(num*4/5)) 
lenList.append(cycleList[-1])        
fw.write('};') 
print len(lenList)



