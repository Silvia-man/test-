//30.	题目：给定一个整数数组，判断是否存在重复元素。如果任何值在数组中出现至少两次，函数返回 true。如果数组中每个元素都不相同，则返回 false。
#include<stdio.h>
bool chachong(char *arr)
{
	int i,j,count;
	char p;
	for(i=0;i<9;i++)
	{
		count=0;
		p=arr[i];
		for(j=0;j<9;j++)
		{
			if(int(p)==int(arr[j]))
				count++;
			if(count==2)
				return false;
		}
	}
	
	return true;
}
int main()
{
	char arr[10]={'0','5','*','i','p','e','n','0','1'};
	printf("[");
	for(int i=0;i<9;i++)
	{
		printf("%c  ",arr[i]);
	 } 
	printf("]\t\t");
	if(chachong(arr))
		printf("该数组中每个元素都各不相同");
	else
		printf("该数组中有重复元素");
	return 0;
}
