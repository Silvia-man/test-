#19.编程找出1000以内的所有完数。
     
for i in range(1,1001):
  
    sum=0
    arr=[]
    for j in range(1,int((i+3)/2)):
        if i%j==0:
            sum+=j  
            arr.append(j)
    if sum==i:
        print (i)
        print (arr)
