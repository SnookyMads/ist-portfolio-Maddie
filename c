#include <stdio.h>

int main()
{
	int age; 
	float gpa;
	char grade; 

	printf("Please enter your age \n");
	scanf("%i" , &age);
	fflush(stdin);

	printf("Please enter you gpa \n");
	scanf("%f" , &gpa);
	fflush(stdin);

 	printf("please enter your letter grade \n");
	scanf("%c" , &grade);

	printf("You entered: %c\n", grade);
	return 0;
}
