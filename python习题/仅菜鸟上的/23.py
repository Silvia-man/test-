# 23.打印菱形

k=' '
x='*'
for i in range(1,5):
    print((4-i)*k,x*(2*i-1))
for j in range(3,0,-1):
    print((4-j)*k,x*(2*j-1))
  
