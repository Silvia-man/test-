//72.	题目：字符串排序。
#include <string.h>
#include<stdio.h>
void shunxu(char *arr)
{
	int i,j;
	int len=strlen(arr);
	char temp;
	for(j=0;j<len;j++)
	{
		
		for(i=0;i<len-1;i++)
		{
			if (arr[i]>arr[i+1])
			{
				
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				
			}
		}
		
	}
}
	

int main()
{
	char arr[20];
	printf("please input a string：\n");
	scanf("%s",arr);

	shunxu(arr); 
	
	printf("排序后为：");
	puts(arr);
	 
	return 0;
} 
