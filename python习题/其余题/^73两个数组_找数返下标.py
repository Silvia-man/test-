# 73.题目:给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。你可以假设每种输入只会对应一个答案。但是，你不能重复利用这个数组中同样的元素。

nums=[1,3,4,5,6,7,8,9,10]
target=5
def pd(nums,target):
    for i in range(len(nums)):
        for j in range(len(nums)):
            if i!=j and target==nums[i]+nums[j]:
                #print(i,j)
                return i,j

            
print(pd(nums,target))
