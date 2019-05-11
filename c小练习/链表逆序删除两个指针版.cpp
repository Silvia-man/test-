#include<stdio.h>
#include<malloc.h>

typedef struct Node                                        
{
	int data; 
	struct Node *pNext;
}Node,*PNODE;

PNODE CreateList();
void output(Node *pHead);
void del(Node *pHead);

int main(){
	
	Node *pHead = CreateList();
	del(pHead);
	printf("删除后的结果为：\n");
	output(pHead);
	
	return 0;
}

PNODE CreateList(){                                          
	PNODE pHead;
	Node *p,*t;
	int n = 0;
	pHead = (Node *)malloc(sizeof(Node));
	p=pHead;
	printf("请输入节点数据（输入-1结束）:\n");
	while(1){
		t = (Node *)malloc(sizeof(Node));
		scanf("%d",&n);
		if(n == -1)
			break;
		t->data = n;
		p->pNext = t;
		p = p->pNext;
	}
	p->pNext = NULL;
	return pHead;
}

void output(Node *pHead){                                     
	Node *p;
	p = pHead->pNext;
	if(pHead == NULL || p == NULL){
		return;	
	}
	for(;p != NULL;p = p->pNext){
		printf("%-3d",p->data);
	}
	printf("\n");
	
} 

void del(Node *pHead){
	int i=0,n;
	Node *pFirst=pHead, *pSecond=pHead, *pTemp;

	printf("删除的倒数第几个链表结点：\n");
	scanf("%d",&n);
	while(i<n){
		pSecond=pSecond->pNext;
		i++;
	}
	for(i=0; pSecond->pNext != NULL; i++){						
		pFirst = pFirst->pNext;
		pSecond = pSecond->pNext;
	}
	pTemp = pFirst->pNext;
	pFirst->pNext = pFirst->pNext->pNext;			
	free(pTemp);								//释放删除节点 

} 


