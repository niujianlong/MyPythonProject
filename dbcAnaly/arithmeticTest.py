frameData = [{7: None, 6: None, 5: None, 4: None, 3: None, 2: None, 1: None, 0: None},
             {15: None, 14: None, 13: None, 12: None, 11: None, 10: None, 9: None, 8: None},  
             {23: None, 22: None, 21: None, 20: None, 19: None, 18: None, 17: None, 16: None},
             {31: None, 30: None, 29: None, 28: None, 27: None, 26: None, 25: None, 24: None},
             {39: None, 38: None, 37: None, 36: None, 35: None, 34: None, 33: None, 32: None},
             {47: None, 46: None, 45: None, 44: None, 43: None, 42: None, 41: None, 40: None},
             {55: None, 54: None, 53: None, 52: None, 51: None, 50: None, 49: None, 48: None},
             {63: None, 62: None, 61: None, 60: None, 59: None, 58: None, 57: None, 56: None},
             ]
datainfo = [[2, 1, 2, 0], [4, 2, 3, 0], [15, 24, 24, 3], [47, 16, 48, 6]]
#frameData[0][7]='a'
print frameData
for i in range(len(datainfo)):
    startByte = datainfo[i][3]
    startBit  = datainfo[i][2]
    bitLength = datainfo[i][1]
    endBit    = datainfo[i][0]
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
          
print frameData
        
        
   
   
   
   
   
   
   
    