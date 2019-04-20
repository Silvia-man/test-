//11.	题目：编写一个函数，输入是一个无符号整数，返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）。
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
		if (arr[i]=='1')
			count++;
	}
	printf("汉明重量：%d",count); 	
}

