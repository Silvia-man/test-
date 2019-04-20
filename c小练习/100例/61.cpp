//61.	题目：输入3个数a,b,c，按大小顺序输出。
#include<stdio.h>
int main()
{
	float a,b,c,t;
	printf("请输入3个数:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	if(b>c)
	{
		t=c;c=b;b=t;
	}
	if(a>b)
	{
		t=a;a=b;b=t;
	}
	
	printf("%.2f < %.2f < %.2f\n",a,b,c);
	return 0;
}
