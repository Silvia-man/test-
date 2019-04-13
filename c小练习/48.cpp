//48.	题目：两个变量值互换。

#include<stdio.h>
int main()
{
	int x=0,y=1;
	int t;
	printf("before:x=%d,y=%d\n",x,y);
	t=x;
	x=y;
	y=t;
	printf("after: x=%d,y=%d\n",x,y);
	return 0;
}

