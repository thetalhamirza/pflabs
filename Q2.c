#include <stdio.h>

int main()	{
	int num;
	int start = 1;
	
	num = -1;
	
	while (num < 1)	{
		
		printf("Enter a number: ");
		scanf("%d", &num);
	}
	
	
	while (start <= num)	{
		if (start % 2 == 0)	{
			printf("%d\n", start);
		}
		start++;
	}	
	
	return 0;
}