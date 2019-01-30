#9.题目：暂停一秒输出。

#程序分析：使用 time 模块的 sleep() 函数

import time

l=[1,2,3,4]
for i in range(len(l)):
    print (l[i])
    time.sleep(1)  # 暂停一秒输出


myD = {1: 'a', 2: 'b'}
for key, value in dict.items(myD):
    print (key, value)
    time.sleep(1) # 暂停 1 秒
