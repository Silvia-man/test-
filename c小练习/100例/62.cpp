//62.	题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。

#include<stdio.h>
int main()
{
	int a[6]={'\0'},i;
	printf("请输入5个数字:\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]); 
	}
	int re=0,m;
	for(i=1;i<5;i++)
	{
		if(a[i]>a[re])
			re=i; 
			
	}
	m=a[0];
	a[0]=a[re];
	a[re]=m;
	
	re=0;
	for(i=1;i<5;i++)
	{
		if(a[i]<a[re])
			re=i;	
	}
	m=a[4];
	a[4]=a[re];
	a[re]=m;
	printf("%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
	
	return 0;
 } 
