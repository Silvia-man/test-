# 91.题目：python字典按照value进行排序



d = {'a':1,'b':4,'c':2}

a=sorted(d.items(),key = lambda x:x[1],reverse = True)

                        #key -- 主要是用来进行比较的元素，只有一个参数，具体的函数的参数就是取自于可迭代对象中，指定可迭代对象中的一个元素来进行排序。
                        #reverse -- 排序规则，reverse = True 降序 ， reverse = False 升序（默认）。
                        #items() 函数以列表返回可遍历的(键, 值) 元组数组。


c=sorted(d.items(),key = lambda x:x[1])

#   c=sorted(d.items(),key=x[1]) WRONG!!!
print(a,'\n',c)

