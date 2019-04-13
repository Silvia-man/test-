//20.	题目：写一个程序，输出从 1 到 n 数字的字符串表示。1. 如果 n 是3的倍数，输出“Fizz”；2. 如果 n 是5的倍数，输出“Buzz”；3.如果 n 同时是3和5的倍数，输出 “FizzBuzz”。
#include <stdio.h>
int main()
{
	int n=1,i=1;
	printf("请输入一个大于一的正整数：");
	scanf("%d",&n);
	//	printf("%d",i);
	for(i=1;i<n+1;i++)
	{
	
		if((i%3==0)&&(i%5==0))
			printf("FizzBuzz\n");
		else if(i%3==0)
			printf("Fizz\n");
		else if(i%5==0)
			printf("Buzz\n");
		else
			printf("%d\n",i);	
	}
	
	return 0;
}
