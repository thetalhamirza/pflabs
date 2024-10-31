#include <stdio.h>

int main()	{
	
	int array[3][3];
	
	for (int row = 0; row < 3; row++)	{
		
		for (int col = 0; col < 3; col++)	{
			
			printf("Enter score for participant %d, activity %d: ", row+1, col+1);
			scanf("%d", &array[row][col]);
			
		}
		printf("\n");
	}
	
	int sumAct = 0, sumPart = 0;
	
	for (int part = 0; part < 3; part++)	{
		sumPart = 0;
		for (int act = 0; act < 3; act++)	{

			sumPart += array[part][act];
		}
		printf("Sum for participant %d: %d", part+1, sumPart);
		printf("\n");
	}
	printf("\n");
	
	
	for (int act = 0; act < 3; act++)	{
		sumAct = 0;
		for (int part = 0; part < 3; part++)	{

			sumAct += array[part][act];
		}
		printf("Sum for activity %d: %d", act+1, sumAct);
		printf("\n");
	}
	
	return 0;
}