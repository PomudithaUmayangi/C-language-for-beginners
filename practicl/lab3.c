#include<stdio.h>
int main (void)
{
	//variable declaration
	float totalPay, finalPay, discount;
	
	//get totalpay from user
	printf("enter your total payment :");
	scanf("%f", &totalPay);
	
	//calculation for discount 
	discount = totalPay * (15.0/100);
	
	//calculation final payment
	finalPay = totalPay - discount;
	
	//display final payment
	printf(" your final payment is : %.2f",finalPay);
	
	
	
	
	return 0;
}
