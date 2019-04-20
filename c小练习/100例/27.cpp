//27.	题目：两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。
//已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。
#include<stdio.h>
int main ()
{
	int i,j,b;
	char B[4]={'x','y','z'};
	for(i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			for (b=0;b<3;b++)
			{
				 
				 if((B[i]!=B[j]) && (B[j]!=B[b]) && (B[b]!=B[i]) && (B[i]!='x') && (B[b]!='x') && (B[b]!='z'))
               	 	printf ("a和%c比赛，b和%c比赛，c和%c比赛" ,B[i],B[j],B[b]);
			}
		}
	}
            

	return 0;
}

