#coding=utf-8
import re
import string
global frameStructName
sumSigList = [] #把所有的signal的四个参数的列表再用一个列表封装一下
singleSigName = [] # 这个是记录每个信号名字的列表
singleSigLen  = [] # 这个是记录每个信号bitLength 参数的列表
structName = [] #去除dbc里边的重复定义的报文
frameID = [] #记录报文的ID 用于case语句的打印
frameName = [] #记录报文的名字去除里边的关于ID的数字部分
DistinctframeID = []#去除 ID中的重复元素
fw=file("CANService.h","w+")#生成报文的联合体
fw1=file("interface.h","w+")#生成HDL中的接口内容
fw2=file("case.c","w+") #生成case语句
fw3=file("isWrite.c","w+")#生成类似uint8  isBms_0x450Write; 的变量定义
fw4=file("structBianliang.c","w+") #生成类似ecc_0x4e0_struct    ecc_0x4e0; 的变量定义
fw5=file("beforeAndafter.c","w+") #生成类似uint8  beforeBms_0x450，afterBms_0x450；用于计数
fw6=file("ifelsemissing.c","w+") #生成判断报文missing的if else语句
fw7=file("CANService.c","w+") #生成获取信号的get函数 以实现对数据的封装
fw8=file("CANServiceFun.h","w+") #生成获取信号的get函数的函数原型
fw9=file("CANServiceFunBody.c","w+") #生成获取信号的get函数的函数体
fw10=file("getMissingFlagPrototype.h","w+")  #生成获取信号MissingFlag的函数原型
fw13=file("getNeverReceFlagPrototype.h","w+")  #生成获取信号MissingFlag的函数原型
fw11=file("getMissingFlagFunBody.c","w+")   #生成获取信号MissingFlag的函数体
fw14=file("getNeverReceFlagFunBody.c","w+")   #生成获取信号MissingFlag的函数体
fw12=file("MissingFlagInitialValue.c","w+")   #生成获取信号MissingFlag的函数体
fw15=file("MissingCase.c","w+")   #生成获取信号MissingFlag的函数体
def sigNameWithoutID(s):
    return re.sub(r'([\d]+)','',s)                           
        
for line in open("ICM_ABUS_AND_VBUS_V1.2_20160314.txt"):  
    line_split = line.split(' ')
    print line_split
    
    if line_split[0]=='BO_': #如果以BO_开头则做下边的准备工作
        frameStructName = line_split[2][:-1] # [:-1]的目的是去掉末尾的：号
        frameID = frameStructName.split('_')[1]
        frameName = frameStructName.split('_')[0]
        DistinctframeID.append(frameID)
        if DistinctframeID.count(frameID)==1:
            fw4.write('static    '+frameStructName.lower()+'_struct    '+frameStructName.lower()+' = {-1};\n')
            fw2.write('case '+frameID+':\n')
            #fw2.write('  is'+frameStructName.capitalize()+'Write = 1;\n')
            fw3.write('uint8  is'+frameStructName.capitalize()+'Write;\n')
            fw5.write('uint32  before'+frameStructName.capitalize()+'=0, after'+frameStructName.capitalize()+'=0;\n')
            fw6.write('if(before'+frameStructName.capitalize()+' == after'+frameStructName.capitalize()+'){\n')
            fw6.write('    '+frameStructName.lower()+'.'+frameStructName.capitalize()+'MissingFlag = 1;\n')
            fw6.write('    cycleArr[0] = 16;\n}\n')
            fw6.write('else{\n')
            fw6.write('    '+frameStructName.lower()+'.'+frameStructName.capitalize()+'MissingFlag = 0;\n')
            fw6.write('    before'+frameStructName.capitalize()+' = after'+frameStructName.capitalize()+';\n')
            fw6.write('    cycleArr[0] = 16;\n}\n')
            
            fw2.write('  if(U32MAX==after'+frameStructName.capitalize()+')\n')
            fw2.write('     after'+frameStructName.capitalize()+'=0;\n')
            fw2.write('  else\n')
            fw2.write('     after'+frameStructName.capitalize()+'++;\n')
            fw2.write('  OS_CRITICAL_ENTER();\n')
            fw2.write('  for (int i = 0; i < 8; i++)\n')
            fw2.write('    {\n')
            fw2.write('       '+frameStructName.lower()+'.UnionItem.arr[i] = myReceiveFrame.DB[i];\n')
            fw2.write('    }\n')
            #fw2.write('  is'+frameStructName.capitalize()+'Write = 0;\n')
            fw2.write('  OS_CRITICAL_EXIT();\n')
            fw2.write('  break;\n\n')
        structName.append(frameStructName)
        print frameStructName
        print structName
        if structName.count(frameStructName)==1:
            fw.write("\ntypedef struct\n{\n    UINT8  "+frameStructName.capitalize()+"MissingFlag;\n    UINT8  "+frameStructName.capitalize()+"NeverReceFlag;\n"+"    union\n    {\n      struct\n     {\n") #具体数据的结构体
    elif line_split[0]=='': #以空白开头的就是signal信号
        singleSigList = []  #这个列表是为了记录所有信号的endBit，bitLength ，startBit， startByte
        singleSigName.append(line_split[2]) # 这个列表是记录所有信号的名字用的
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
        '''
        # 虽然dbc文件里没有给出startBit和startByte 但是通过下边的运算可以间接的得到
                    下边就是具体的求解过程
        '''
        startBit = 0
        startByte = 0 
        if bitLength <= 8:
            startBit = endBit - bitLength+1 
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
        # 以上是为了求取startBit startByte
        sumSigList.append(singleSigList) #把四个参数再放进一个列表里封装一下

    else: #也就是在以'\n'开头的时候   就是要集中处理上边的获得数据以及打印结构体的时候了
        print sumSigList
        '''for i in range(len(sumSigList)):
            sumSigList[i][0]=sumSigList[i][0]-sumSigList[i][3]*8
            sumSigList[i][2]=sumSigList[i][2]-sumSigList[i][3]*8
        '''
        '''
                            用列表里嵌套字典来模拟通讯矩阵，通过下边的代码对这个通讯矩阵进行赋值 
                           这个模拟是这个脚本最精华的部分，为什么要用字典呢？其实你仔细去看通讯矩阵的赋值的过程中你就会发现
                          他就是一个明显键值的关系，比如从第0个Byte的第4位是1，第5位是0  可以看到4就是键 1就是值 5就是键 0就是值
                         同时也可以看到，他的键值是唯一的从0-63根本不会重复，这更加符合字典的定义了。。。
                         同时也可以想到既然键值是具体的数字那么用列表来模拟不行吗？一开始我就是这么想的，但是其实这是行不通的
                         因为你看到他的索引虽然是递增的数字，但是他跨字节排布的时候越高的位占用的键值越小，这么一来列表就很难办到了
                         但是字典就不存在这个问题，因为键值是独立的，向两个方向去遍历。为什用列表再嵌套一层字典是为了模拟具体的每一个
          Byte位，列表中的每一个成员就是一个Byte数据的字典的键值关系
            
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
        '''
                    下面的代码就是具体的模拟你人工的去填充通讯矩阵的过程，你手动去填这些位的时候遵循的就是这个逻辑，只不过这里我用代码来模拟了这个过程
        '''
        for i in range(len(sumSigList)):#将信号填充到通讯矩阵里，所以这里遍历的是所有信号的4个参数的列表  这里你也可以体会为什么要载对存有4个参数的列表再封装一次的用意了
            startByte = sumSigList[i][3]#先获取到4个参数
            startBit  = sumSigList[i][2]
            bitLength = sumSigList[i][1]
            endBit    = sumSigList[i][0]
            if bitLength <=8:          # 以bitLength 是否大于8为分界 进行分段解析 因为大于8跟小于8的时候填充的逻辑是不同的
                for j in range(startBit,endBit+1):#引文range函数不包括尾部，所以这里加了一个1
                    frameData[startByte][j]= 'a'+str(i) #其实这里你可以体会为设么把字典再封装到列表里 就是为了根据startByte快速的定位到要填充的位置
            elif bitLength == 16:
                for j in range(startBit,startBit+8):
                    frameData[startByte][j] = 'a'+str(i) #起始的Byte全部填充为ai
                for j in range(endBit-7,endBit+1):#
                    frameData[startByte-1][j] = 'a'+str(i)#起始前一个的Byte全部填充为ai
            elif bitLength == 24:
                for j in range(startBit,startBit+8):
                    frameData[startByte][j] = 'a'+str(i)#起始的Byte全部填充为ai
                for j in range(startBit-8,startBit):
                    frameData[startByte-1][j] = 'a'+str(i)#起始前一个的Byte全部填充为ai
                for j in range(startBit-16,startBit-8):
                    frameData[startByte-2][j] = 'a'+str(i)#同上
            elif bitLength == 32:
                for j in range(startBit,startBit+8):
                    frameData[startByte][j] = 'a'+str(i)#同上
                for j in range(startBit-8,startBit):
                    frameData[startByte-1][j] = 'a'+str(i)#同上
                for j in range(startBit-16,startBit-8):
                    frameData[startByte-2][j] = 'a'+str(i) #同上
                for j in range(startBit-32,startBit-16):
                    frameData[startByte-3][j] = 'a'+str(i)#同上
        '''
        #解析列表里的字典打印对应的结构体成员
                    既然上边通过列表与字典的组合模拟了通讯矩阵并且通过代码模拟的方式将各个信号填充进去了，那么很自然下一步就是
                    将上边填充的通讯矩阵解析出来（这个解析就是打印具体结构体的过程）
                    解析的具体实现思路：
        [{0: None, 1: None, 2: 'a0', 3: 'a1', 4: None, 5: None, 6: 'a2', 7: 'a3'},
        {8: None, 9: None, 10: None, 11: None, 12: None, 13: None, 14: None, 15: None}, 
        {16: None, 17: None, 18: None, 19: None, 20: None, 21: None, 22: None, 23: None}, 
        {24: None, 25: None, 26: None, 27: None, 28: None, 29: None, 30: None, 31: None}, 
        {32: None, 33: None, 34: None, 35: None, 36: None, 37: None, 38: None, 39: None}, 
        {40: None, 41: None, 42: None, 43: None, 44: None, 45: None, 46: None, 47: None}, 
        {48: None, 49: None, 50: None, 51: None, 52: None, 53: None, 54: None, 55: None}, 
        {56: None, 57: None, 58: None, 59: None, 60: None, 61: None, 62: None, 63: None}]
                    上边的通讯矩阵经过赋值以后就会变成变成上边的大概的样式  这里要理解解析的思想就要转变一种观念就是保留位一定要合在一起
                    其实合在一起与分开对我们实际的开发工作影响不大，因为你合起来也是占用这么多空间而且我们用不到保留值
                    如果废弃了上边这个观念就很容易理解我下边的解析思路了
                    我的具体思路就是：
                   遍历整个列表词典 以8个bit即一个Byte为单位   凡是遇到值为None 直接打印  _res（区分索引值i+j或者j 只要是唯一的就行）:1 (也就是将保留位分开)
                                                                                                        凡是不是None的值   则直接打印这个信号的名字：bitLength
                                                                                                        
                可以看到上边的这个解析思路其实是有一个问题的保留位是不会重复的 ，因为我引入的唯一的索引值，但是打印出来的具体的信号值却是同一个信号结构体成员的定义
                被打印了他的bitLength次       
                这就体现了我为什么又将所有的打印信息放在这个类表的原因了 fwList = [] 因为我可以利用列表的去重复的功能来去除所有信号的重复打印                                                                                       
        '''
        print frameData
        print singleSigLen
        fwList = [] # 这个列表存储的是所有要打印的东西 一个是保留位的数据，一个是具体的信号的数据
        for i in range(len(frameData)): #遍历通讯矩阵 为信号的解析做准备
            for j in range(i*8,i*8+8):  #遍历没一个具体的8个bit 具体参见上边的解析的思想
                str1 = frameData[i][j]
                if str1 == None:
                    fwListNone = "      UINT8 "+frameStructName+"_res"+str(i+j)+":1;\n"
                    fwList.append(fwListNone)
                    
                else:#一开始我想这个else语句里来处理信号的重复打印问题，这是做不到的，因为num的每次循环都会被赋予新的同一个值你的--根本没有意义
                    temp = str(frameData[i][j])#这里的正则表达式也很经典
                    num = re.findall(r"\d+\.?\d*",temp) # 这3句代码主要是为了提取出像a11中的11这个数字，因为这个数字就是信号长度的索引
                    num = int(num[0])#正则表达式返回的是列表 所以这里获取到第一个索引值  获得具体的数字
                    #print num
                    if singleSigLen[num]<=8: #这3个if  elif 主要是为了对其信号长度大于8的 对前边的类型做出区分
                        fwListA ="      UINT8 "+singleSigName[num]+":"+str(singleSigLen[num])+";\n"
                    elif singleSigLen[num]==16:
                        fwListA ="      UINT16 "+singleSigName[num]+":"+str(singleSigLen[num])+";\n"
                    else:
                        fwListA ="      UINT32 "+singleSigName[num]+":"+str(singleSigLen[num])+";\n"
                    fwList.append(fwListA)
        fwList2=[] #不能直接调用列表的set函数来去除重复，因为它会改变类表本来的排布顺序，而在我们这里这个顺序是至关重要的所以用一个新的列表来接收不重复的元素
        [fwList2.append(i) for i in fwList if not i in fwList2] #去重  这句代码很经典  注意体会使用
        for i in fwList2:
            if structName.count(frameStructName)==1:
                fw.write(i) #这时的fwList2已经没有信号的重复了  直接打印就可以了
            
        if structName.count(frameStructName)==1:
            fw.write("    }Item;\n\n")
            fw.write("    UINT8 arr[8];\n\n")
            fw.write("    }UnionItem;\n\n")
            
        
        #print fwList2
        if structName.count(frameStructName)==1:
            fw.write("}"+str(frameStructName).lower()+"_struct;\n") 
            fw.write("\nextern   "+frameStructName.lower()+"_struct    "+frameStructName.lower()+";\n")
            fw.write('#define  GET_'+frameStructName.upper()+'_MISSING_FLAG()    get_'+frameStructName.lower()+'_missing_flag()\n')
            fw.write('#define  GET_'+frameStructName.upper()+'_NEVER_RECE_FLAG()    get_'+frameStructName.lower()+'_never_reve_flag()\n')
            fw10.write('UINT8    get_'+frameStructName.lower()+'_missing_flag();\n')
            fw13.write('UINT8    get_'+frameStructName.lower()+'_never_reve_flag();\n')
            fw11.write('UINT8 get_'+frameStructName.lower()+'_missing_flag(){\n')
            fw15.write('case  :\n      if('+frameStructName.lower()+'ReceivedFlag == 1){\n       '+frameStructName.lower()+'.'+frameStructName.capitalize()+'MissingFlag = 0;\n       '+frameStructName.lower()+'ReceivedFlag = 0;\n}')
            fw15.write('\nelse{\n    '+frameStructName.lower()+'MissingTimes++;\nif('+frameStructName.lower()+'MissingTimes == MISSINGTIMES)\n {\n   '+frameStructName.lower()+'.'+frameStructName.capitalize()+'MissingFlag = 1;\n    '+frameStructName.lower()+'MissingTimes = 0;\n'+'\n}\n}\nbreak;\n\n')
            fw14.write('UINT8 get_'+frameStructName.lower()+'_never_reve_flag(){\n')
            
            fw11.write('      return  '+frameStructName.lower()+'.'+frameStructName.capitalize()+'MissingFlag;\n}\n')
            fw14.write('      return  '+frameStructName.lower()+'.'+frameStructName.capitalize()+'NeverReceFlag;\n}\n')
            fw12.write(frameStructName.lower()+'.'+frameStructName.capitalize()+'MissingFlag = -1;\n')
            fw1.write("\nextern   "+frameStructName.lower()+"_struct    "+frameStructName.lower()+";\n")#生成供外部调用的结构体变量 
        for i in singleSigName: #打印宏定义供外界来调用
            if structName.count(frameStructName)==1:
                #fw.write("#define  "+i+"    "+frameStructName.lower()+".UnionItem.Item."+i.lower()+"\n")
                #fw9.write("UINT32   "+i+"    "+frameStructName.lower()+".UnionItem.Item."+i.lower()+"\n")
                
                ibackup = []
                ibackup.append(i)
                i=i.split('_')
                print i
                fw1.write("#define  GET_")
                fw.write("#define  GET_")
                
                for j in range(len(i)):#这个for循环主要是为了去除报文的中的ID
                    if j!=1 and j!=len(i)-1:
                        fw1.write(i[j]+'_')
                        fw.write(i[j]+'_')
                fw1.write(i[j]+'()    ') 
                fw.write(i[j]+'()    ') 
                fw1.write('get_') 
                fw.write('get_') 
                fw8.write('UINT32  get_')
              
                fw9.write('UINT32  get_')
                
                for j in range(len(i)):
                    if j!=1 and j!=len(i)-1:
                        fw1.write(i[j]+'_')
                        fw.write(i[j]+'_')
                        fw8.write(i[j]+'_')
                        fw9.write(i[j]+'_')
                fw1.write(i[j]+'()\n') 
                fw.write(i[j]+'()\n') 
                fw8.write(i[j]+'();\n') 
                fw9.write(i[j]+'(){\n') 
                for k in ibackup:
                    fw9.write("        return "+frameStructName.lower()+".UnionItem.Item."+k+";\n    }\n\n")
                
                  
        sumSigList = [] #全局变量要清零  为下一次的循环做准备
        singleSigName = []
        singleSigLen = []
print sumSigList             
print singleSigName  
print structName
print len(structName)
index = 1
for i in structName:
    print str(index) +' '+i +' 出现的次数：' +str(structName.count(i))
    index=index+1
       

