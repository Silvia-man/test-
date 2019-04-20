//64.	题目：有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来第几号的那位

#include<stdio.h> 
main() 
{ 
	int a[100]; 
	int i,n,p=0,q; 
	printf("input number:"); 
	scanf("%d",&n); 
	q=n; //剩余的人数 
	for(i=0;i<n;i++) 
		a[i]=i+1; //标序号 
	
	
	for(i=0;;i++) 
	 { 
		 if(i==n) 
		 	i=0; //一轮后继续下一轮
		 if(a[i]!=0) 
		 	p++;
		 else 
		 	continue; 
		 if(p%3==0)
		   {
		  	  a[i]=0;
			  q--;
			} 
		 if(q==1) 
		 	break;
	 }
	  
	for(i=0;i<n;i++) 
		if(a[i]!=0) 
			printf("spare: %d\n\n",a[i]); 
			
			
}
