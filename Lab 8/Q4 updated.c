#include <stdio.h>

int main()	{
	
	int aVert, aHoriz;
	int bVert, bHoriz;
	
	printf("Write vertical dimensions for matrix 1: ");
	scanf("%d", &aVert);
	printf("Write horizontal dimensions for matrix 1: ");
	scanf("%d", &aHoriz);
	printf("Write vertical dimensions for matrix 2: ");
	scanf("%d", &bVert);
	printf("Write vertical dimensions for matrix 2: ");
	scanf("%d", &bHoriz);
	
	int arrA[aVert][aHoriz];
	int arrB[bVert][bHoriz];
	
	
	for (int i = 0; i < aVert; i++)	{
		for (int j = 0; j < aHoriz; j++)	{
			printf("Enter row %d column %d for matrix 1: ", i+1, j+1);
			scanf("%d", &arrA[i][j]);
		}
	}
	printf("");
	for (int i = 0; i < bVert; i++)	{
		for (int j = 0; j < bHoriz; j++)	{
			printf("Enter row %d column %d for matrix 2: ", i+1, j+1);
			scanf("%d", &arrB[i][j]);
		}
	}
	
	int finVert;
	int finHoriz;
	
	if	(aVert > bVert)	{
		finVert = aVert;
	}	else {
		 finVert = bVert;
	}
	if	(aHoriz > bHoriz)	{
		finHoriz = aHoriz;
	}	else {
		 finHoriz = bHoriz;
	}
	
	int finArr[finVert][finHoriz];
	
	for (int i = 0; i < finVert; i++)	{
		for (int j = 0; j < finHoriz; j++)	{
			finArr[i][j] = 0;
		}
	}
	for (int i = 0; i < finVert; i++)	{
		for (int j = 0; j < finHoriz; j++)	{
	
		if (arrA[i][j] != '\0' && arrB[i][j] != '\0')	{
			finArr[i][j] = arrA[i][j] + arrB[i][j];
		}	else if (arrA[i][j] == '\0')	{
			finArr[i][j] = arrB[i][j];
		}	else	{
			finArr[i][j] = arrA[i][j];
		}
	
	for (int i = 0; i < finVert; i++)	{
		for (int j = 0; j < finHoriz; j++)	{
			printf("%d ", finArr[i][j]);
		}
		printf("\n");
	}
	
	
		}
	}
	
	
	return 0;
}