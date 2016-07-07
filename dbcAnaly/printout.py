#coding=utf-8
'''
#这段代码是想求取下边文件的2个16进制数字之间的差值
00000084:CAN >Can Service!
000000A2:CAN >Can Service!
000000C0:CAN >Can Service!
000000D9:CAN >Can Service!
000000F7:CAN >Can Service!
00000115:CAN >Can Service!
00000133:CAN >Can Service!
0000014C:CAN >Can Service!
0000016A:CAN >Can Service!
00000188:CAN >Can Service!
000001A1:CAN >Can Service!
000001BF:CAN >Can Service!
000001DD:CAN >Can Service!
000001F6:CAN >Can Service!
00000214:CAN >Can Service!
00000232:CAN >Can Service!
00000250:CAN >Can Service!
'''
#import string
global num1;
num1="0"
list_a = []  #就可以了 空列表
dict_a = {} #定义一个空字典
tuple_a = () #定义一个空元组
for line in open("1.txt"):
    out=line.split(":")
    temp=num1
    print out
    num1=out[0]
    if out[1]=="Print Task >Hello World!\n":
        out[0]="0x"+out[0]
        list_a.append(int(out[0],16))
    num1="0x"+num1
    #string.atoi(num1, 16)
    print int(num1,16)
    print int(temp,16)
    #print int(num1,16)-int(temp,16)
    print int(num1,16)-int(temp,16)
print list_a
temp = 0
for i in list_a:
    print i-temp
    temp = i
    
    
    


    