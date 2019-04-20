//44.	题目：将一个数组逆序输出。

#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4};
	printf("原序为："); 
	for(int j=0;j<4;j++)
	{
		printf("%d ",a[j]);
	}
	printf("\n逆序为："); 
	for(int i=3;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
