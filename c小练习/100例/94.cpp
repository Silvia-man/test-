//94.	算2的20次方。不允许用**和pow() 
#include<stdio.h>
int main() 
{
	int t=1;
	for(int i=0;i<20;i++)
		t=t*2;
	printf("2的20 次方：%d",t);
	return 0;
}
