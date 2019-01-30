# 69.题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位
'''
from collections import deque
#添加进列表
a=[]
n=int(input('请输入几个人：'))
for i in range(1,n+1):
    a.append(i)
b=deque(a)   # 使用双段队列deque,目的是使用里面的方法回转rotate
#创建删除符合3的数并且回转列表
while True:
    b.remove(b[2])   #删除为3的数也就是索引为2的数
    b.rotate(-2)     #将第三个数后面的数进行回转从头开始
    if len(b)==2:    
        print (b[1]) #最后剩两个数，那么最后的人一定是最后一个数
        break
'''

N=30
data = [i+1 for i in range(N)]
print(data)
i = 1 
while len(data) > 1:
    if i % 3 == 0:
        data.pop(0)
    else:
        data.insert(len(data),data.pop(0))
    i += 1
print(data)
