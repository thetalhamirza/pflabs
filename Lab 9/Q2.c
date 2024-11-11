#include <stdio.h>

int main()	{
	
	int nuts, bolts, washers;
	
	printf("Number of bolts:\t\t");
	scanf("%d", &bolts);
	
	printf("Number of nuts:\t\t");
	scanf("%d", &nuts);
	
	printf("Number of washers:\t\t");
	scanf("%d", &washers);
	
	int total = (bolts * 5) + (nuts * 3) + washers;
	
	int correct = 1;
	
	if (nuts < bolts)	{
		printf("Check the Order:\t\ttoo few nuts\n");
		correct = 0;
	}	
	
	if (washers < (bolts*2))	{
		printf("Check the Order:\t\ttoo few washers\n");
		correct = 0;
	}
	
	if (correct == 1)	{
		printf("Order is OK\n");
	}
	
	printf("Total cost:\t\t%d", total);
	
	
	return 0;
}