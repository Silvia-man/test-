# 75.给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1.

s='ssssddffghjksgl'
def zbc(s):
    le=len(s)
    for i in range(le):
        for j in range(le):
            if i!=j and s[i]==s[j]:
                break
            if j==le-1:
                return i
            
    return -1
print(zbc(s))
