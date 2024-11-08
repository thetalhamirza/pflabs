#include <stdio.h>

int main()	{
	
	int arrNum[] = {1,1,1,1,1,1,5,1,1,1,1,1};
	
	int num;
	int index;
	int flag = 0;
	
	printf("Enter integer to search: ");
	scanf("%d", &num);	
	
	for (int i = 0; i < 12; i++)	{
		if (arrNum[i] == num)	{
			index = i + 1;
			flag = 1;
			break;
		}
	}
	
	if (flag == 1)	{
		printf("%d found at index %d", num, index);
	}	else	{
		printf("Number not found");
	}
	
	return 0;
}