#include <stdio.h>

int main() {
	
	int num;
	int count = 0;
	
	do {
		printf("Enter a value: ");
		scanf("%d", &num);
		count += num;
		printf("SuM: %d\n", count);
	}
	
	while (num != 0);
	
	return 0;
}