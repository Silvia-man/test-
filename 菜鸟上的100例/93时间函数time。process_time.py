# 93题目：时间函数举例3。


if __name__ == '__main__':
    import time
    start = time.process_time()
    for i in range(50):
        print (i)
    end = time.process_time()
    print ('different is %6.3f' % (end - start))
