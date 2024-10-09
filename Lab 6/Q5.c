#include <stdio.h>

int main()	{
	
	int number;
	int pflag = 0;
	printf("Enter a numero: ");
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
	return 0;
}