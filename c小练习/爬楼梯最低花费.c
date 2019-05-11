/*  1.数组的每个索引做为一个阶梯，第 i个阶梯对应着一个非负数的体力花费值 cost[i](索引从0开始)。

	每当你爬上一个阶梯你都要花费对应的体力花费值，然后你可以选择继续爬一个阶梯或者爬两个阶梯。
	
	您需要找到达到楼层顶部的最低花费。在开始时，你可以选择从索引为 0 或 1 的元素作为初始阶梯。
	
	示例 1:
	
	输入: cost = [10, 15, 20]
	输出: 15
	解释: 最低花费是从cost[1]开始，然后走两步即可到阶梯顶，一共花费15。
	 示例 2:
	
	输入: cost = [1, 100, 1, 1, 1, 100, 1, 1, 100, 1]
	输出: 6
	解释: 最低花费方式是从cost[0]开始，逐个经过那些1，跳过cost[3]，一共花费6。

*/ 

#include<stdio.h>
#include<malloc.h>
int minCostClimbingStairs(int* cost, int costSize) {
	int i;
    int a[costSize];//*a = (int *)malloc(sizeof(int) * costSize);
    a[0] = cost[0];
    a[1] = cost[1];
    for(i = 2; i < costSize+1; i++)
    {
        if(a[i-1] > a[i-2])
            a[i] = a[i-2] + cost[i];
        else
            a[i] = a[i-1] + cost[i];
    }
    return a[costSize-1] > a[costSize-2] ? a[costSize-2] : a[costSize-1]; 
}

int main(){
	int sum,i;
	printf("一共有多少阶楼梯：\n");
	scanf("%d", &sum);
	int cost[sum];
	printf("\n请按顺序输入体力花费值：\n");
	for(i = 0; i < sum; i++){
		scanf("%d", &cost[i]);
	} 
	
	int t = minCostClimbingStairs(cost, 10);
	printf("\n达到楼层顶部的最低花费:%d\n", t);
	return 0;
} 
