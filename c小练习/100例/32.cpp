//32.	题目：利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<stdio.h>
#define I 5
void fanxu(char * string,int p )
{
	if(p==(I-1))
	{	
		printf("%c",string[p]);	
		return;
	}
	
	fanxu(string,p+1); 
	printf("%c",string[p]);	
	
}
int main()
{
	int i=I;
	char string[i+1]={'\0'};
	printf("请输入连续%d个字符：",i);
	for(int f=0;f<i;f++)
	{
		scanf("%c",&string[f]);
	}
	fanxu(string,0);
	 	
	return 0;
}
