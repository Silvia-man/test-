# 46.题目：求输入数字的平方，如果平方运算后小于 50 则退出。
print('如果平方运算后小于 50 则退出')
r=1
while r:
    s=int(input('p:'))
    if s**2<50:
        print(s**2)
        r=0
    else :
        r=1
        print(s**2)
