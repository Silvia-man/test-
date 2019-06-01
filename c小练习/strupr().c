#include<stdio.h>
void StrUpr1(char * p){
	while(*p){
		if((*p >= 'a') && (*p <= 'z')){
			*p = *p-32;
		}
		p++;
	}
}

void StrUpr2(char * p){
	int i = 0;
	while(p[i]){
		if(p[i] >= 97 && p[i] <= 122){
			p[i] = p[i]-32;
		}
		i++;
	}
}
int main(){
	char p[10], q[10];
	gets(p);
	gets(q);
	StrUpr1(p);
	StrUpr2(q);
	puts(p);
	puts(q);

}