#include <stdio.h>

int main()	{
	
	int numElements = 30;
	
	int numArray[numElements];
	
	int i = 0;
	
	while (i < numElements) {
		
		int element;
		printf("Enter element %d: ", i + 1);
		scanf("%d", &element);
		
		numArray[i] = element;
		i++;
	
	}
	
	int minimum = numArray[0];
	int maximum = numArray[0];
	
	for (int j = 1; j < numElements; j++)	{
		
		int current = numArray[j];
		
		if (current < minimum)	{
			minimum = current;
		}
		if (current > maximum)	{
			maximum = current;
		}


	}
	
	printf("Maximum: %d, Minimum: %d", maximum, minimum);
	
	
	
	return 0;
}