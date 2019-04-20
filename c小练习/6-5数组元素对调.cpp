#include<stdio.h>
#define N 9
void out(int *);
 
int main(){
	int nums[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i,t;								//i为循环变量，t为临时变量 
	
//	printf("\n 对调前的结果为： "); 		//因题目不需要，故注释掉 
//	out(nums);
 	
	for(i = 0; i<N/2; i++){					//元素对调 
		t = nums[i];
		nums[i] = nums[N-1-i];
		nums[N-1-i] = t;
	}
	
	printf("\n 对调后的结果为： "); 
	out(nums);
	
	return 0;
} 

void out(int * nums){					//数组元素输出 
	int i;
	
	for(i = 0; i < N; i++){
		printf("%3d",nums[i]);
	}
	printf("\n"); 
	
}
