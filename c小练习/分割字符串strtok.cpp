#include <stdio.h>
#include <string.h>
 
int main(int argc, char *argv[])
{
	
    char numsStr[50] ;//= "this   is a    test";
   	numsStr[0] = '1';
   	numsStr[1] = '2';
   	numsStr[2] = '3';
   	numsStr[3] = ' ';
   	numsStr[4] = '4';
   	numsStr[5] = '5';
   	numsStr[6] = '6';
   	
    char *ptr,*retptr;
    int i=0;
 
    ptr = numsStr;
 
    while ((retptr=strtok(ptr, " ")) != NULL) {
        printf("substr[%d]:%s\n", i++, retptr);
        ptr = NULL;
    }
 
    return 0;
}
