//93.	题目：给定两个数组，编写一个函数来计算它们的交集
#include<stdio.h>
#include <string.h>

void removeDuplicate(char str[])		//去重 
{
    int len = strlen(str);
    int p = 0;
    int i;
    int j;
    for (i=0; i<len; i++) 
	{
        if (str[i] != '\0') 
		{
        	str[p++] = str[i];			//！！！！！！重要，多理解，将数组补全空位！！ 
            for (j=i+1; j<len; j++) 
			{
                if (str[i] == str[j]) 
                    str[j] = '\0';
                
            }
        }
    }
    str[p] = '\0';
}
int main()
{
	char s1[10];
	char s2[10];
	char s3[10];
	char s4[10]={"0"};
	int i,j,k=0,p=0;
	printf("请输入第一个字符串：");
	scanf("%s",s1);
	printf("请输入第二个字符串："); 
	scanf("%s",s2);
	
	for(i=0;s1[i];i++)
	{
		for(j=0;s2[j];j++)
		{
			if(s1[i]==s2[j])
				{
					s3[k]=s1[i];
					k++;
				}
		}
	}
	

	removeDuplicate(s3);
	printf("交集为："); 
	puts(s3);
	return 0;
}
