# coding=utf-8
import string
global frameStructName
fw = file("struct.h", "w+")
fw1 = file("VariableDefinition.c", "w+")
fw2 = file("getMissingFlagPrototype.h", "w+")
fw3 = file("getNeverReceFlagPrototype.h", "w+")
fw4 = file("getMissingFlagFunBody.c", "w+")
fw5 = file("getNeverReceFlagFunBody.c", "w+")
fw7 = file("missingCounter.h", "w+")
fw8=file("CANServiceFun.h","w+") #生成获取信号的get函数的函数原型
fw9=file("CANServiceFunBody.c","w+") #生成获取信号的get函数的函数体
fw11=file("SignalAnalysis.c","w+") #生成获取信号的get函数的函数体
fw14=file("CANServiceSetFunBody.c","w+") #生成获取信号的get函数的函数体
fw10=file("bitlength.txt","w+") #生成获取信号的get函数的函数体
fw12=file("4.txt","w+") #生成获取信号的get函数的函数体
fw13=file("5.txt","w+") #生成获取信号的get函数的函数体
fw15=file("DefaultMissingProcess.c","w+") #生成获取信号的get函数的函数体
fw16=file("DefaultMissingProcess.h","w+") #生成获取信号的get函数的函数体
fw17=file("vbus_receive_frame.c","w+") #生成vbus_receive_frame函数的函数体
fw18=file("frameMissingProcess.c","w+") #生成frameMissingProcess函数的函数体
singleSigName = []  # 这个是记录每个信号名字的列表
structName = []  # 去除dbc里边的重复定义的报文
bitLengthList = []
bitPragram = []
global frameID 

fw11.write("void SignalAnalysisTask(){\n")
fw17.write('{\n')
fw18.write('{\n')
for line in open("7MUpdate.txt"):  
    line_split = line.split(' ')
    print line_split
    if line_split[0] == 'BO_':
        frameID = int(line_split[1])
        frameStructName = line_split[2][:-1]  # [:-1]的目的是去掉末尾的：号
        fw17.write('\ncase '+ hex(frameID)+':\n FRAME_DATA_HANDLE('+frameStructName.lower()+', '+ frameStructName.capitalize() +');\nbreak;\n')
        fw18.write('FRAME_MISSING_HANDLE('+frameStructName.lower()+', '+ frameStructName.capitalize()+');\n')
        structName.append(frameStructName)
        fw.write("\ntypedef struct\n{\n    uint8  data[8];\n    uint8  " + frameStructName.capitalize() + "MissingFlag;\n ")
        fw.write('\n#if  NeverReceFlagEN\n    uint8  ' + frameStructName.capitalize() + "NeverReceFlag;\n #endif\n\n")
        #fw4.write('#define  ' + frameStructName.upper() + '_CYCLE    \n')
        #fw6.write(frameStructName.upper() + '_CYCLE *')
        fw2.write('extern uint8 get_'+frameStructName.lower()+'_missing_flag(void);\n')
        fw3.write('extern uint8 get_'+frameStructName.lower()+'_never_reve_flag(void);\n')
        fw4.write('uint8 get_'+frameStructName.lower()+'_missing_flag(){\n')
        fw4.write('      return  '+frameStructName.lower()+'.'+frameStructName.capitalize()+'MissingFlag;\n}\n')
        fw5.write('uint8 get_'+frameStructName.lower()+'_never_reve_flag(){\n')        
        fw5.write('      return  '+frameStructName.lower()+'.'+frameStructName.capitalize()+'NeverReceFlag;\n}\n')
        #fw5.write('#define  ' + frameStructName.upper() + '_MISSING_CYCLE    MISSING_CYCLE\n')
        #fw6.write(frameStructName.upper() + '_MISSING_CYCLE / TASK_CYCLE,\n')
        fw7.write('static uint16  ' + frameStructName.lower() + 'Count=0;\n')
        
        fw14.write('/*'+frameStructName+' missing default process*/\n')
        fw15.write('\nvoid Set'+frameStructName.lower()+'MissingDefaultValue(void)\n{\n')
        fw16.write('extern void Set'+frameStructName.lower()+'MissingDefaultValue(void);\n')
        #vcu_0x212.Vcu_0x212NeverReceFlag = 1u;
        fw13.write("  " + frameStructName.lower() + "."+frameStructName.capitalize() +'NeverReceFlag = 1u;\n')  # 打印函数原型的注释
    elif line_split[0] == '':
        singleSigName.append(line_split[2])  # 这个列表是记录所有信号的名字用的
        tempEndBit = line_split[4].split("|")  # 先解析出来endBit
        endBit = tempEndBit[0]
        endBit = string.atoi(endBit)  # 因为endBit参与了算术运算 所以这里也必须转换成int
        # print endBit
        tempBitLength = tempEndBit[1].split("@")  # 再解析出来bitLength
        # print tempBitLength
        bitLength = tempBitLength[0]
        fw10.write(bitLength+'\n')
        bitLength = string.atoi(bitLength)  # 将bitLength从str转成int便于下边的条件判断
        bitLengthList.append(bitLength)
        print bitLengthList
        print bitLength
        #fw10.write(int(bitLength))
        # print bitLength-8
        tempResolution = line_split[5].split("(")  # 要解析的是这个类型的(0.01,0) 所以思路思路是先用左括号切割然切割后变成['', '0.01,0)'] 可见我们在对第二个元素用，切割得到
        # print tempResolution
        tempResolution = tempResolution[1].split(",")  # 可见我们在对第二个元素用，切割得到['0.01', '0)'] 可见第一个元素就是resolution 
        # print tempResolution
        resolution = tempResolution[0]
        tempResolution = tempResolution[1].split(")")  # 再对第二个元素用右括号切割 第一个元素就是offset
        offset = tempResolution[0]
        # print tempResolution
        # print resolution
        # print offset
        startBit = 0
        startByte = 0 
        if bitLength <= 8:
            startBit = endBit - bitLength + 1  # 虽然dbc文件里没有给出startBit和startByte 但是通过下边的运算可以间接的得到
            startByte = startBit / 8
            # print startByte
            fw.write("   uint8 " + line_split[2] + ";\n")
           
        elif 8 < bitLength and bitLength <= 16:
            startBit = endBit + 1
            startByte = startBit / 8
            fw.write("    uint16 " + line_split[2] + ";\n")  
           
        elif bitLength > 16:
            startBit = endBit + (bitLength / 8 - 2) * 8 + 1
            startByte = startBit / 8
            fw.write("    uint32 " + line_split[2] + ";\n")
            
# getSigValue(Can_FrameType canRawData, UInt8 startByte, UInt8 startBit, UInt8 endBit, UInt8 bitLength,float resolution, UInt8 offset);
        bitPragram.append(startByte)
        bitPragram.append(startBit)
        bitPragram.append(endBit)
        bitPragram.append(bitLength)
        print bitPragram
        
        if bitLength <= 8:
            fw14.write('void set_'+line_split[2] + "( uint8 "+line_split[2]+')\n{\n')
            fw15.write(' set_'+line_split[2] + '(0);\n')
            fw14.write('     setuint8SigValue(' + frameStructName.lower() + ".data,"+ str(startByte) + "," + str(startBit) + "," + str(bitLength)+','+line_split[2]+');\n}\n')
        elif 8 < bitLength and bitLength <= 16:
            fw14.write('void set_'+line_split[2] + "( uint16 "+line_split[2]+')\n{\n')
            fw15.write(' set_'+line_split[2] + '(0);\n')
            fw14.write('     setuint16SigValue(' + frameStructName.lower() + ".data,"+ str(startByte) + "," + str(bitLength)+','+line_split[2]+');\n}\n')
        elif bitLength > 16:
            fw14.write('void set_'+line_split[2] + "( uint32 "+line_split[2]+')\n{\n')
            fw15.write(' set_'+line_split[2] + '(0);\n')
            fw14.write('     setuint32SigValue(' + frameStructName.lower() + ".data,"+ str(startByte) + "," + str(bitLength)+','+line_split[2]+');\n}\n')
        fw14.write('\n')          
               
        tempCan_FrameType = "canRawDataOf" + line_split[2]
        # 上边的这句代码要注意加上str的转换 否则会有类型不匹配相加的错误出现
        

    else: 
        fw15.write('}\n') 
        fw.write("}" + str(frameStructName).lower() + "_struct;\n") 
        fw.write("\nextern   " + frameStructName.lower() + "_struct    " + frameStructName.lower() + ";\n")
        fw1.write("\n   " + frameStructName.lower() + "_struct    " + frameStructName.lower() + ";")
        fw.write('#define  GET_' + frameStructName.upper() + '_MISSING_FLAG()    get_' + frameStructName.lower() + '_missing_flag()\n')
        fw12.write('GET_' + frameStructName.upper() + '_MISSING_FLAG()\n')
        fw.write('\n#if  NeverReceFlagEN\n#define  GET_' + frameStructName.upper() + '_NEVER_RECE_FLAG()    get_' + frameStructName.lower() + '_never_reve_flag()\n#endif\n\n')
        
        a = 0
        for i in singleSigName:  # 打印宏定义供外界来调用
            ibackup = []
            ibackup.append(i)
            i = i.split('_')
            print i
            fw.write("#define  GET_")
                
            for j in range(len(i)):  # 这个for循环主要是为了去除报文的中的ID
                if j != 1 and j != len(i) - 1:
                    fw.write(i[j] + '_')
            fw.write(i[j] + '()    ') 
            fw.write('get_')
            
            if bitLengthList[a]<=8:   
                fw8.write('extern uint8  get_')
                fw9.write('uint8  get_')
            elif 8 < bitLengthList[a] and bitLengthList[a] <= 16:  
                fw8.write('extern uint16  get_')
                fw9.write('uint16  get_')  
            else:
                fw8.write('extern uint32  get_')
                fw9.write('uint32  get_')   
            for j in range(len(i)):
                if j != 1 and j != len(i) - 1:
                    fw.write(i[j] + '_')
                    fw8.write(i[j] + '_')
                    fw9.write(i[j] + '_')
            fw.write(i[j] + '()\n') 
            fw8.write(i[j] + '(void);\n') 
            fw9.write(i[j] + '()\n{\n') 
            for k in ibackup:
                if bitLengthList[a]<=8: 
                    fw11.write('  '+ frameStructName.lower()  +'.'+k+" = getuint8SigValue("+ frameStructName.lower()  +'.'+"data," + str(bitPragram[0+a*4]) + "," + str(bitPragram[1+a*4]) + "," + str(bitPragram[2+a*4]) +  ");\n")
                    fw9.write("  return " + frameStructName.lower()  +'.'+ k + ";\n}\n\n")
                elif 8 < bitLengthList[a] and bitLengthList[a] <= 16:  
                    fw11.write('  '+ frameStructName.lower()  +'.'+k+" = getuint16SigValue("+ frameStructName.lower()  +'.'+"data," + str(bitPragram[0+a*4]) + "," + str(bitPragram[3+a*4]) +  ");\n")
                    fw9.write("  return " + frameStructName.lower()  +'.'+ k + ";\n}\n\n")
                else: 
                    fw11.write('  '+ frameStructName.lower()  +'.'+k+" = getuint32SigValue("+ frameStructName.lower()  +'.'+"data," + str(bitPragram[0+a*4]) + "," + str(bitPragram[3+a*4]) +  ");\n")
                    fw9.write("  return " + frameStructName.lower()  +'.'+ k + ";\n}\n\n")
            a=a+1       
        sumSigList = []  # 全局变量要清零  为下一次的循环做准备
        singleSigName = []
        singleSigLen = []
        bitLengthList = []
        bitPragram = []
fw11.write("}\n") 
fw17.write('}\n')            
fw18.write('}\n')            
        
       
                              
        
