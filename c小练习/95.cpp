//95.	题目：给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 .. n 中没有出现在序列中的那个数
#include<stdio.h>

int main()
{
	int num[10]={0,1,2,3,7,10};
	int j=0; 
	printf("没有出现在序列中的那个数为:"); 
	for(int i=0;i<11;i++)
	{
		if (num[j]!=i)
			printf("%d ",i);
		else
			j++;
	}
	return 0;
}
