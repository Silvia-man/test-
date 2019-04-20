//65.	题目：写一个函数，求一个字符串的长度，在main函数中输入字符串，并输出其长度。

#include<stdio.h>
int main()
{
	char str[20]={'\0'};
	int i=0,sum=0;
	printf("请输入一串字符:");
	scanf("%s",str);
	
	while(str[i]!='\0')
	{
			sum++;
			i++;
	}
	printf("长度为：%d",sum);
	return 0;
 } 
