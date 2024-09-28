#include <stdio.h>

int main()	{
	int A, B, C;
	printf("Enter first angle: \n");
	scanf("%d", &A);
	printf("Enter second angle: \n");
	scanf("%d", &B);
	printf("Enter third angle: \n");
	scanf("%d", &C);
	
	if (A + B + C == 180)	{
		printf("Triangle is valid\n");
	}	else	{
		printf("Triangle is invalid\n");
	}
	
	
	return 0;
}