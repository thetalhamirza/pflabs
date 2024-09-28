#include <stdio.h>

int main()	{
	int age;
	int citizen;
	
	printf("Please enter your age: \n");
	scanf("%d", &age);
	printf("Are you a citizen of the state? 1: Yes, 0: No \n");
	scanf("%d", &citizen);
	
	if (age >= 18 && citizen == 1)	{
		printf("You are eligible to vote.\n");
	}	else	{
		printf("You are not eligible to vote.\n");
	}

	return 0;
}