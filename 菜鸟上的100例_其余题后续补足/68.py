# 68.题目：有n个整数，使其前面各数顺序向后移m个位置，最后m个数变成最前面的m个数
a=[1,2,3,4,5,6,7,8,9,0]
m=2
b=[]
ch=len(a)
b=a[ch-1:ch-m-1:-1]
b.extend(a[0:ch-m])
print(b)
    
