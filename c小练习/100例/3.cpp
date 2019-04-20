//3.	题目：一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

#include<stdio.h>
#include<math.h>
int main ()
{
    
    float n,m;
    for ( int i=1;i<100000;i++)
    {
        m=sqrt(100+i);
        n=sqrt(268+i);
        if(int(m)!=m||int(n)!=n)
        	continue;
        if( m*m==i+100 && n*n==i+268)
      	  printf("%ld ",i);
    }
    
    return 0;
 } 

