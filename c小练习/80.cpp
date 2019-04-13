//80.	题目：给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
#include<stdio.h> 

void remove(int num[])	
{
    int p = 0;
    int i;
    int count=0;
    int len=10;
    for (i=0; i<len; i++) 
	{
        if (num[i] != '\0') 
		{
        	num[p++] = num[i];
		//	printf("%d	",num[i]);		
            if (num[i] == 0) 
            	num[i] = '\0';
        } 
        else
        	count++;
    }
   	//printf("%d",count);
   
    for(i=0;i<count;i++)
    {
		num[p] = 0;
		p++;
	}
	num[p] = '\0';
}

int main()
{
	int num[20]={1,0,9,0,4,9,0,23,0,8};
	int i;

	remove(num);	
	
	for(i=0;i<10;i++)
	{
		printf("%d ",num[i]);
	}

	return 0;
 } 



