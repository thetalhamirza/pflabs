#include <stdio.h>

int main()	{
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	(num & 1 == 1) ? printf("Odd") : printf("Even");
	
	
	
	return 0;
}