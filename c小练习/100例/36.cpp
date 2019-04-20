//36.	题目：请输入星期几的第一个字母来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母。
#include<stdio.h>
int main()
{
	char s,t,k;
	printf("（小写）p: ");
	scanf("%c",&s);
	if (s=='m')
	    printf("星期一");
	else if(s=='t')
	    {
	    	printf("np: ");
	    	getchar();
			scanf("%c",&t);
		    if(t=='u')
		        printf("星期二");
		    else if(t=='h')
		        printf("星期四");
		    else
		        printf("Wrong");
		}
	else if(s=='w')
	    printf("星期三");
	else if(s=='f')
	    printf("星期五");
	else if(s=='s')
	 	{
	 		printf("np: ");
	 		getchar();
			scanf("%c",&k);
		    if(k=='a')
	            printf("星期六");
	   		else if(k=='u')
	              printf("星期日");
	    	else
	              printf("Wrong");
		 }
	else
          printf("Wrong");

	
	return 0;
 } 



               
