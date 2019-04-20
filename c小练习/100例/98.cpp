//98.	题目：利用内置函数chr(),ord()以及random模块写一个简单随机4位验证码 

#include <stdlib.h>
#include <stdio.h>
#include <time.h> 

int main( )

{
	int i,j,m;

	srand((unsigned)time( NULL ) );  
	
	for(i = 0; i < 4;i++)
	{
		do
		{
			j= rand()%122+1;
		//	printf("%d",j);
		}while( j<48||(j>57&&j<97) );
			
		printf("%c",j);
	//	system("pause");

	}
	

}

