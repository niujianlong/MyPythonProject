#coding=utf-8
import string
global frameStructName
fw=file("struct.h","w+")
fw1=file("function_body.c","w+")
fw2=file("func_prototype.h","w+")
fw3=file("function_call.c","w+")
Can_FrameType = '''typedef struct\n
{
    unsigned int ID    :29; /*Frame ID*/
    unsigned int THLEN :1;  /*Transmit History Data Store Enable*/
    unsigned int RTR   :1;    /*Remote Transimission Request*/
    unsigned int IDE   :1;    /*    IDE Select
                                0: Standard ID
                                1: Extended ID*/
    
    unsigned int TS    :16; /*Timestamp Value 只读
                             The timestamp counter value can be read.
                             Counter Value: 0000
                             H to FFFFH */
    unsigned int LBL   :12;
    unsigned int DLC   :4;
    U8 DB[8];
} Can_FrameType;'''
fw.write(Can_FrameType+"\n")

for line in open("ABUS_ICM.txt"):  
    line_split = line.split(' ')
    print line_split
    if line_split[0]=='BO_':
        frameStructName = line_split[2][:-1] # [:-1]的目的是去掉末尾的：号
        fw.write("\ntypedef struct{\n")
        fw1.write("\n/*the "+frameStructName+" struct getSigValue and setSigValue fun*/\n")
        fw2.write("\n/*the function prototype of "+frameStructName+"*/\n") #打印函数原型的注释
        fw3.write("\n/*the function call of "+frameStructName+"*/\n") #打印函数原型的注释
    elif line_split[0]=='':
        tempEndBit = line_split[4].split("|") #先解析出来endBit
        endBit = tempEndBit[0]
        endBit = string.atoi(endBit)#因为endBit参与了算术运算 所以这里也必须转换成int
        #print endBit
        tempBitLength = tempEndBit[1].split("@") #再解析出来bitLength
        #print tempBitLength
        bitLength = tempBitLength[0]
        bitLength=string.atoi(bitLength) #将bitLength从str转成int便于下边的条件判断
        #print bitLength-8
        tempResolution = line_split[5].split("(")  #要解析的是这个类型的(0.01,0) 所以思路思路是先用左括号切割然切割后变成['', '0.01,0)'] 可见我们在对第二个元素用，切割得到
        #print tempResolution
        tempResolution = tempResolution[1].split(",")#可见我们在对第二个元素用，切割得到['0.01', '0)'] 可见第一个元素就是resolution 
        #print tempResolution
        resolution = tempResolution[0]
        tempResolution = tempResolution[1].split(")")#再对第二个元素用右括号切割 第一个元素就是offset
        offset = tempResolution[0]
        #print tempResolution
        #print resolution
        #print offset
        startBit = 0
        startByte = 0 
        if bitLength <= 8:
            startBit = endBit - bitLength+1 # 虽然dbc文件里没有给出startBit和startByte 但是通过下边的运算可以间接的得到
            startByte = startBit/8
            #print startByte
            fw.write("    U8 "+line_split[2]+";\n")
        elif bitLength == 16:
            startBit = endBit + 1
            startByte = startBit/8
            fw.write("    U16 "+line_split[2]+";\n")    
        elif bitLength > 16:
            startBit = endBit + (bitLength/8-2)*8 + 1
            startByte = startBit/8
            fw.write("    U32 "+line_split[2]+";\n")
#getSigValue(Can_FrameType canRawData, UInt8 startByte, UInt8 startBit, UInt8 endBit, UInt8 bitLength,float resolution, UInt8 offset);
        tempCan_FrameType = "canRawDataOf"+line_split[2]
        fw3.write("Can_FrameType "+tempCan_FrameType+"\n") #创建一个Can_FrameType类型的变量用于下边函数的传入的实参
        fw1.write("float"+" get"+line_split[2]+"value(Can_FrameType canRawData, UInt8 startByte, UInt8 startBit, UInt8 endBit, UInt8 bitLength,float resolution, UInt8 offset){\n")
        fw1.write("    getSigValue(canRawData"+str(startByte)+","+str(startBit)+","+str(endBit)+","+str(bitLength)+","+str(resolution)+","+str(offset)+");\n}"+"\n")
        fw3.write(frameStructName+"."+line_split[2]+"=get"+line_split[2]+"value("+tempCan_FrameType+","+str(startByte)+","+str(startBit)+","+str(endBit)+","+str(bitLength)+","+str(resolution)+","+str(offset)+");\n")
        #上边的这句代码要注意加上str的转换 否则会有类型不匹配相加的错误出现
        
        #打印函数原型
        fw2.write("float"+" get"+line_split[2]+"value(Can_FrameType canRawData, UInt8 startByte, UInt8 startBit, UInt8 endBit, UInt8 bitLength,float resolution, UInt8 offset);\n")

    else:
        fw.write("}"+frameStructName+";\n")  
        fw2.write("\n")      
fw.write("}"+frameStructName+";\n") # 因为line到末尾的时候会退出for循环 这时候还没有打印最后一个结构体的名字 所以要加上这句话               
        
       
                              
        
