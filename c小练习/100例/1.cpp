//1.	题目：有四个数字：1、2、3、4，能组成多少个互不相同且无重复数字的三位数？各是多少？
#include<stdio.h>

int main(void)
{
	int i,j,k,count=0;
	for(i=1; i<5; i++)
	{
		for(j=1; j<5; j++)
		{
			if (i==j)
				continue;
			for (k=1; k<5 && j!=k; k++)
			{
				if (j==k || i==k)
					continue;
				
				printf("%d%d%d	",i,j,k);
				count++;
				if(count%3==0)
				printf("\n");
			}
		}
	}
	printf("共有%d种结果\n",count);
	
	return 0;
 } 
 
