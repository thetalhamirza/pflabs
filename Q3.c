#include <stdio.h>

int main()	{
	int percent;
	printf("Enter your percentage: \n");
	scanf("%d", &percent);
	
	
	(percent >= 90 && percent <= 100) ? printf("Grade: A") : printf("");
	(percent >= 80 && percent <= 89) ? printf("Grade: B") : printf("");
	(percent >= 70 && percent <= 79) ? printf("Grade: C") : printf("");
	(percent >= 60 && percent <= 69) ? printf("Grade: D") : printf("");
	(percent >= 0 && percent <= 59) ? printf("Grade: F") : printf("");
	(percent < 0 || percent > 100) ? printf("Invalid Percentage") : printf("");
	
	
	return 0;
}