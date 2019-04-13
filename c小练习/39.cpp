//39.	题目：求100之内的素数。
#include<stdio.h>
int main()
{
	printf("请输入一个大于1的正整数：");
	int x;
	scanf("%d",&x);
	for(int i=2;i<x;i++)
	{
		if(x%i==0)
		{
			printf("%d不是素数",x);
			break;
		}
		if(i==x-1)
			printf("%d是素数",x);
	}
 } 
