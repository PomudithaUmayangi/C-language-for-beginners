#include<stdio.h>
int main (void)
{
	
	float r, phi=22.0/7, h, cylinderArea, circleArea, recArea;
	
	//get height and radius from user
	printf("enter radius of your cylinder's circle : ");
	scanf("%f",&r);
	
	printf("enter height of your cylinder : ");
	scanf("%f",&h);
	
	//calculation for area
	circleArea= 2* phi* r* r;
	recArea= 2*phi *r*h;
	cylinderArea=circleArea + recArea;
	
	//display calculations to user
	printf("circleArea:%f\t 	recArea:%f\t 	cylinderArea:%f ",	circleArea,recArea,cylinderArea);
	
	
	return 0;
	
}

