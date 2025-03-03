#include<stdio.h>
float circleArea(float r);
float circlePeri(float r);
float recArea(float w,float l);

int main(void)
{
	float radius, height,area,CircleArea,CirclePeri,RecArea,totalArea;
	
	printf("pls enter radius:");
	scanf("%f",&radius);
	
	printf("pls enter height:");
	scanf("%f",&height);
	
	CircleArea = circleArea(radius);
	CirclePeri = circlePeri(radius);
	RecArea = recArea(CirclePeri,height);
	
	totalArea = RecArea + 2*CircleArea;
	
	printf("you have entered as radius : %f and as height : %f . \n the total area of the cylinder is : %f",radius,height,totalArea);
	
	
	return 0;
}

float circleArea(float r)
{
	return 22.0/7 *r *r ;
}

float circlePeri(float r)
{
	return 2*22.0/7*r;
}

float recArea(float w,float l)
{
	return w*l;
}
