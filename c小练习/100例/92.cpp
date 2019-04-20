//92.	题目：如何组合1、2、5这三个数使其和为100.

#include<stdio.h>
int main()
{
int record=0;
int x,y,z;
for(x=1;x<=100;x++) //注意，x从1开始，不是0
	for(y=1;y<=50;y++) //注意，y从1开始，不是0
		for(z=1;z<=20;z++) //注意，z从1开始，不是0
			if(x+2*y+5*z==100) 
				record++;
printf("1、2、5构成100，总共有%d种方法\n",record);
return 0;
}
 
