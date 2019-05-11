/*2.给定一个非负整数 num，反复将各个位上的数字相加，直到结果为一位数。
	
	示例:
	输入: 38
	输出: 2 
	解释: 各位相加的过程为：3 + 8 = 11, 1 + 1 = 2。 由于 2 是一位数，所以返回 2。
*/

#include<stdio.h>
#include<string.h>
#define N 20

int main(){
	int num, sum, i;
	int size = 0;
	int numArr[N] = {0};
	scanf("%d", &sum);
	
	while(sum >= 10){
		num = sum;
		for(i = 0; num%10 || num > 0; i++){
		
			numArr[i] = num%10;
			num = (num-num%10)/10;  
	
		}
		size = i;
		for(i = 0,sum = 0; i < size; i++){
			sum += numArr[i];
		}
//		清空数组的三种方式 ： 
//1.		for (i = 0; i < size; i++){
//	    		numArr[i] = 0 ;  
//			}

//2.		memset(numArr, 0, N * sizeof(int)); 
//3.      
		memset(numArr, 0, sizeof(numArr));   
	}
	printf("%d", sum);

	
	return 0;
}
