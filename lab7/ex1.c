#include<stdio.h>
#include<assert.h>
char findGrade(float mark);
void testGrade();
int main(void)
{
	testGrade();
	
	float marks;
	char grades;
	
	printf("Enter mark of the module : ");
	scanf("%f",&marks);
	
	grades = findGrade(marks);
	
	printf("the grade is %c",grades);
	
	return 0;
	
}
char findGrade(float mark)
{
	if (mark>=75)
	{
		return 'A';
	}
	else if (mark>=65)
		{
			return 'B';
		}
		else if (mark>=45)
			{
				return 'C';
			}
			else 
			{
				return 'F';
			}
	
}
void testGrade()
{
	assert(findGrade(85) == 'A'); 
	assert(findGrade(25) == 'F');
}



