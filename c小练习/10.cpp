//10.	题目：暂停一秒输出，并格式化当前时间。
#include <stdio.h>
#include <time.h>
#include <windows.h> 
int main ()
{
    time_t rawtime;
    struct tm * timeinfo;
    char buffer [128];

    time (&rawtime);
    //printf("%ld\n", rawtime);

    timeinfo = localtime (&rawtime);
   
    strftime (buffer,sizeof(buffer),"Now is %Y/%m/%d %H:%M:%S",timeinfo);
    printf("%s\n", buffer);
	Sleep(1000); 
	
    time (&rawtime);
    timeinfo = localtime (&rawtime);
    strftime (buffer,sizeof(buffer),"Now is %Y/%m/%d %H:%M:%S",timeinfo);
    printf("%s\n", buffer);

    return 0;
}
