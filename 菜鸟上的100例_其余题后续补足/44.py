# 44. 题目：Python 两个矩阵相加



X = [[12,7,3],
    [4 ,5,6],
    [7 ,8,9]]
 
Y = [[5,8,1],
    [6,7,3],
    [4,5,9]]
 
result = [[0,0,0],
         [0,0,0],
         [0,0,0]]
#result=[],或,result=[[],[],[]]   Wrong(空数组不能直接指定位置)

for i in range(3):#(len(X))
   
   for j in range(3):#(len(X[0]))
       result[i][j] = X[i][j] + Y[i][j]
 
for r in result:
   print(r)
