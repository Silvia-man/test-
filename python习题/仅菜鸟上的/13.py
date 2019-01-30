# 13.题目：打印出所有的"水仙花数"


N=3  #三位以内的水仙花数（可任意设）
for i in range(10**(N-1),10**N):
    a=0
    b=0
    c=i
    for x in range(N,0,-1):
        a=c//10**(x-1)
        c=c%10**(x-1)
        b=b+pow(a,N)
    if b==i:
        print(i)
