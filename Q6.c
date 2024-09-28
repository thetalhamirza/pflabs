#include <stdio.h>

int main()	{
	int num;
	int count = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while (num > 0)	{
		if (num & 1 == 1)	{
			count++;
		}
		num = num >> 1;
	}
	
	
	printf("Number of 1s: %d", count);
	
	return 0;
}