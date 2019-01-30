# 89.题目：给定两个字符串A和B，求字符串A至少经过多少步字符操作变成字符串B。







def normal_leven(str1, str2):
      len_str1 = len(str1) + 1
      len_str2 = len(str2) + 1
      #create matrix
      matrix = [0 for n in range(len_str1 * len_str2)]
      #init x axis
      for i in range(len_str1):
          matrix[i] = i
      #init y axis
      for j in range(0, len(matrix), len_str1):
          if j % len_str1 == 0:
              matrix[j] = j // len_str1
          
      for i in range(1, len_str1):
          for j in range(1, len_str2):
              if str1[i-1] == str2[j-1]:
                  cost = 0
              else:
                  cost = 1

              matrix[j*len_str1+i] = min(matrix[(j-1)*len_str1+i]+1,
                                          matrix[j*len_str1+(i-1)]+1,
                                          matrix[(j-1)*len_str1+(i-1)] + cost)


          
      return matrix[-1]
print(normal_leven('iuyoo','iuo')

'''
def edit(str1, str2):
    
    matrix = [[i+j for j in range(len(str2) + 1)] for i in range(len(str1) + 1)]
 
 
    for i in range(1,len(str1)+1):
        for j in range(1,len(str2)+1):
            if str1[i-1] == str2[j-1]:
                d = 0
            else:
                d = 1
            matrix[i][j] = min(matrix[i-1][j]+1,matrix[i][j-1]+1,matrix[i-1][j-1]+d)
 
 
    return matrix[len(str1)][len(str2)]
 
 
print (edit('ofailing','osailn'))
 
'''
