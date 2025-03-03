#include <stdio.h>
int main (void)
{
	//variable
	float no1,no2,no3,sum;
	
	//inputs
	printf("enter 1st angle: \n");
	scanf("%f",&no1);


	
	printf("enter last angle  : \n"); 
	scanf("%f",&no2);


	
	printf("enter last angle  : \n");
	scanf("%f",&no3);


	

	
	//calculations addition
	sum=no1+no2+no3;
	
	
	
	
	//condition to see whether triangle
	if(sum==180.0 && no3>0 && no2>0 && no1>0)
	{
		printf("you have input 3 values to display triangle");
	}
	else
	{
		printf("inputs that you entered are invalid to display triangle");
	}
	
	return 0;
}
