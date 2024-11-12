#include <stdio.h>
#include <string.h>

int main()	{
	
	char names[10][20] = {"Alice", "Harry", "Charlie", "Diana", "Eve"};
	int flag = 0;
	char search[20];
	printf("Enter a name to search: ");
	scanf("%s", &search);
	
	for (int i = 0; i < 10; i++)	{
		int check = strcmp(names[i], search);
		if (check == 0)	{
			flag = 1;
		}
	}
	if (flag == 0)	{
		printf("Not Found");
	}	else	{
		printf("Found");
	}
	return 0;
}