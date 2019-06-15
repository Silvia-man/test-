#include<stdio.h>
#include<malloc.h>
#include<math.h>
#define N 3
typedef struct Students{
	int serialNumber;
	char name[10];
	char gender[4];
	double scores[3];
	struct Students *pNext;
}NODE, *PNODE;



PNODE CreatList(){
	PNODE p = (PNODE)malloc(sizeof(NODE));
	p->pNext = NULL;
	return p;
}
void AddMessage(PNODE pHead){

	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	pNew->pNext = pHead->pNext;
	pHead->pNext = pNew;

	printf("学号：");
	scanf("%d", &pNew->serialNumber);fflush(stdin);
	printf("姓名：");
	gets(pNew->name);
	printf("性别：");
	gets(pNew->gender);
	printf("语文成绩：");
	scanf("%lf", &pNew->scores[0]); 
	printf("数学成绩: ");
	scanf("%lf", &pNew->scores[1]);
	printf("英语成绩：");
	scanf("%lf", &pNew->scores[2]);

}
void OutList(PNODE pHead){

	PNODE p = pHead->pNext;
	while(p!=NULL){
		printf("----------------------------------------------------------------------------\n");
		printf("    学号: %-4d  ", p->serialNumber);
		printf("    姓名：%-4s  ", p->name);
		printf("    性别：%-4s\n", p->gender);
		printf("    语文：%-5g ", p->scores[0]);
		printf("    数学: %-5g ", p->scores[1]);
		printf("    英语：%-5g ", p->scores[2]);

		p = p->pNext;
	}		
}

void StuDataArr(PNODE pHead, PNODE stuData[]){
	PNODE p = pHead->pNext;
	int i = 0;
	while(p!=NULL){
		stuData[i] = p;
		p = p->pNext;
		i++;
	}	
}

void OneSubjetSort(PNODE *a, int numA, int choice){
	int i, j;
	PNODE temp;

	for(i = 0; i < numA-1; i++){
		for(j = 0; j < numA-1; j++){
			if( a[j]->scores[choice] < a[j+1]->scores[choice]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	
}

void OutArrMessage(PNODE * a, int sum){

	int i;
	for(i = 0; i < sum; i++){
		printf("----------------------------------------------------------------------------\n");
		printf("    学号: %-4d  ", a[i]->serialNumber);
		printf("    姓名：%-4s  ", a[i]->name);
		printf("    性别：%-4s\n", a[i]->gender);
		printf("    语文：%-5g ", a[i]->scores[0]);
		printf("    数学: %-5g ", a[i]->scores[1]);
		printf("    英语：%-5g ", a[i]->scores[2]);
	}		
}
int main(){
	int i, choice, sum;
	char selContinue = 'y';
	PNODE pHead = CreatList();
	i = 0;
	printf("请输入信息：\n");
	while(selContinue == 'y' || selContinue == 'Y'){
		AddMessage(pHead);
		printf("Continue?");
		fflush(stdin);
		selContinue = getchar();
		i++;
	}
	sum = i;
//	OutList(pHead);

	PNODE *stuData = (PNODE *)malloc(sum * sizeof(PNODE));
	StuDataArr(pHead, stuData);
//	OutArrMessage(stuData, sum);

	printf("\n请选择一门课进行排序：\n1.语文  2.数学  3.英语\n");
	scanf("%d", &choice);

	OneSubjetSort(stuData, sum, choice-1);
	OutArrMessage(stuData, sum);

	return 0;	
}
