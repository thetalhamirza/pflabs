#include <stdio.h>

int main()	{
	
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int charN = n + 2;
	
	int newN = (2*n) + 1;
	
	int dots = n + 1;
	int circles = 1;
	
	for (int i = 0; i < newN; i++)	{
		

		while (dots != 0)	{
		
			for (int dot = 0; dot < dots; dot++)	{
				printf(". ");
			}
				
			for (int circle = 0; circle < circles; circle++)	{
				printf("o");
			}
					
			dots--;	
			circles++;
			

		printf("\n");
		}
		
		while (circles != 0)	{
			
			circles--;
			dots++;
			
			for (int dot = 0; dot < dots; dot++)	{
				printf(". ");
				
			}
			
			for (int circle = 0; circle < circles; circle++)	{
				printf("o");
			}
		printf("\n");
	}
	
}
	
	
	
	
	
	return 0;
}