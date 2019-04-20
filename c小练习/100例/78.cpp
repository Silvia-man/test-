//78.	题目：连接字符串。

#include <stdio.h>
#include <string.h>
int main ()
{
    char str[80];
    strcpy (str,"these ");//strcpy()
    strcat (str,"strings ");//strcat()
    strcat (str,"are ");
    strcat (str,"concatenated.");
    puts (str);
    return 0;
}
