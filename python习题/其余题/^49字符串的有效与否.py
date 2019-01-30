# 49.给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效



s=input('p:')
i=0
while i <len(s):
    
    if (s[i]=='['and s[i+1]==']') or (s[i]=='('and s[i+1]==')') or(s[i]=='{'and s[i+1]=='}'):
        i+=2
    else:
        print('无效')
        break
else:
    print('有效')

    
'''
#网上的一种思路，学习。
public boolean isValid(String s) {
        
        if(s.length()<2||s.length()%2!=0){
            if(s.isEmpty()){
                return true;
            }
            else{
                return false;
            }
        }
        int count = 0;
        int length = s.length();
        //循环替换，最大次数为s.length()/2

        

        #**************************************
        while(count<length/2){
            s = s.replace("{}","").replace("[]","").replace("()","");
            count++;
        }
        #**************************************


        
        if(s.length()>0){
             return false;
        }
        else{
             return true;
        }

'''
