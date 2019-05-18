/*题目：
		给定一个排序链表，删除所有重复的元素，使得每个元素只出现一次。
		
		示例 1:
		输入: 1->1->2
		输出: 1->2
		
		示例 2:
		输入: 1->1->2->3->3
		输出: 1->2->3
*/ 
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	double date;
	struct Node *pNext;
}NODE, *PNODE;

PNODE createList(void);
void addNode(PNODE pHead); 
void delRepetition(PNODE pHead);
void outPut(PNODE pHead);

int main(){

	PNODE pHead = createList();
	addNode(pHead);
	
	delRepetition(pHead);
	printf("删除重复元素后的链表为：\n");
	fflush(stdin);
	outPut(pHead);
	return 0;
} 
PNODE createList(void){	 
 	PNODE pHead=(PNODE)malloc(sizeof(NODE));
 	
 	if (NULL==pHead)
 	{
 		printf("分配空间失败，程序异常终止！\n");
 		exit(-1);
	}
	else{
		pHead->pNext = NULL;
		return pHead;
	}
 }
 
void addNode(PNODE pHead){
	int sum = 0, i;
	PNODE pNew, pUp = pHead;
	printf("一共有多少元素：\n");
	scanf("%d", &sum);
	
	if(sum <= 0){
		exit(-1);
	} 
	
	printf("请输入元素:\n");
	for(i = 0; i < sum; i++){
		pNew = (PNODE)malloc(sizeof(NODE));
		scanf("%lf", &pNew->date);
		pUp->pNext = pNew;
		pUp = pNew;		
	}
	pUp->pNext = NULL; 
}

void delRepetition(PNODE pHead){
	PNODE pNow = pHead, pDel;
	while(pNow->pNext != NULL){
	
		while(pNow->date == pNow->pNext->date){
			pDel = pNow->pNext;
			pNow->pNext = pNow->pNext->pNext;
			free(pDel);
			if(!pNow->pNext){
				return;
			}
		} 
			
		pNow = pNow->pNext;
	}
	
}

void outPut(PNODE pHead){
	PNODE p = pHead;
	while(p->pNext){
		printf("%g ", p->pNext->date);
		p = p->pNext;
	}
}
