# 29.题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。


s=input("Please input a string:")
s=list(s)
a=len(s)
#s.reverse()

print(a,'\n',s[::-1])
