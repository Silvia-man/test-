# 60.题目：给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转
n=input('P:')
b=''

if n[0]=='+' or n[0]=='-':
    b=n[0]
    for i in range(len(n)-1,0,-1):
        b=b+n[i]
else:
    for i in range(len(n)-1,-1,-1):
        b=b+n[i]
      

print(b)
