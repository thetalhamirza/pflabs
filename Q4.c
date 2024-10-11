#include <stdio.h>

int main()	{
	
	int numElements = 15;
	
	int numArray[numElements];
	
	int i = 0;
	
	while (i < numElements) {
		
		int element;
		printf("Enter element %d: ", i + 1);
		scanf("%d", &element);
		
		numArray[i] = element;
		i++;
	
	}
	
	int sum = 0;
	
	for (int j = 0; j < numElements; j++)	{
		
		sum += numArray[j];		
		
	}
	
	printf("The sum is %d", sum);
	
	
	return 0;
}