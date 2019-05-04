#include<stdio.h>
#include <stdlib.h>

typedef struct Node
{
	struct Node * pUp;
	int num;
	
 } NODE, *PNODE;
 
PNODE add_list(int);
void delet_list(PNODE pTail, int i);
int out(PNODE pNow, int num);

main(){
	int n, num = 5 ;
 	PNODE pTail = add_list(num);
 	
 	printf("删除倒数第几个节点：");
 	scanf("%d", &n);
 	delet_list(pTail, n);
 	out(pTail, num);
} 
 
PNODE add_list(int j){
	
	PNODE pBefore = (PNODE)malloc(sizeof(NODE));
	PNODE pNew;
	if (NULL == pBefore)
	{
		printf("新建失败！\n");
 		exit(-1);
	}
	
	pBefore->num = 1;
	pBefore->pUp = NULL;
	
	for(int i = 2; i <= j+1; i++){
		
		pNew = (PNODE)malloc(sizeof(NODE));
		if (NULL == pNew)
		{
			printf("新建失败！\n");
	 		exit(-1);
		}
		else
		{
			pNew->num = i;
			pNew->pUp = pBefore;
			pBefore = pNew;	
		}
	}
	pNew->num = NULL;
	
	return pNew;
}

void delet_list(PNODE pTail, int i){
	PNODE pBefore = pTail, pNow, pAfter;
	int j = 0;
	while(j < i-1){
		pBefore = pBefore->pUp;
		j++;
	}
	
	pNow = pBefore->pUp;
	pAfter = pNow->pUp;
	pBefore->pUp = pAfter;
	free(pNow);			
}

int out(PNODE pNow, int num){
	if(pNow == NULL){
		return 0;
	}
	int i = out(pNow->pUp, num);
	
	if(i != 0 && i!=num){
		printf("%d->", i);
	}else if(i != 0){
		printf("%d", i);
	}
	return pNow->num;	
}
