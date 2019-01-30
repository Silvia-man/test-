# 80.给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
nums=[0,3,0,6,7,2,0,11]
def yl(nums):
    arr=[]
    brr=[]
    for i in nums:
        if i==0:
            brr.append(0)
        else:
            arr.append(i)
    arr.extend(brr)
    return arr
print(yl(nums))
