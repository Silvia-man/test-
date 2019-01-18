

# 82.题目：八进制转换为十进制




x=input("p:")
print(int(x,8))#int(a,b),用来将某进制数转化为十进制，a是字符串，b说明前面的是几进制的数

    
'''学习原答！
 
if __name__ == '__main__':
    n = 0
    p = input('input a octal number:\n')
    for i in range(len(p)):
        n = n * 8 + ord(p[i]) - ord('0')
    print (n)
'''
