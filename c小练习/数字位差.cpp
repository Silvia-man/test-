/*
返回所有长度为 N 且满足其每两个连续位上的数字之间的差的绝对值为 K 的非负整数。

请注意，除了数字 0 本身之外，答案中的每个数字都不能有前导零。例如，01 因为有一个前导零，所以是无效的；但 0 是有效的。
你可以按任何顺序返回答案。

示例 1：
输入：N = 3, K = 7
输出：[181,292,707,818,929]
解释：注意，070 不是一个有效的数字，因为它有前导零。
示例 2：
输入：N = 2, K = 1
输出：[10,12,21,23,32,34,43,45,54,56,65,67,76,78,87,89,98]
 
提示：
1 <= N <= 9
0 <= K <= 9
*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void NumSplit(int num, int *numArr){
	int i = 0;
	do{
		numArr[i] =  num - (num/10)*10;
		num = num/10;
		i++;
	}while(num);	
}
bool PanDuan(int num, int length, int k){
	if(length == 1){
		return true;
	} 
	int i = 0;
	int numArr[length];

	NumSplit(num, numArr);
	
	do{
		if(k != abs(numArr[i] - numArr[i+1])){
			return false;
		}
		i++;
	}while(i < length-1);

	return true;
} 
void NumWeiCha(int n, int k){
	int i;
	for(i = (int)pow(10, n-1); i < (int)pow(10, n); i++){
		if(PanDuan(i, n, k)){
			printf("%d  ", i);
		}
	}
}
int main(){
	int n, k;
	printf("N = ");
	scanf("%d", &n);
	printf("K = ");
	scanf("%d", &k);
	
	NumWeiCha(n, k);
	
	return 0;
} 
