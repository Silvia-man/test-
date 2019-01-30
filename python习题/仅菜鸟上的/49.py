# 49.题目：使用lambda来创建匿名函数。


#学习原答的巧妙之处！
Max = lambda x,y :  (x > y) * x + (x < y) * y
Min = lambda x,y :  (x > y) * y + (x < y) * x
 
if __name__ == '__main__':
    a = 10
    b = 20
    print ('The largar one is %d' % Max(a,b))
    print ('The lower one is %d' % Min(a,b))
