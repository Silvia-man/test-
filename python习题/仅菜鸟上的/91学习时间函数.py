# 91.题目：时间函数举例1。

# 学习它们之间的区别
if __name__ == '__main__':
    import time
    print( time.ctime(time.time()))
    print (time.asctime(time.localtime(time.time())))
    print (time.asctime(time.gmtime(time.time())))#格林尼治时间（世界时），和中国差8个小时
