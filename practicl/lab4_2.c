#include<stdio.h>
int main(void)
{
	char shape;
	float width,height,base,radius,area, length , phi=22.0/7;
	
	printf("enter the first character of the shape (R,T,C) : ");
	scanf("%c",&shape);
	
	if(shape=='R')
	{
			
	printf("enter width of the shape  : ");
	scanf("%f",&width);
	
		
	printf("enter length the shape : ");
	scanf("%f",&length);
	
	area=width * length;
	
	printf("area of the shape: %.2f",area);
	}
	
	else if(shape=='T')
	{
			
	printf("enter height of the shape  : ");
	scanf("%f",&height);
	
		
	printf("enter length the base : ");
	scanf("%f",&base);
	
	area=base * height / 2;
	
	printf("area of the shape: %.2f",area);
	
	}
	else if(shape=='C')
	{
	
	printf("enter radius of the shape  : ");
	scanf("%f",&radius);
	
	area= phi* radius * radius;
	
	printf("area of the shape: %.2f",area);
	}
	
	else
	{
		
		printf("invalid");
	}
	
	
	return 0;
}
