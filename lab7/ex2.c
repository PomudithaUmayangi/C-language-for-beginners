#include<stdio.h>
#include<math.h>
#include<assert.h>
float final(int mark1);
float ca(int mark2);
int main(void)
{



	int finalMark, CAMark;
	float finalmark, CAmark,overallMark,finalmarks,CAmarks;
	
	printf("enter the final marks:");
	scanf("%d",&finalMark);
	
	printf("enter the CA marks:");
	scanf("%d",&CAMark);
	
	finalmarks=final(finalMark);
	CAmarks=ca(CAMark);
	
	overallMark=finalmarks+CAmarks;
	
	printf("the overall mark is : %.2f",overallMark);
	
	
	
	return 0;
}
float final(int mark1)
{
	return mark1*(60.0/100);
}
float ca(int mark2)
{
	return mark2*(40/100.0);
}



