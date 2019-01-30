#   9.题目：假设你正在爬楼梯。需要 n 阶你才能到达楼顶。每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？

#import time
def fac(n):
    if n==1:
        f=1
    elif n==2:
        f=2
    else:
        f=fac(n-1)+fac(n-2);
    return f
#c=time.time()
n=int(input("p:"))
f=fac(n)
#c=time.time()-c
print("all:",f)

