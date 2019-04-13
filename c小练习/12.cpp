//12.	题目：给定一个整数，写一个函数来判断它是否是 3 的幂次方。
#include<stdio.h>
char a[]="是";
char b[]="不是";

char *pdmi(int s)
{
	float t=s;
	while(t>2)
	{
		t/=3;
		//printf("%d",t);
	}
	if (t>=0&&s!=1&&t==1)
		return a;
	else 
		return b;

}
int main()
{
	int mi;
	printf("请输入一个整数：");
	scanf("%d",&mi);
	char *l=pdmi(mi); 
	printf("该数%s3的幂次方",l); 
	
	return 0; 
 } 
