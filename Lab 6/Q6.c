#include <stdio.h>

int main()	{
	
	int number;
	int h1 = 0, h2 = 1;
	int next = h1 + h2;
	int pflag = 0;
	
	printf("Enter a numver: ");
	scanf("%d", &number);
	
	if (number == 0 || number == 1)	{
		pflag = 1;
	}	else	{
		for (int i = 2; i <= number / 2; i++)	{
			
			if (number % i == 0) { 
				pflag = 1;
				break;
			}
		}
	}
	if (pflag == 1)	{
		printf("Number is not prime\n");
	}	else	{
		printf("Number is prime\n");
	}
	printf("Fibonacci Series for the %d terms: \n", number);
	printf("%d %d ", h1, h2);
	for (int i = 3; i <= number; i++)	{
		printf("%d ", next);
		h1 = h2;
		h2 = next;
		next = h1 + h2;
	}
	return 0;
}