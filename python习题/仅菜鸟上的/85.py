# 85.题目：输入一个奇数，然后判断最少几个 9 除于该数的结果为整数。

n=int(input('p奇数:'))
s=''
while 1:
    s+='9'
    nb=int(s)
    if nb%n==0:
        print('需要',len(s),'个 9     ',s)
        break
