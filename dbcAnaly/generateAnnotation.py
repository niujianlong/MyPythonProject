# coding=utf-8
fw = file("generate.s", "w+")
for line in open("1.txt"): 
    print line 
    if line[0] == ';':
        fw.write("//"+line)  # 打印函数原型的注释
    else:      
        fw.write(line)  # 打印函数原型的注释      
        
       
                              
        
