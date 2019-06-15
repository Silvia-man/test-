#include<stdio.h>
void JuCheng(int a[][4], int b[][3], int c[][3]){
	int *n1, *n2, i, sum;
	int (*w1)[4];
	int *q = c[0];
	for(w1 = a; w1 < a+3; w1++){	
		for(i = 0; i < 3; i++){
			for(sum = 0, n1 = *w1, n2 = *b+i; n1 < *w1+4; n1++, n2 = n2+3){
					sum += *n1 *  *n2;
			}
			*q = sum;
			q++;
		}
	}
}

void inputMatrix(int *Mat, int row,int line){
	int i,j;	
	for(i = 0;i<row*line;i++){
		scanf("%d", (Mat + i)); 
	}	
}

int main(){
	int a[3][4];
	int b[4][3];
	int c[3][3] = {0};
	printf("请输入第一个矩阵：\n");
	inputMatrix(a[0], 3, 4);
	printf("请输入第二个矩阵：\n");
	inputMatrix(b[0], 4, 3);
	 
	JuCheng(a, b, c); 
	printf("结果为：\n"); 
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("%d   ", c[i][j]);
		}
		printf("\n"); 
	}
		
	return 0;
} 
