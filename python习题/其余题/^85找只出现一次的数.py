# 85. 给定一个非空整数数组，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素.

arr=[3,'r',5,6,3,6,'r']
le=len(arr)
for i in range(le):
    for j in range (le):
        if i!=j and arr[i]==arr[j]:
            break
        if j==le-1:
            print(arr[i])
