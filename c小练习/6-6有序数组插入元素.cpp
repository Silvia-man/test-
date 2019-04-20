#include<stdio.h>
#define N 30						// N：数组长度 
#define J -32768					//为了不输出多余的0(不是所需的元素 ),且将数列中的元素0
									//输出,将空位设为一个不常用的数字，暂选为-32768 (J) 
									
void out(int * nums);				//数列输出
void chuShi(int * nums);			//初始化数组，将齐全部元素置 J	
void fuZhi(int * nums);				//输入有序数列 

int main(){
	int t,s,i,j;
	int nums[N];
	chuShi(nums);
	fuZhi(nums);
	
	printf("原有序数列为：\n");
	out(nums);
	
	printf("请输入需要插入的数字(输入其他字符停止输入):\n");
	while(scanf("%d", &s)){					//循环插入 
		for(i = 0;i < N; i++){
			if( s <= nums[i] ){
				for(j = i; nums[j-1] != J; j++){
					t = nums[j];
				    nums[j] = s;
				    s = t;
				}
				break;	
			}
		}	 	
	}
	
	printf("新的数列为：\n ");	
	out(nums);
	
	return 0;
}

void out(int * nums){					
	int i;
	for(i = 0; i < N; i++){
		if(nums[i] != J){
			printf("%d   ",nums[i]);
		}	
	}
	printf("\n");

}

void chuShi(int * nums){				
	int i;
	for(i = 0; i < N; i++){
		nums[i] = J;	 
	}
}

void fuZhi(int * nums){					
	int i = 0;
	char ch;
	printf("请输入原始有序数列(输入其他字符停止输入):\n");
	while(scanf("%d",&nums[i])){
		i++;
	}
	while((ch = getchar()) != '\n' && ch != EOF);    //清空缓存 
}
