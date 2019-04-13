//41.	题目：对10个数进行排序。
#include<stdio.h>
void shunxu(int *arr)
{
	int i,j,temp;
	for(j=0;j<10;j++)
	{
		for(i=0;i<9;i++)
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
	int arr[10];
	printf("请输入十个数字：\n");
	for (int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	shunxu(arr); 
	printf("从小到大依次为：");
	for (int i=0;i<10;i++)
	{
		printf("%d	",arr[i]);
	}
	return 0;
}
