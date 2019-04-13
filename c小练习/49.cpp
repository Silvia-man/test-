//49.	题目：给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效
#include<stdio.h>

int main()
{
	int i=0;
	char str[7]={'(',')','{','}','[',']'};
	while (i<6)
	{
	//	printf("%c %c ",str[i],str[i+1]); 
		if(str[i]=='('&&str[++i]!=')')
		{
			printf("该字符串无效\n");
			
			return 0;
		 }
		 
		 if(str[i]=='{'&&str[++i]!='}')
		{
			printf("该字符串无效\n");
			return 0;
		 }
		 
		 if(str[i]=='['&&str[++i]!=']')
		{
			printf("该字符串无效\n");
			return 0;
		 }
		i=i+1; 
	}
	printf("该字符串有效\n");
	
	
	return 0;
}
