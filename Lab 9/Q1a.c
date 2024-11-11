#include <stdio.h>

int main()	{
	
	int n;
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	int dots = n+1, circles = 1;
	
	while (dots > 0)	{
		for (int dot = 0; dot < dots; dot++)	{
			printf(". ");
		}
		for (int circle = 0; circle < circles; circle++)	{
			printf("o");
		}
		
		printf("\n");
		dots-- && circles++;
	}	
	dots++;
	circles-=1;
	while (dots < n+1)	{
		dots++ && circles--;
		for (int dot = 0; dot < dots; dot++)	{
			printf(". ");
		}
		for (int circle = 0; circle < circles; circle++)	{
			printf("o");
		}
		printf("\n");
		
	}
	
	return 0;
}