#include<stdio.h>
int main (void)
{
	float data[12]={0};
	int i,month;
	float max,min;
	
	for(i = 0; i < 12; i++)
	{
		printf("Enter the month %d average rainfall : ",i+1);
		scanf("%f", &data[i]);
	}
	
	max=data[0];
	for(i = 0; i < 12; i++) 
	{
		if(data[i] > max)
		{
			max=data[i];
			month=i+1;
			
		}

	}
	printf("the maximum rainfall is in month %d and it is %.2f \n",month,max);
	
	min=data[0];
	for(i = 0; i < 12; i++) 
	{
		if(data[i] < min)
		{
			min=data[i];
			month=i+1;
			
		}

	}
	printf("the minimum rainfall is in month %d and it is %.2f ",month,min);
	
	return 0;
}
