//34.	题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include<string.h>
#include<stdio.h>
int main()
{
	char a[7];
	int i=0,len,Flag=1;
	
	while(Flag==1)
	{
		printf("请输入一个 [ 五位数以内 ] 的正整数："); 
		scanf("%s",a);
		len=strlen(a);
		if(len<6)
			Flag=0;

	}
	printf("它是%d位数\n",len);
	printf("逆序为：");
	for(i=len-1;i>-1;i--)
		printf("%c",a[i]);

	return 0;
 } 
