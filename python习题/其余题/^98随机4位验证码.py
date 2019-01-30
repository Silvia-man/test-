# 98.利用内置函数chr(),ord()以及random模块写一个简单随机4位验证码

import random
tmp=''
for i in range(4):
    n=random.randrange(0,3) #randrange() 方法返回指定递增基数集合中的一个随机数，基数缺省值为1。

    #用三种不同的方法生成
    
    if n==0:
        nn = random.randrange(65, 91)#大写字母
        tmp+=chr(nn)
    elif n==1:
        hh=int(random.uniform(97,123))#小写字母
        tmp+=chr(hh)
        
    else:
        k=random.randint(0,10)# 数字
        tmp+=str(k)
        
print(tmp)
