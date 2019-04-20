//42.	题目：求一个3*3矩阵主对角线元素之和。
#include<stdio.h>
int main()
{
	int sum=0;
	int juzh[3][3]={{1,2,1},{3,5,1},{9,0,1}};
	
	for(int i=0;i<3;i++)
	{
		sum+=juzh[i][i]; 
	}
	
	printf("主对角线元素之和为：%d",sum);
	
	return 0;
}
