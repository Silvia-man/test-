//83.	题目：从键盘输入一些字符，逐个把它们写到磁盘文件上，直到输入一个 # 为止。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c;
	FILE *w =fopen("output.txt","w");
    if(w==NULL)
    {
       printf("打开文件失败!");
       return 0; 
    }
	c=getchar(); 
	while(c!='#')
	{
		fprintf(w,"%c",c);
		c=getchar();		
	}
	fclose(w);

	return 0;
}
