//29.	题目：求1+2!+3!+...+20!的和。
#include<stdio.h>


long jiech(int num)
{
	int res=0,temp=1,i,j;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j>0;j--)
		{
			temp*=j;
		}
		res+=temp;
	}
	//	printf("%ld\n",res);
	return res;
}
int main()
{
	int num;
	printf("求谁的阶乘：");
	scanf("%d",&num);
	 
	printf("%d的阶乘为:%ld",num,jiech(num));
	 
	return 0;
 } 
