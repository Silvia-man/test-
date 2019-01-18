# 83.题目：求0—7所能组成的奇数个数。

m=int(input('几位的数:'))
if m==1:
    s=4
elif m==2:
    s=7*4
else:
    s=7*4
    for i in range (m-2):
        s*=8
print(s)
