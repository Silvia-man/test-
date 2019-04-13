#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct Node
{
	char name[20];
	char range[20];
	char profession[50];
	char works[200];
	struct Node *pNext;	
}NODE,*PNODE;

bool Login(void);
bool interface(void);
int menu(void);
int add(PNODE);
PNODE entering(PNODE);
int outing(PNODE);
int browsing(PNODE);
int find_list(PNODE); 
bool change_list(char* ,PNODE ); 
int delete_list(char* ,PNODE); 
int length_list(PNODE);
PNODE sort_list(PNODE pHead,int len);


int main(void)
{
	while(interface())
	{
	};
	system("CLS");
	PNODE pHead=(PNODE)malloc(sizeof(NODE));
	pHead->pNext=NULL;
//	PNODE pTail;
 //	pTail= entering(pHead);
 	char j='y';
	menu();
	int choice,len;
	scanf("%d",&choice);
	char change_name[20];
	char del_name[20];
 	char c3='e';
 	int jg;
 	int tof;
	while(j!='q')
	{
 	switch(choice) 
 	{
 		case(1):
		 {
		 	system("CLS");
			find_list(pHead);
			getchar();
			system("CLS"); 
			//printf("\t\t\t\t\t\t梅溪湖共同的记忆\n\n\n"); 
	
			break;
		 }
 		case(2):
		 {
		 	system("CLS");
			puts("请输入姓名：");
			getchar();
			gets(change_name); 
			//printf("%s",change_name);
			jg=change_list(change_name,pHead);
			if (jg)
				printf("修改成功！\n");
			else
				printf("没有这个人哦，修改失败！\n");
			getchar();
		 	system("CLS"); 
		 	//printf("\t\t\t\t\t\t梅溪湖共同的记忆\n\n\n");

			break;
		 }
 		case(3):
		 {
		 	system("CLS");
		 	while(c3!='q')
		 	{
		 		add(pHead);
		 		printf("\t\t\t\t\t\t\t\t\t\t继续添加[ q键+回车 返回主菜单]"); 
				c3=getchar();
				system("CLS");
				//printf("\t\t\t\t\t\t梅溪湖共同的记忆\n\n\n");
			 }
			 c3='e';
		 	len=length_list(pHead->pNext);
		 	sort_list(pHead,len);
			break;
		 }
		case(4):
		{
			getchar();
			system("CLS");
			puts("删除人姓名？");
			gets(del_name);
			delete_list(del_name,pHead);////////////

			getchar();
		 	system("CLS"); 
		 //	printf("\n\t\t\t\t\t\t梅溪湖共同的记忆\n\n\n"); 		
			break;//删除 
		} 
		case(5):
		{
			system("CLS");
			browsing(pHead);
			getchar();
			getchar();
			break;
		}  
	 }
	system("CLS");
	printf("\t\t\t\t\t\t\t\t\t\t\t提示：[q键+回车]退出程序\n");
 	menu();
	j=getchar();
 	if (j=='q')
	 {
	 	outing(pHead);	
		remove("amxh.txt");
		if((rename("output.txt","amxh.txt"))==0)
			printf("保存成功\n");
		else
			printf("保存失败\n");
	 }

 	else
 		choice=j-'0';	 
	}
		
	return 0;
}
int browsing(PNODE pHead)
{
	int i=1;
	PNODE p=pHead->pNext;
	while(p)
   {
       printf("*%d  姓名： %s\n\t\t音域： %s\n\t\t职业： %s\n\t\t作品： %s\n",i,p->name,p->range,p->profession,p->works);
       i++;
       p=p->pNext;        
   }      
   return 0;
}
bool interface(void)
{
	printf("\n\t\t\t\t\t\t梅溪湖 * 共同的记忆\n\n");
	printf("\t\t\t\t\t\t请登录\n");
	return Login();;	
}

int menu(void)
{
	int choice;
	printf("                                                  梅溪湖 * 共同的记忆\n\n") ;
	printf("               ***-----------*** ***-----------*** ***-----------*** ***-----------***  ***-----------***\n");
	printf("                    (1)查找           (2)修改           (3)增加           (4)删除           (5)浏览\n");
	printf("               ***-----------*** ***-----------*** ***-----------*** ***-----------***  ***-----------***\n");
	printf("请选择：");
	return 0; 
}
bool Login(void)
{
	char sz;
	char opp='e';
	bool pda=true;
	int ott=1;
	while(ott==1)
	{
		printf("登录  |  注册(按z键)\n");
		scanf("%c",&sz);
		printf("%c",sz);
		system("CLS");
		printf("\n\t\t\t\t\t\t梅溪湖 * 共同的记忆\n\n");
		printf("\t\t\t\t\t\t请登录\n"); 
		if (sz!='z')
		{
			char adname[20];
			char adpass[20];
			FILE * fp=fopen("ad.txt","r");
			if(fp==NULL)
			{
				printf("请注册一个新账号\n");
				getchar();
				system("CLS");
				return true;
			}
			int c,c1,cnt;
			c=ftell(fp);
			while(fgetc(fp)!='\n')
			{
				c1=ftell(fp);
			}
			
			fseek(fp,c,SEEK_SET);
			cnt=c1-c;
			char inname[20];
			fgets(inname,cnt+1,fp);	
			
			fseek(fp,2,SEEK_CUR);
			c=ftell(fp);
			char ch=fgetc(fp);
			while((ch!='\n')&&(ch!=EOF)) 
			{
				c1=ftell(fp);
				ch=fgetc(fp);
			}
				
			fseek(fp,c,SEEK_SET);
			cnt=c1-c;
			char inpass[20];
			fgets(inpass,cnt+1,fp);
		
			int Flag=0;
			while(1)
			{
				printf("用户名：");
				scanf("%s",adname);
				printf("密码："); 
				scanf("%s",adpass);
				while(1)
				{
					if ((strcmp(adname,inname)==0) && strcmp(inpass,adpass)==0)
						{
							fclose(fp);
							return false;
						}
					else
					{
						if (ch==EOF)
							{
								printf("用户名或密码错误\n请重新登录\n");
								getchar();
								system("CLS"); 
								return true; 
							 } 
						else
						{
							getchar();
							fseek(fp,2,SEEK_CUR);
							c=ftell(fp);
							ch=fgetc(fp);
							while((ch!='\n')&&(ch!=EOF)) 
							{
								c1=ftell(fp);
								ch=fgetc(fp);
							}
							
							fseek(fp,c,SEEK_SET);
							cnt=c1-c;
							inname[0]='\0';
							fgets(inname,cnt+1,fp);
							
							fseek(fp,2,SEEK_CUR);
							c=ftell(fp);
							ch=fgetc(fp);
							while((ch!='\n')&&(ch!=EOF)) 
							{
								c1=ftell(fp);
								ch=fgetc(fp);
							}
								
							fseek(fp,c,SEEK_SET);
							cnt=c1-c;
							inpass[0]='\0';
							fgets(inpass,cnt+1,fp);
						}
					}
				}
								
			}
			
		}
		else
		{
			char crename[20]="待输入";
			char crepass[20]="待输入";
			char surepass[20];
			FILE * fp2=fopen("ad.txt","a");
			if(fp2==NULL)
			{
				fp2=fopen("ad.txt","w");
				fclose(fp2);
				fp2=fopen("ad.txt","a");
			//	printf("文件打开失败！\n");
			//	exit(1);
			}
			printf("请输入");
			int i;
			while(1)
			{	 
				printf("(用户名和密码不可包括空格）\n"); 
				while(1)
				{	
					memset(crename,'\0',sizeof(crename));
					puts("用户名：");
					getchar();
					gets(crename);		
					for(i=0;i<sizeof(crename);i++)
					{
						if (crename[i]==' ')
						{
							printf("用户名包含非法字符,请重新输入(回主页面请按q键)\n");///////////////
							opp=getchar();
							if (opp=='q')
								return true;
							else
								break;
						}
					}
					if(i=sizeof(crename))
						break;
				}
				while(1)
				{	
					puts("密码：");
					gets(crepass);	
					for(i=0;i<sizeof(crepass);i++)
					{
						if (crepass[i]==' ')
						{
							printf("密码包含非法字符,请重新输入(回主页面请按q键)\n");
							opp=getchar();
							if (opp=='q')
								return true;
							else
							{
								memset(crepass,'\0',sizeof(crepass));
								break;
							}
						}
					}
					if (i==sizeof(crepass)) 
						break; 
				}

				printf("\n请再输入一次密码：");
				scanf("%s",surepass);
				if (strcmp(crepass,surepass)==0)
				{
				/*	fwrite(crename, sizeof(crename) , 1, fp2 );
					fwrite("\n", 1, 1, fp2 );
					fwrite(crepass, sizeof(crepass), 1, fp2 );//会出现乱码！    */		
					fprintf(fp2,"%s\n",crename);
					fprintf(fp2,"%s\n",crepass);
					getchar();
					fclose(fp2);
					printf("注册成功\n");
					getchar();
					system("CLS");
					return true;
				}
				else 
					printf("密码不一致，请重新输入\n");		 
			}
		}
	}	
}

 PNODE entering(PNODE pHead)
{
    PNODE p,q;
    p=q=pHead;
    FILE * r= fopen("amxh.txt","r");
    if(r==NULL)
	{
		r= fopen("amxh.txt","w");
		fclose(r);
		r= fopen("amxh.txt","r");
	}
    char ooo[200];
    while(fscanf(r,"%s", ooo)!=EOF)/////
    {  
       	q= (PNODE)malloc(sizeof(NODE));
       	if (q == NULL)
    	{
        	printf("读取失败！内存空间申请不足！\n");
        	return NULL;
    	}
       strcpy(q->name,ooo);
       fscanf(r,"%s",q->range);
       fscanf(r,"%s",q->profession);
       fscanf(r,"%s",q->works);
       p->pNext=q;
       p=q;
    }
    fclose(r);
    p->pNext=NULL;
    return p;
}

int find_list(PNODE pHead)
{
	char xx;
	char findname[20]; 
	puts("请输入姓名：");
	getchar();
	gets(findname);
	//strcpy(findname,'\0');
	PNODE i=pHead;
	int d=0;
	while(NULL!=i->pNext)
	{
		i=i->pNext;
		int w = strcmp(i->name ,findname);		
		if (w==0)
		{
			printf("姓名：%s\n",i->name);
			printf("音域：%s\n",i->range);
			printf("职业：%s\n",i->profession);
			printf("作品：%s\n",i->works);
			d++;
			break;
		}		
	}
	if(d==0)
		printf("没有他哦！\n");
	else
	{
		printf("请选择对他的操作\t(1)修改 (2)删除 (3)退出");
		xx=getchar();
		if (xx=='1')
			{
				system("CLS");
				if(change_list(findname,pHead))
					printf("修改成功\n");
				else
					printf("修改失败\n");
				getchar();
			}
		else if (xx=='2')
			{
				delete_list(findname, pHead);
				getchar();
			}
	}
	return 0;
 }   
 
int outing(PNODE pHead)
{
   PNODE p=pHead->pNext;
   
   FILE *w =fopen("output.txt","w");
   if(w==NULL)
   {
       printf("打开文件失败!");
       return 0; 
   }
   while(p)
   {
       fprintf(w,"%s\n%s\n%s\n%s\n",p->name,p->range,p->profession,p->works);
       p=p->pNext;        
   }     
   
   fprintf(w,"\n");
   fclose(w);
   return 0;
}
int add(PNODE pHead)
{
	PNODE i=pHead->pNext;
	PNODE pNew=(PNODE)malloc(sizeof(NODE));
	if (NULL==pNew)
	{
		printf("新建失败！\n");
 		exit(-1);
	}
	else
	{
		puts("姓名:");
		getchar();
		gets(pNew->name);
		puts("音域：");
		gets(pNew->range);
		puts("职业：");
		gets(pNew->profession);
		puts("作品：     (请不要以空格分割)"); 
		gets(pNew->works);
		pHead->pNext=pNew;
		pNew->pNext=i;
		printf("添加成功！\n");
	}
	return 0;	
 }
bool change_list(char* c_n,PNODE pHead) 
{
	PNODE i=pHead;
	int xg;
	char aw;
	bool pdla=true;
	while(NULL!=i->pNext)
	{
		i=i->pNext; 
		int b=strcmp(i->name,c_n);
		int len;
		if (b==0)
		{
			printf("姓名：%s\n音域：%s\n职业：%s\n作品：%s\n",i->name,i->range,i->profession,i->works); 
		//	puts("编辑谁？");
		//	getchar();
		//	gets(change_name); 
			while(pdla)
			{
				printf("修改名字(1)\t修改音域(2)\t修改职业(3)\t修改作品(4)\n");
				scanf("%d",&xg);
				switch(xg)
				{
					case(1):
					{
						printf("当前姓名：");
						puts(i->name);
						printf("修改后的姓名：");
						getchar();
						gets(i->name); 
						len=length_list(pHead->pNext);
			 			sort_list(pHead,len);
						break;
					}
					
					case(2):
					{
						printf("%s当前音域：",i->name);
						puts(i->range);
						printf("修改后的音域：");
						getchar();////
						gets(i->range); 
						break;
					}
					
					case(3):
					{
						printf("%s当前职业：",i->name);
						puts(i->profession);
						printf("修改后的职业：");
						getchar();
						gets(i->profession);
						break;
					}
					case(4):
					{
						printf("%s当前作品：",i->name);
						puts(i->works);
						printf("修改后的作品：");
						getchar();
						gets(i->works); 
						break;
					}	
				}
				printf("\t\t\t\t\t\t\t\t\t继续修改[ q键+回车 退出修改]\n");
				aw=getchar();
				if (aw=='q')
					pdla=false;
				
			}
		return true;			 
		}
	}
		return false;			
}

int  delete_list(char* d_n,PNODE pHead)
{
	PNODE i=pHead;
	PNODE t; 
	int n=0;
	int w,len;
	while(NULL!=i->pNext)
	{	
		w=strcmp(i->pNext->name,d_n);
		if (w==0)
		{
			t=i->pNext;
			i->pNext=i->pNext->pNext;
			free(t);
			printf("成功删除%s\n",d_n);
			len=length_list(pHead->pNext);
			sort_list(pHead,len);	
			return 0;					
		}
		else
			i=i->pNext;	
	}
	printf("删除%s失败\n",d_n);
	return 0;
}

 int length_list(PNODE pNext)
{
	PNODE p = pNext;
	int len = 0;
	
	while (NULL != p)
	{
		++len;
		p = p->pNext;
	} 	
	return len;
}

PNODE sort_list(PNODE pHead,int len)
{
	int i, j;
	char t[20],ne[20],pn[50],ws[200];
	PNODE p, q;
	for (i=0,p=pHead->pNext; i<len-1; ++i,p=p->pNext)
	{
		for (j=i+1,q=p->pNext; j<len; ++j,q=q->pNext)
		{
			int w = strcmp(p->name ,q->name);	
			if (w>0)
			{
				strcpy(t, p->name);
				strcpy(p->name, q->name);
				strcpy(q->name, t); 
				strcpy(ne, p->range);
				strcpy(p->range, q->range);
				strcpy(q->range, ne); 
				strcpy(pn, p->profession);
				strcpy(p->profession, q->profession);
				strcpy(q->profession, pn); 
				strcpy(ws, p->works);
				strcpy(p->works, q->works);
				strcpy(q->works, ws); 			
			}				
		}
	}
	return p;
}
