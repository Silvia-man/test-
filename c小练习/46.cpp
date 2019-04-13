//46.	题目：统计 1 到 100 之和。
#include<stdio.h>
int main()
{
	int i,sum=0;
	for (i=1;i<101;i++)
		sum+=i;
	printf("1 到 100 之和:%d",sum);
	return 0;
}
