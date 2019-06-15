#include<stdio.h>
#include<string.h>

int f1(int a, int b){	
	return a-b;
}

int f2(int a, int b){	
	return b-a;
}

int main(int argc, char *argv[]){
	int (*p)(int, int);
	int a, b;

	puts("input a and b: ");
	scanf("%d%d", &a, &b);

	if(!strcmp(argv[1], "-f")){
		p = f1;
	}else if(!strcmp(argv[1], "-s")){
		p = f2;
	}else{
		printf("error!\n");
		return 0;
	}
	
	printf("result : %d", p(a, b));
	return 0;
} 
