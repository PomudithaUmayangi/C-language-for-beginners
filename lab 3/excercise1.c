#include <stdio.h>
int main(void)
{    
	//variables
	double totalPay, finalPay, discount;
	//inputs
	printf("Enter total payment of a customer : ");
	scanf("%lf", &totalPay);
	//calculations
	discount = totalPay * (15.0 / 100);
	finalPay = totalPay - discount;
	//output
	printf("Discount : %.2f\n" , discount);
	printf("Final Payment : %.2f\n" , finalPay);
	
	return 0;
}
