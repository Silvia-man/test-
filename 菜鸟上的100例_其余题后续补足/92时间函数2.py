# 92.题目：时间函数举例2。




if __name__ == '__main__':
    import time
    start = time.time()
    for i in range(30):
        print (i)
    end = time.time()
 
    print (start,'      ',end - start)
