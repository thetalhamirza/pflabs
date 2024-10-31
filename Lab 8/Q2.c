#include <stdio.h>

int main()	{
	
	int array[4][4];
	
	for (int student = 0; student < 4; student++)	{
		
		for (int subject = 0; subject < 4; subject++)	{
			
			printf("Enter grade for student %d, subject %d: ", student+1, subject+1);
			scanf("%d", &array[student][subject]);
			
		}
		printf("\n");
	}
	
	for (int student = 0; student < 4; student++)	{
		
		for (int subject = 0; subject < 4; subject++)	{
			
			if (array[student][subject] < 0)	{
				array[student][subject]	= 0;
			}
		}
	}
	
	for (int student = 0; student < 4; student++)	{
		
		for (int subject = 0; subject < 4; subject++)	{
			
			printf("%d	", array[student][subject]);
		}
		printf("\n");
	}	
	return 0;
}