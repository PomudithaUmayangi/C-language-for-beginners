#include<stdio.h>
int main (void)
{
	//variable
	int package_type,p_no,total_1,total_2,total_3;
	
	//inputs
	printf("enter your favourite package type : \n");
	scanf("%d",&package_type);
	
	//condition
	
	//pack1 total
	if(package_type==1)
	{
		printf("please enter how many people wish to join :");
		scanf("%d",&p_no);
		
		//calculate pack 1 amount
		total_1=2000*p_no;
		
		printf("total amount is : \n %d",&total_1);
	}
		//pack2 amount
		else if(package_type==2)
	{
		printf("please enter how many people wish to join :");
		scanf("%d",&p_no);
		
		//calculate pack 2 amount
		total_2=5000*p_no;
		
		printf("total amount is : \n %d",total_2);
	}
		
		// pack3 amount
		else (package_type==3)
	{
		printf("please enter how many people wish to join :");
		scanf("%d",&p_no);
		
		//calculate pack 3 amount
		total_3=7000*p_no;
		
		printf("total amount is : \n %d",&total_3);
	}
	
	
	return 0;
	
}
