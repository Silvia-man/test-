#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 10
#define L 20

void sort(char * p[], int n){
	int i, j;
	char * t;
	for(i = 0; i < n-1; i++){
		for(j = 0; j < n-1-i; j++){

			if( strcmp(p[j] , p[j+1])>0 ){
				t = p[j];
				p[j] = p[j+1];
				p[j+1] = t;
			}

		}
	}
}


int main(){
	int i;
	char a[N][L];
	char *p[N];
	printf("请输入十个字符串：\n");
	for(i = 0; i < N; i++){
		gets(a[i]);
		p[i] = a[i];
	}
	sort(p, N);
	printf("排序后为：\n");
	for(i = 0; i< N; i++){
		puts(p[i]);
	}

}

























