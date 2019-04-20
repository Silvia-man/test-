//79.	题目：读取7个数（1—50）的整数值，每读取一个值，程序打印出该值个数的＊。
#include <stdlib.h>

#include <stdio.h>

#include <time.h> 

int main( )

{
	int i,j,m;

	srand((unsigned)time( NULL ) );  
	
	for(i = 0; i < 7;i++)
	{
		j= rand()%50+1;
		printf("%d:",j);
		for (m=0;m<j;m++)
			printf("*");
		printf("\n");
	}
	
	

}
