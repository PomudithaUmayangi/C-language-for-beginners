#include <stdio.h>
int main(void)
{
	//variables
	float r, h, areaRec, areaCircle, area;
	
	//inputs
	printf("Enter radius of the Cylinder : ");
	scanf("%f", &r);
	
	printf("Enter height of the Cylinder : ");
	scanf("%f", &h);
	
	//calculations
	
	/*A=2*22/7*r*h+2*22/7*r*r
	areaRec = 2 * 22 / 7 * r * h
	areaCircle =2* 22 / 7 * r * r*/
	
	areaRec = 2 * 22 / 7 * r * h;
	areaCircle = 2*22 / 7 * r * r;
	
	area = areaRec + areaCircle;
	
	//output
	printf("Surface area of cylinder : %.2f\n", area);
	return 0;
}
