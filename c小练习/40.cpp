//40.	题目：统计所有小于正整数 n 的质数的数量。  
#include<stdio.h>
int main()
{
	int n;
	int i,j,count=0,sum=0;
	printf("请输入一个非负整数：");
	scanf("%d",&n); 

	for(i=1;i<n;i++)
	{
		for (j=1;j<i+1;j++)
		{
			if((i%j)==0)
				count++;
			if(count>2)
			{
				sum++;
				break;
			}
		}
	}
	
	printf("所有小于非负整数 %d 的质数为：%d",n,sum);
	
	return 0;
}
