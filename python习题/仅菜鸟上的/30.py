#题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同

s=input("Please input a string(len=5):")
for i in range (5):
    if i!=2:
        if s[i]==s[4-i]:
            pass
        else:
            print("不是")
            break
else:
    print("是")
