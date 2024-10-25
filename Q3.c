#include <stdio.h>

int main()	{
	
	int num;
	
	printf("Enter n: ");
	scanf("%d", &num);
	
	int value = num;
	
	int iter = 0;
	
	while (value > 0)	{
		
		for (int i = 0; i < iter; i++)	printf(" ");
		for (int j = value; j > 0; j--)	{
			
			printf("%d ", j);
			
		}
		iter+=1;
		value -= 1;
		printf("\n");
	}
	
	value += 2;
	iter-=2;
	
	while (value <= num)	{
		
		for (int i = 0; i < iter; i++)	printf(" ");
		for (int j = value; j > 0; j--)	{
			
			printf("%d ", j);
			
		}
		value++;
		iter--;
		printf("\n");
	}
	
	
	
	
	return 0;
}