#coding=utf-8
import re
import string
global frameStructName
sumSigList = []
singleSigName = []
singleSigLen  = []
fw=file("CANService.h","w+")

for line in open("ABUS_EHU.txt"):  
    line_split = line.split(' ')
    #print line_split
    
    if line_split[0]=='BO_':
        frameStructName = line_split[2][:-1] # [:-1]的目的是去掉末尾的：号
        fw.write("\nextern  const "+frameStructName.lower()+"_union "+frameStructName.lower()+";\n")
        fw.write("typedef union\n{\n    struct\n    {\n")
    elif line_split[0]=='':
        singleSigList = []
        singleSigName.append(line_split[2])
        tempEndBit = line_split[4].split("|") #先解析出来endBit
        endBit = tempEndBit[0]
        endBit = string.atoi(endBit)#因为endBit参与了算术运算 所以这里也必须转换成int
        singleSigList.append(endBit)
        #print endBit
        tempBitLength = tempEndBit[1].split("@") #再解析出来bitLength
        #print tempBitLength
        bitLength = tempBitLength[0]
        bitLength=string.atoi(bitLength) #将bitLength从str转成int便于下边的条件判断
        singleSigList.append(bitLength)
        singleSigLen.append(bitLength)
        #print bitLength-8
        startBit = 0
        startByte = 0 
        if bitLength <= 8:
            startBit = endBit - bitLength+1 # 虽然dbc文件里没有给出startBit和startByte 但是通过下边的运算可以间接的得到
            startByte = startBit/8
            singleSigList.append(startBit)
            singleSigList.append(startByte)
            #print startByte
        elif bitLength == 16:
            startBit = endBit + 1
            startByte = startBit/8
            singleSigList.append(startBit)
            singleSigList.append(startByte)
        elif bitLength > 16:
            startBit = endBit + (bitLength/8-2)*8 + 1
            startByte = startBit/8
            singleSigList.append(startBit)
            singleSigList.append(startByte)
        sumSigList.append(singleSigList)

    else:
        print sumSigList
        '''for i in range(len(sumSigList)):
            sumSigList[i][0]=sumSigList[i][0]-sumSigList[i][3]*8
            sumSigList[i][2]=sumSigList[i][2]-sumSigList[i][3]*8
        '''
        '''
                            用列表里嵌套字典来模拟通讯矩阵，通过下边的代码对这个通讯矩阵进行赋值
        '''
        frameData = [{7: None, 6: None, 5: None, 4: None, 3: None, 2: None, 1: None, 0: None},
             {15: None, 14: None, 13: None, 12: None, 11: None, 10: None, 9: None, 8: None},  
             {23: None, 22: None, 21: None, 20: None, 19: None, 18: None, 17: None, 16: None},
             {31: None, 30: None, 29: None, 28: None, 27: None, 26: None, 25: None, 24: None},
             {39: None, 38: None, 37: None, 36: None, 35: None, 34: None, 33: None, 32: None},
             {47: None, 46: None, 45: None, 44: None, 43: None, 42: None, 41: None, 40: None},
             {55: None, 54: None, 53: None, 52: None, 51: None, 50: None, 49: None, 48: None},
             {63: None, 62: None, 61: None, 60: None, 59: None, 58: None, 57: None, 56: None},
             ]
        #print len(sumSigList)
        #print singleSigName
        #print len(singleSigName)
        for i in range(len(sumSigList)):
            startByte = sumSigList[i][3]
            startBit  = sumSigList[i][2]
            bitLength = sumSigList[i][1]
            endBit    = sumSigList[i][0]
            if bitLength <=8:
                for j in range(startBit,endBit+1):
                    frameData[startByte][j]= 'a'+str(i)
            elif bitLength == 16:
                for j in range(startBit,startBit+8):
                    frameData[startByte][j] = 'a'+str(i)
                for j in range(endBit-7,endBit+1):
                    frameData[startByte-1][j] = 'a'+str(i)
            elif bitLength == 24:
                for j in range(startBit,startBit+8):
                    frameData[startByte][j] = 'a'+str(i)
                for j in range(startBit-8,startBit):
                    frameData[startByte-1][j] = 'a'+str(i)
                for j in range(startBit-16,startBit-8):
                    frameData[startByte-2][j] = 'a'+str(i)
            elif bitLength == 32:
                for j in range(startBit,startBit+8):
                    frameData[startByte][j] = 'a'+str(i)
                for j in range(startBit-8,startBit):
                    frameData[startByte-1][j] = 'a'+str(i)
                for j in range(startBit-16,startBit-8):
                    frameData[startByte-2][j] = 'a'+str(i) 
                for j in range(startBit-32,startBit-16):
                    frameData[startByte-3][j] = 'a'+str(i)
        
        #解析列表里的字典打印对应的结构体成员   
        print frameData
        print singleSigLen
        fwList = []
        for i in range(len(frameData)):
            for j in range(i*8,i*8+8):
                str1 = frameData[i][j]
                if str1 == None:
                    fwListNone = "      UINT8 "+frameStructName.lower()+"_res"+str(i+j)+":1\n"
                    fwList.append(fwListNone)
                    
                else:
                    temp = str(frameData[i][j])
                    num = re.findall(r"\d+\.?\d*",temp) #提取出a11中的11
                    num = int(num[0])
                    #print num
                    if singleSigLen[num]<=8:
                        fwListA ="      UINT8 "+singleSigName[num].lower()+":"+str(singleSigLen[num])+"\n"
                    elif singleSigLen[num]==16:
                        fwListA ="      UINT16 "+singleSigName[num].lower()+":"+str(singleSigLen[num])+"\n"
                    else:
                        fwListA ="      UINT32 "+singleSigName[num].lower()+":"+str(singleSigLen[num])+"\n"
                    fwList.append(fwListA)
        fwList2=[]
        [fwList2.append(i) for i in fwList if not i in fwList2] #去重
        for i in fwList2:
            fw.write(i)
        fw.write("    }Item;\n\n")
        fw.write("    UINT8 arr[8];\n\n")
        
        #print fwList2
        fw.write("}"+str(frameStructName).lower()+";\n")  
        for i in singleSigName:
            fw.write("#define  "+i+"    "+frameStructName.lower()+".Item."+i.lower()+"\n")
        sumSigList = []
        singleSigName = []
        singleSigLen = []
fw.write("}"+str(frameStructName).lower()+";\n") # 因为line到末尾的时候会退出for循环 这时候还没有打印最后一个结构体的名字 所以要加上这句话  
print sumSigList             
print singleSigName        
       
                              
        
