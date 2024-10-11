#include <stdio.h>

int main()	{
	
	int numElements = 20;
	
	int numArray[numElements];
	
	int i = 0;
	
	while (i < numElements) {
		
		int element;
		printf("Enter element %d: ", i + 1);
		scanf("%d", &element);
		
		numArray[i] = element;
		i++;
	
	}
	
	
	for (int j = numElements - 1; j > 0; j--)	{
		
		printf("%d ", numArray[j]);
	}
	
	
	
	return 0;
}