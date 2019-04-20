//47.	题目：求输入数字的平方，如果平方运算后小于 50 则退出。
#include<stdio.h>
int main()
{
	float n=0;
	float f=50;
	while(f>=50)
	{	
		printf("请输入一个数字：");
		scanf("%f",&n);
		f=n*n;
		printf("该数的平方为：%f \n\n",f);
	 } 
	 printf("该数的平方为：%f ,小于50\n\n",f);
 
	
	return 0;
}

