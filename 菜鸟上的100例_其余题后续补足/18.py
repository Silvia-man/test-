# 18.题目：求s=a+aa+aaa+aaaa+aa...a的值，
a=input('a=')
j=int(input('几个数相加:'))
t=0
s=a
for i in range(j):
    t+=int(s)
    s+=a
    
print(t)
