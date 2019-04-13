//22.	题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加由键盘控制

#include<stdio.h>
#define n 2
int main()
{
	int a=0,s,k, all=0,ten;
	printf("几个数相加:");
	scanf("%d",&a);
	for(int i=1;i<a+1;i++)
	{
		ten=2;	
		s=0;
		for(k=0;k<i;k++)
		{
			s+=ten; 
			ten=ten*10;	
		 } 
		all+=s;	
	}
	printf("结果为：%d",all);
	return 0;
}
