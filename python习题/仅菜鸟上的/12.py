# 12.100-200之间的素数
a=0
for n in range(100,200):
    for i in range(2,n):
        if n % i==0:
            break
        if n==i+1:
            print(n)
            a+=1
print("一共有",a,"个素数")
