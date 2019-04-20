//5.	题目：输入三个整数x,y,z，请把这三个数由小到大输出。
#include<stdio.h>
int main()
{
	int x,y,z,t;
	printf("请输入3个数:");
	scanf("%d%d%d",&x,&y,&z);
	
	if(x>y)
	{
		t=x;x=y;y=t;
	}
	if(y>z)
	{
		t=z;z=y;y=t;
	}
	if(x>y)
	{
		t=x;x=y;y=t;
	}
	
	printf("%d < %d < %d\n",x,y,z);
	return 0;
}
