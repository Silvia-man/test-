#题目：利用递归方法求5!。


def gui(j):
    sum=0
    if j==0:
        sum=1
    else:
        sum=j*gui(j-1)
    return sum
print (gui(5))
