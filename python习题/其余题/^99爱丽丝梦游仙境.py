
import string

text=open('D:\\ceshide\\alice.txt','r')
    #将所有的英文字母转换成小写
words = [raw_word.strip(string.punctuation).lower() for raw_word in text.read().split()]

text.close()
'''
学习with ...as...的用法：

with open('D:\\ceshide\\alice.txt','r') as text:
   
    words = [raw_word.strip(string.punctuation).lower() for raw_word in text.read().split()]

'''
    
#转换成集合形式
words_index = set(words)


#使用字典统计词频
counts_dict = {index:words.count(index) for index in words_index}



#按照词频从高到低排序
for word in sorted(counts_dict,key=lambda x: counts_dict[x],reverse=True):
    if counts_dict[word] > 10:
        print('{} -- {} times'.format(word,counts_dict[word]))

