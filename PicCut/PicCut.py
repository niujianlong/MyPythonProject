# -*- coding:utf-8 -*-

from PIL import Image
import json

'''
   @author:xunalove
   "程序里的地图的左下角是00，而我用脚本生成的切片的左上角是00，所以在程序里显示是错误的，下一步修改一下脚本
   只需要将行的初始值设置为最大的19就可以了

'''


def cut(mapID, mapName, srcPicW, srcPicH, divideBlockW, divideBlockH):
    # 打开图片图片1.jpg
    name1 = r'..\..\img\\' + mapName
    name2 = r'..\..\img\res\s' + str(mapID) + '_'
    im = Image.open(name1)

    n = 1

    # 左下角切割
    x1 = 0
    y1 = srcPicH - divideBlockH
    x2 = x1 + divideBlockW
    y2 = srcPicH
    hang = 0
    lie = 0
    '''
    im2 = im.crop((256, 0, 512, 256))
    name3 = name2 + str(n) + ".jpg"
    im2.save(name3)
    '''
    # 纵向
    while y2 >= 0:
        # 横向切
        lie = 0
        while x2 <= srcPicW:
            name3 = name2 + str(hang) + '_' + str(lie) + ".jpg"
            im2 = im.crop((x1, y1, x2, y2))
            print(x1, y1, x2, y2)
            im2.save(name3, 'JPEG', quality=100, subsampling=0)  # 这里要把质量调高一些，不然看起来没有PS切出来的清晰
            if x2 == srcPicW:
                n = n + 1  # 这里少了这句话，导致第20个图片会被第21个图片所覆盖
                break
            x1 = x1 + divideBlockW
            x2 = x2 + divideBlockW
            if x2 > 5000:
                x2 = 5000
            n = n + 1
            lie = lie + 1
        if y1 == 0:
            break
        y1 = y1 - divideBlockH
        y2 = y1 + divideBlockH
        x1 = 0  # 每一行处理完以后x1 要重新恢复成这个值
        x2 = x1 + divideBlockW  # 每一行处理完以后x2 要重新恢复成这个值
        if y1 < 0:
            y1 = 0
        hang = hang + 1

    print("图片切割成功，切割得到的子图片数为")
    return n - 1


resfile = open("res.json", 'w+')


def reverseNum(hang, lie):
    # new_dict = None
    with open(r"..\..\img\untitled.json", 'r') as srcfile:
        load_dict = json.load(srcfile)
        # json.dump(new_dict,srcfile)
        print(load_dict['layers'][1]['data'])
        temlist = load_dict['layers'][1]['data']
        hang = 1
        strtem = ''
        strReverse = ''
        strtest = ''
        for num in temlist[-100:]:
            strtest += str(num) + str(' ')
        print(strtest)
        for num in temlist:
            if hang % 100 == 0 and hang != 0:
                strtem += str(num) + str('\n')
            else:
                strtem += str(num) + str(' ')
            hang = hang + 1
        listres = []
        for num in range(100):
            if num == 0:
                listres = temlist[-100:]
            else:
                listres += temlist[-100 * (num + 1):-100 * num]
            pass
            # strReverse =
        print(listres)
        resfile.write(str(listres))


if __name__ == "__main__":
    res = cut(300, 'a.jpg', 5000, 5000, 256, 256)
    #    reverseNum(1,1)

    # 中
    # res = cut(id,120,120)

    # 小
    # res = cut(id,80,80)

    print(res)
