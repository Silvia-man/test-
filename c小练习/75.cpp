//75.	题目：给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。
#include<stdio.h> 
#include <string.h>

int main()
{
	char str[20],*p1,*p2;
	int i;

	printf("please input a string: ");
	scanf("%s",str);
	
	int len = strlen(str);
	int j=0;
	p1=p2=str; 
	while(*p1!='\0')
	{
		i=0;
		
		while(*p2!='\0')
		{
			
			if(p2!=p1)
			{
			//	printf("%c,%c	",*p1,*p2);
				if(*p2==*p1)
					break; 
				else if(i==len-1)
				{
					printf("第一个不重复字符的索引: %d\n它为：%c",j,*p1);
					return 0; 
				}	
			}
			p2++; 
			i++;
		}
		p1++;
		p2=str;
		j++;
		
	}
	
	printf("各字符均有重复\n");
	getchar();
	
	return 0;
}
 
