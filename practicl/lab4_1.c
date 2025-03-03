#include<stdio.h>
int main(void)
{
	//variable declaration
	int angle1, angle2, angle3 , sum;
	
	//get inpputs from user such as angles
	printf("enter value for angle1 :");
	scanf("%f",&angle1);
	
	printf("enter value for angle2 :");
	scanf("%f",&angle2);
	
	printf("enter value for angle3 :");
	scanf("%f",&angle3);
	
	//calculation
	sum= angle1+angle2+angle3;
	
	//condition to check whether triangle or not
	if(sum=180 && angle1!=0 && angle2!=0 && angle3!=0)
	{
		printf("you have entered values to represent a triangle");
	}
	else
	{
		printf("values you have entered are invalid for display a triangle");
	}
}
