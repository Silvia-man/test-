#include<stdio.h>
#include<math.h>
#define N 3
struct Students{
	int serialNumber;
	char name[10];
	char gender[6];
	double chinese;
	double math;
	double english;
	double physics;
};
void addmessage(struct Students a[N], int i){
	printf("学号：");
	scanf("%d", &a[i].serialNumber); fflush(stdin);
	printf("姓名：");
	gets(a[i].name);
	printf("性别：");
	gets(a[i].gender);
	printf("语文成绩：");
	scanf("%lf", &a[i].chinese); 
	printf("数学成绩: ");
	scanf("%lf", &a[i].math);
	printf("英语成绩：");
	scanf("%lf", &a[i].english);
	printf("物理成绩：");
	scanf("%lf", &a[i].physics);

}

void outMessage(struct Students a[N], int numA){
	int i;
	for(i = 0;i < numA; i++){
		printf("----------------------------------------------------------------------------\n");
		printf("    学号: %-4d  ", a[i].serialNumber);
		printf("    姓名：%-4s  ", a[i].name);
		printf("    性别：%-4s\n", a[i].gender);

		printf("    语文：%-5g ", a[i].chinese);
		printf("    数学: %-5g ", a[i].math);
		printf("    英语：%-5g ", a[i].english);
		printf("    物理：%-5g\n", a[i].physics);
	}
		
}

void avePerson(struct Students a[N],int numA){
	int i;
	for(i = 0; i < numA; i++){
		printf("    %d： %g\n",a[i].serialNumber, (a[i].chinese + a[i].math + a[i].english + a[i].physics) / 4.0);
	}
		
}
void aveClass(struct Students a[N],int numA){
	int i;
	double sumC = 0, sumM = 0, sumE = 0, sumP = 0;
	double nsC = 0, nsM = 0, nsE = 0, nsP = 0;
	for(i = 0; i < numA; i++){
		sumC += a[i].chinese;
		sumM += a[i].math;
		sumE += a[i].english;
		sumP += a[i].physics;
	}

	printf("\n全班的平均成绩为:\n");
	printf("语文: %-5g 数学: %-5g 英语: %-5g 物理: %-5g", sumC/numA ,sumM/numA, sumE/numA, sumP/numA);
	

	for(i = 0; i < numA; i++){
		nsC += pow(a[i].chinese - sumC/numA, 2);
	}
	
	for(i = 0; i < numA; i++){
		nsM += pow(a[i].math - sumM/numA, 2);
	}
	for(i = 0; i < numA; i++){
		nsE += pow(a[i].english - sumE/numA, 2);
	}
	for(i = 0; i < numA; i++){
		nsP += pow(a[i].physics - sumP/numA, 2);
	}
	printf("\n\n各科方差为:\n");
	printf("语文: %-5g 数学: %-5g 英语: %-5g 物理: %-5g\n", nsC/numA, nsM/numA, nsE/numA, nsP/numA);


}
void OneSubjetSort(struct Students a[N], int numA, int choice){
	int i, j;
	struct Students temp;

	switch(choice){
	case 1:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].chinese < a[j+1].chinese){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}

	case 2:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].math < a[j+1].math){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}

	case 3:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].english < a[j+1].english){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}


	case 4:{
		for(i = 0; i < numA-1; i++){
			for(j= 0; j < numA-1; j++){
				if(a[j].physics < a[j+1].physics){
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
			}
		}
		break;
	}
	default:{
		   printf("输入错误！");
	 }
		
	}
}
int main(){
	int numA = N;
	int i, choice;
	struct Students classA[N];
	for(i = 0; i < numA; i++){
		printf("\n请输入第%d个学生的信息：\n", i+1);
		addmessage(classA, i);
	}
//	outMessage(classA, numA);
	printf("\n各学生的平均成绩为：\n[学号]：\n");
	avePerson(classA, numA);
	printf("\n请选择一门课进行排序：\n1.语文  2.数学  3.英语  4.物理\n");
	scanf("%d",&choice);
	OneSubjetSort(classA, numA, choice);
	outMessage(classA, numA);
	aveClass(classA, numA);
	return 0;
}
