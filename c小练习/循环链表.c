#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct kid{
	int data;
	struct kid * pNext;
} *PNODE, NODE; 

PNODE add(PNODE p){
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	pNew->pNext = p->pNext;
	p->pNext = pNew;
	return pNew; 
}

PNODE putKids(int n){
	int i = 2;
	PNODE pFirst = (PNODE)malloc(sizeof(NODE));
	pFirst->pNext = pFirst;
	pFirst->data = 1;
	PNODE p = pFirst; 
	
	while(i <= n){
		p = add(p);
		p->data = i;
		i++;
	}
	
	return p;
}
int findWinner(PNODE pTail, int m){
	int i;
	PNODE p = pTail, pTemp;
	while( p->pNext != p ){
		for(i = 1; i < m; i++){
			p = p->pNext;
		}
		
		pTemp = p->pNext;
		p->pNext = pTemp->pNext;
		free(pTemp);	
	}
	
	return p->data;
}
int main(){
	int i, m, n, winner;
	PNODE pFirst, pTail;
	printf("n:  ");
	scanf("%d", &n);
	pTail = putKids(n);	
	
	printf("m:  ");
	scanf("%d", &m);
	winner = findWinner(pTail, m);	
	printf("winner:%d", winner);
/*	p = pFirst;
	for(i = 0; i < 20; i++){
		printf("%d  ",p->data);
		p = p->pNext;
	}
*/	
} 
