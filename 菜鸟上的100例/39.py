# 39.题目：有一个已经排好序的数组。现输入一个数，要求按原来的规律将它插入数组中。


a=[1,4,6,9,13,16,19,28,40,100]
print('原始列表',a)
a.append(int(input('p:')))
print(a)
for i in range(len(a)-1,0,-1):
    if a[i]<a[i-1]:
        a[i],a[i-1]=a[i-1],a[i]
print(a)
