# 30.	题目：给定一个整数数组，判断是否存在重复元素。如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。

a=[5,2,7,12,5,1]

def cf(a):
    b=set(a)
    return len(b)!=len(a)
print(cf(a))


