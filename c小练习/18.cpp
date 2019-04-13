//18.	题目：输出指定格式的日期。
#include <stdio.h>
#include <time.h>
int main ()
{
   time_t curtime;
 
   time(&curtime);		//C 库函数 time_t time(time_t *seconds) 返回自纪元 Epoch（1970-01-01 00:00:00 UTC）起经过的时间，
                        //	以秒为单位。如果 seconds 不为空，则返回值也存储在变量 seconds 中。
 
   printf("当前时间 = %s", ctime(&curtime));		//C 库函数 char *ctime(const time_t *timer) 返回一个表示当地时间的字符串，当地时间是基于参数 timer。
 
   return 0;
}
/*
#include <time.h>
main(){
  time_t timep;
  time (&timep);
  printf("%s", asctime(gmtime(&timep)));
}
*/

/*
#include <stdio.h>
#include <time.h>
int main()
{
    time_t rawtime;
    struct tm * timeinfo;
    char timE [80];
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    strftime ( timE,80,"%a %b %d %I:%M:%S  %Y  ",timeinfo);
    printf ("Local time is:");
    printf ("%s", timE);
    return 0;
}

*/
