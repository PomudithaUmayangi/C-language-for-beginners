#include <stdio.h>
//Function declaration
float calPayment(int itemCode, int quantity); 
int main(void)

{
	float payment;
	int code, qty;
	
	printf("Enter item code : ");
	scanf("%d", &code);
	
	printf("Enter quantity : ");
	scanf("%d", &qty);
	
	//Function calling
	payment = calPayment(code, qty); 

	printf("Payment = %.2f\n", payment);
 
 	return 0;
}

//Function implementation
	float calPayment(int itemCode, int quantity) 
	{
		if(itemCode == 1)
	
		return 50.0 * quantity;
	
		else if(itemCode == 2)
	
		return 100.0 * quantity;

		else

		return 0;

	}
