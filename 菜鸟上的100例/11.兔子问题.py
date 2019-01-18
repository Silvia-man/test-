# 11.兔子问题（斐波那契）


f1 = 1
f2 = 1
for i in range(1,22):
    print ('%12ld \n%12ld' % (f1,f2))

    f1 = f1 + f2
    f2 = f1 + f2
