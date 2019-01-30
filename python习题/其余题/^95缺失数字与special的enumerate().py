#给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 .. n 中没有出现在序列中的那个数


nums=[2,4,1,3,5,0,6]
nums.sort()

def find(nums):
    for key, value in enumerate(nums):
        if key != value:
            return key
    else:
        return key + 1


print(find(nums))


'''
另一种666的方法：
看看别人的数学方法就可以解决，数学真是一门好学科。 
思路：nums相当于一个等差数列减去某一个数。所以用该等差数列的和减去nums的和即为所求。等差数列求和还记得吗。。。。。前n项和公式为：Sn=n*a1+n(n-1)d/2或Sn=n(a1+an)/2。

        return(int(len(nums)*(len(nums)+1)/2)-sum(nums))

普通方法：
    def find(nums):
        i = 0
        nums.sort()
        for item in nums:
            if item - i != 0:
                return i
            else:
                i += 1
        return i
'''
