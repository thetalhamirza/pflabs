#include <stdio.h>
int main(){
	
	int i,j,k, size, temp;
	
	printf("Enter the size of the Array: ");
	scanf("%d", &size);
	
	int array[size];
	
	for (i = 0; i < size; i++){
		printf("Enter Element Number %d: ", i+1);
		scanf("%d", &temp);
		array[i] = temp;
	}
	
	int first = array[0];
	for (j = 0; j < size - 1; j++){
		array[j] = array[j + 1];
	}
	array[size - 1] = first;
	
	for (k = 0; k < size; k++){
		printf("%d ", array[k]);
	}

	return 0;
}
