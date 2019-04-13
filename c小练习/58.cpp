//58.	题目：在一个长字符串中查找短字符串的位置 

#include<stdio.h>

int main()
{
	char str1[20],str2[20],*p1,*p2;
	int i=0;
	printf("please input two strings\n");
	scanf("%s%s",str1,str2);
	p1=str1;
	p2=str2;
	while(*p1!='\0')
	{
		if(*p1==*p2)
		{
			while(*p1==*p2)
			{
				p1++;
				p2++;	
			}
		}
		else
			p1++;
		if(*p2=='\0')
		{
			printf("子串在母串中的下标为：%d",i);
			return 0;
		} 
		p2=str2;
		i++;
	}
	printf("母串中无子串");
	getchar();
	
	return 0;
}


