/*
Given a positive integer denoting n, do the following:
a. If 1=n=20, print the English words corresponding to the numbers (e.g., &quot;one&quot; for 1,
&quot;twenty&quot; for 20).
b. If n&gt;20, print &quot;Number greater than 20.
 */



#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	
	switch (num)	{
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		case 10:
			printf("ten");
			break;
		case 11:
			printf("eleven");
			break;
		case 12:
			printf("twelve");
			break;
		case 13:
			printf("thirteen");
			break;
		case 14:
			printf("fourteen");
			break;
		case 15:
			printf("fifteen");
			break;
		case 16:
			printf("sixteen");
			break;
		case 17:
			printf("seventeen");
			break;
		case 18:
			printf("eighteen");
			break;
		case 19:
			printf("nineteen");
			break;
		case 20:
			printf("twenty");
			break;
		default:
			if (num > 20)	{
				printf("Number greater than 20");
			}	else	{
				printf("Invalid input");
			}	
	}
	
	
	
	
	return 0;
}