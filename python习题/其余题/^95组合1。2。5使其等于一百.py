# 95.如何组合1、2、5这三个数使其和为100

count=0
for x in range(1,100):
    for y in range(1,50):
        for z in range(1,20):
            if x+y*2+z*5==100:
                count+=1
                print('%d+%d*2+%d*5'%(x,y,z))
print('一共有%d种'%count)
