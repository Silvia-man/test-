#include<stdio.h>
#define N 3
#define L 4
void JuCheng(int a[][L], int b[][N], int c[][N]){
	int *n1, *n2, sum;
	int (*w1)[L], (*w2)[N];
	int *q = *c;
	for(w1 = a; w1 < a+N; w1++){	
		for(n2 = *b; n2 < *b+N; n2++){
			for(sum = 0, n1 = *w1, w2 = n2; n1 < *w1+L; n1++, w2++){
					sum += *n1 *  **w2;
			}

			*q = sum;
			q++;

		}
	}
}

void inputMatrix(int *Mat, int row,int line){
	int i;	
	for(i = 0;i<row*line;i++){
		scanf("%d", (Mat + i)); 
	}	
}

int main(){
	int a[N][L];
	int b[L][N];
	int c[N][N] = {0};
	int i, j;
	printf("请输入第一个矩阵：\n");
	inputMatrix(a[0], N, L);
	printf("请输入第二个矩阵：\n");
	inputMatrix(b[0], L, N);
	 
	JuCheng(a, b, c); 
	printf("结果为：\n"); 
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%d   ", c[i][j]);
		}
		printf("\n"); 
	}
		
	return 0;
} 
