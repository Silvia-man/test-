# 88.题目：两个字符串的最长公共子串，这个子串要求在原字符串中是连续的。

str1='dfghjyuionbvccvbn'
str2='hiionbbn'
jiao=[]
str3=''
for i in range(len(str1)):
    for j in range(len(str2)):
        if str1[i]==str2[j]:
            while str1[i]==str2[j]:
                str3+=str1[i]
                if i==len(str1)-1 or j==len(str2)-1:
                    break
                i+=1
                j+=1      
            jiao.append(str3)
            str3=''
#print(jiao)         
jiao = list(set(jiao))
#print(jiao)
for i in range(len(jiao)-1):
    if len(jiao[i])<len(jiao[i+1]):
        s=jiao[i+1]
print('最长公共子串:',s)
