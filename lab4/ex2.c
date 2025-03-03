#include<stdio.h>
int main(void)
{
	//variables
	char shape;
	float r_width,r_length,t_base,t_height,c_radius,area;
	
	
	//inputs
	printf("enter first letter of your favourite shape : \n");
	scanf("%c",shape);
	
	/*calculation for areas

	rectangle=width*length;
	
	triangle=base*height/2;
	
	circle=22.0/7*radius*radius;*/
	
	//condition
	//for rectangle
	
	if(shape=='R'||shape=='r')
	{
		printf("enter width  : \n");
		scanf("%f",&r_width);
		
		printf("enter length  : \n");
		scanf("%f",&r_length);
		
		//calculate area for rectangle
		
		area=r_width*r_length;
		
		printf("area of you entered rectangle is : %f",area);
		
		
	}
	//for triangle
	
	else if(shape=='t'||shape=='T')
	{
		printf("enter base value  : \n");
		scanf("%f",&t_base);
		
		printf("enter height value  : \n");
		scanf("%f",&t_height);
		
		//calculate area for triangle
		
		area=t_base*t_height/2;
		
		printf("area of you entered trangle is : %f",area);
		
		
	}
	//for circle
	else if(shape=='c'||shape=='C')
	{
		printf("enter radius  : \n");
		scanf("%f",&c_radius);
		

		
		//calculate area for circle
		area=22.0/7*c_radius*c_radius;
	
		
		printf("area of you entered rectangle is : %f",area);
		
		
	}
	else
	{
		printf("invalid");
	}
	
	return 0;
}
