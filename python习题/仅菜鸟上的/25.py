#题目：求1+2!+3!+...+20!的和。
s=0
for i in range(1,21):
    t=1
    a=1
    j=1
    for j in range(1,i+1):
        a*=j
    s=s+a

print(s)
