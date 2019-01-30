# 98.题目：从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个磁盘文件"test"中保存。

#学习这种写完读的方式
if __name__ == '__main__':
    fp = open('test.txt','w')
    string = input('p:\n')
    string = string.upper()#upper() 方法将字符串中的小写字母转为大写字母。
    fp.write(string)
    fp = open('test.txt','r')
    print (fp.read())
