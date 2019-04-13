//6.	题目：斐波那契数列。
#include<stdio.h>
#define s 10

void fb(int *a)
{
	for(int k=2;k<s;k++)
		a[k]=a[k-1]+a[k-2];		
}

int main ()
{
	int a[s]={0,1};
	fb(a);
    int *p;
    for( p = a; p < (a+10) ;p++ )
    {
       printf("%d ",*p);
    }
}



