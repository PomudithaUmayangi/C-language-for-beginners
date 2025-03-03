#include<stdio.h>
int main(void)
{
	//variables
	int type,no_people,total;
	
	//input type and no of people
	
	printf("enter the package type");
	scanf("%d",type);
	
	//switch method
	
	switch(type)
	{
		case'1':
			printf("how many participants with you : /n");
			scanf("%d",&no_people);
			
		//	calculation for full payment
		
			total=2000*no_people;
			
			printf("fullpayment")
			
			break;
			
		case'2':
			printf("how many participants with you : /n");
			scanf("%d",&no_people);
			
		//	calculation for full payment
		
			total=5000*no_people;
			break;
			
		case'3':
			printf("how many participants with you : /n");
			scanf("%d",&no_people);
					//	calculation for full payment
		
			total=7000*no_people;
			break;
	}
}
