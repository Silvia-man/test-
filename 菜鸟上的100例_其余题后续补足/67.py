# 67.题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。


a=[]
for i in range(5):
    s=int(input('p:'))
    a.append(s)
b=max(a)
for i in range(5):
    if a[i]==b:
        a[i],a[0]=a[0],a[i]
b=min(a)
for i in range(5):
    if a[i]==b:
        a[i],a[4]=a[4],a[i]
    
print(a)
