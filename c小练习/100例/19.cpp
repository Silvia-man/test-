//19.	题目：颠倒给定的 32 位无符号整数的二进制位。
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count=0;
	int length=0;
	char arr[32],w;

	printf("请输入一个无符号整数：");
	scanf("%d",&w);
	
	itoa(w,arr,2);
	

	for(int i=0;arr[i];i++)
	{
			count++;
	}
	printf("颠倒的二进制位为：") ;
	for(int j=count-1;j>-1;j--)
	{
		printf("%c",arr[j]);
	}

}
