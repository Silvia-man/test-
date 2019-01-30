# 40.题目：将一个数组逆序输出。
a=[6,6,32,9,22,1]
print('原数组：\n',a,'\n逆置后：')
for i in range(len(a)-1,-1,-1):
    print(a[i],end='  ')
