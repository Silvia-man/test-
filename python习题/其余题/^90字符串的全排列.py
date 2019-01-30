# 90.求一个字符串的所有排列

#没有做出来，学习网上的


#字符串任意两个位置字符交换
def str_replace(str, x, y):
    if x == y:
        return str
    x_val = str[x:x+1]
    y_val = str[y:y+1]
    if x < y:
        str = str[0:x] + y_val + str[x+1:y] + x_val + str[y+1:len(str)]
    else:
        str = str[0:y] + x_val + str[y+1:x] + y_val + str[x+1:len(str)]
    return str
#递归求结果
def str_sort(str,x):
    if x == len(str):               #当x为字符串的最大长度时返回当前字符交换的结果
        global str_list
        str_list.append(str)
        return
    for i in range(x,len(str)):
        str = str_replace(str,i,x)  #递归遍历第i个字符，
        str_sort(str,x+1)
        str = str_replace(str,x,i)  #恢复字符串原来的顺序，便于下次遍历
s = 'abc'
global str_list
str_list = []
str_sort(s,0)
print(len(str_list), str_list)
'''
def perm(s):
    if len(s) <= 1:
        return [s]
    sl = []
    for i in range(len(s)):
        for j in perm(s[0:i] + s[i + 1:]):
            print(j)
            sl.append(s[i] + j)
            print(sl)
    return sl


def main(s):
    
    perm_nums = perm(s)
    
    no_repeat_nums = list(set(perm_nums))
    print('perm_nums', len(perm_nums), perm_nums)
    print('no_repeat_nums', len(no_repeat_nums), no_repeat_nums)
    pass


if __name__ == '__main__':
    s='fgl'
    main(s)
'''
