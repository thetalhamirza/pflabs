#include <stdio.h>

int main() {
	
	int num, final;
	num = -1;
	final = 1;
	
	while (num < 0) {
		printf("Enter a number: ");
		scanf("%d", &num);
	}
	
	for (int i = num ; i > 0; i--) 	{
		
		final = final * i;
		
	}		
	printf("%d", final);
	
	
	return 0;
}