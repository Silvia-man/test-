//2.	题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10%；利润高于10万元，低于20万元时，低于10万元的部分按10%提成
//高于10万元的部分，可提成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时高于40万元的部分，可提成3%；
//60万到100万之间时，高于60万元的部分，可提成1.5%，高于100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，求应发放奖金总数？
# include<stdio.h>
int main()
{
	float money=0,bonus=0;
	printf("当月利润为(万元)：");
	scanf("%f",&money); 
	if(money<=10)
	{
		bonus=money*0.1;
	}
	else
	{
		bonus=1;
		if(money<=20)
		{
			bonus+=(money-10)*0.075;
		 } 
		 else
		 {
		 	bonus+=0.5;
			if(money<=40)
			{
				bonus+=(money-20)*0.05;
			 } 
			 else
			 {
			 	bonus+=20*0.05;
			 	if(money<=60)
			 	{
			 		bonus+=(money-40)*0.03;
				 }
				 else
				 {
				 	bonus+=20*0.03;
				 	if(money<=100)
				 	{
				 		bonus+=(money-60)*0.03;
					 }
					 else
					 {
					 	bonus+=40*0.03+(money-100)*0.01;
					 }
				 }
			 }
		 }
	}
	printf("奖金一共为：%f万元",bonus);
	
	return 0;
}
