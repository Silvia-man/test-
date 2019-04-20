//45.	题目：两个 3 行 3 列的矩阵，实现其对应位置的数据相加，并返回一个新矩阵：
#include<stdio.h>
int main ()
{
	int i,j;
	int x[4][4]={{1,2,3},{3,2,1},{2,3,1}};
	int y[4][4]={{21,55,31},{30,12,1},{2,37,11}};
	int sum[4][4]={{0,0,0},{0,0,0},{0,0,0}};
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			sum[i][j] = x[i][j] + y[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		printf("[");
		for (j=0;j<3;j++)
		{
			printf("%d",sum[i][j] );
			if(j!=2)
				printf(",");
		}
		printf("]\n");
	}
	return 0;
 } 
