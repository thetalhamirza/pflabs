/*Question 1:
Write a C program that reads a student’s score and classifies it into a grade. The grading
scheme is as follows:
 90-100: A
 80-89: B
 70-79: C
 60-69: D
 Below 60: F*/


#include <stdio.h>

int main() {
	int score;
	printf("Enter your score please: ");
	scanf("%d", &score);
	
	if (score >= 90 && score <= 100) {
		printf("A");
	}	else if (score >= 80 && score <= 89) {
		printf("B");
	}	else if (score >= 70 && score <= 79) {
		printf("C");
	}	else if (score >= 60 && score <= 69) { 
		printf("D");
	}	else if (score < 60) {
		printf("F");
	}	else	{
		printf("Invalid Input");
	}
	

	
	
	return 0;
}h