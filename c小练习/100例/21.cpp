//21.	题目：输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。 

#include<stdio.h>

int main ()
{
	int ec=0,bc=0,nc=0,oc=0;
	int c; 
	printf("请输入一行字符：");
	c=getchar();
	while( c!=10 )
	{
		if(c==32)
			{
				bc++;
			}
		else if(c>=65&&c<=122)
			{
				ec++;
			}
		else if(c>=48&&c<=57)
			{
				nc++;
			}
		else
			{
				oc++;
			}
		c=getchar();
	}
	
	printf("其中英文字母、空格、数字和其它字符的个数分别为：%d, %d, %d",ec,bc,nc);
 } 
