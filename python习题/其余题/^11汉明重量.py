# 11.题目：编写一个函数，输入是一个无符号整数，返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）


n=int(input('p:'))
a=bin(n).replace('0b','')
count=0
for i in a:
    if i=='1':
        count+=1
print('数字位数为1的个数',count,'二进制：',a)
