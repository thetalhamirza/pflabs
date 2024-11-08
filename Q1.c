#include <stdio.h>
#include <string.h>

char reverse(char string[], int start, int end)	{
	
	if (start >= end)	{
		return;
	}
	
	char keep = string[start];
	string[start] = string[end];
	string[end]	= keep;
	
	reverse(string, start + 1, end - 1);
}

int main()	{
	
	char sentence[100];
	
	printf("Enter a sentence: ");
	fgets(sentence, 100, stdin);
	
	reverse(sentence, 0, strlen(sentence)-1);
	
	printf("%s", sentence);
	
	return 0;
}