#include<stdio.h>
int main(void)
{
	int type, participants, total;
	
	printf("enter package type :");
	scanf("%d",&type);

    printf("enter no of parcipants :");
	scanf("%d",&participants);
	
	
	
	if(type==1)
	{
		total=2000*participants;
		
		printf("total amount is : %d",total);
	}
	
	else if(type==2)
	{
		total=5000*participants;
		
		printf("total amount is : %d",total);
	}
	
	else if(type==3)
	{
		total=7000*participants;
		
		printf("total amount is : %d",total);
	}
	
	else 
	{
		printf("invalid input");
	}
	
}
