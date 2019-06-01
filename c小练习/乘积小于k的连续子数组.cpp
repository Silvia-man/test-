#include<stdio.h>
#include <string.h>
#include<stdlib.h>
#define N 500 

int input(char numsStr[], int nums[]);

int son(int *nums, int length, int k);

int main(){
	int length, sum;
	int k; 
	int nums[N] = {0};
	char numsStr[N];
	
	printf("Input nums:\n");
	gets(numsStr);
		
	printf("k:\n");
	fflush(stdin);
	scanf("%d", &k);

	length = input(numsStr, nums);
	
	sum = son(nums, length, k);
	printf("%d", sum);
	
} 

int input(char *numsStr, int *nums){		    		//将字符串分割并转化成数字 

	int i;
	char *ptr,*retptr;

    for(ptr = numsStr, i=0; retptr = strtok(ptr, " ") ; i++) {
        nums[i] = atoi(retptr);
        ptr = NULL;
    }
   	return i;
}

int son(int *nums, int length, int k){
	int i, j, sum, sTemp;
	for(i = 0; i < length; i++){
		sTemp = 1;
		for(j = i; j < length; j++){
			sTemp = sTemp * nums[j];
			if(sTemp < k){
				sum++;
			}else{
				break;
			}	
		}
	}
	
	return sum;
} 
