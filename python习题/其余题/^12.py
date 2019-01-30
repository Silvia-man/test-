# 12.题目：给定一个整数，写一个函数来判断它是否是 3 的幂次方。

n=int(input('p:'))
while n>=3:
    if n%3==0:
        n/=3
    else:
        print('不是')
        break
if n==1:
    print('是')
