#include <stdio.h>

int main(){
	
	
	int size = 12, summer = 0, i, j, k, temp;
	int array[size], sumArray[size/2];
	
	for (i = 0; i < size; i++){
		printf("Enter Element %d: ", i+1);
		scanf("%d", &temp);
		array[i] = temp;
	}
	
	for (j = 0; j < (size/2); j++){
		sumArray[j] = array[summer] + array[summer + 1];
		summer += 2;
	}
	
	printf("");
	for (k = 0; k < (size/2); k++){
		printf("%d  ", sumArray[k]);
	}
	
	
	return 0;
}
