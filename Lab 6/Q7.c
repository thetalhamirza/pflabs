#include <stdio.h>

int main() {
	
	int num;
	int base, digit, sum = 0;
	
	
	printf("Narcissistic number check...\n\n");
	printf("Plz enter: ");
	scanf("%d", &num);
	base = num;
	
	while (base != 0)	{
		digit = base % 10;
		
		sum += digit * digit * digit;
		
		base /= 10;
	}
	
	if (sum == num)	{
		printf("It is an armstrong number");
	}	else	{
		printf("It is not an armstrong number");
		
	}
	
	return 0;
}