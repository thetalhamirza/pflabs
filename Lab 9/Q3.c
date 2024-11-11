#include <stdio.h>
#include <string.h>

int main()	{
	
	char user[] = "admin", pass[] = "1234";
	char entUser[20], entPass[20];
	
	printf("Enter a username: ");
	scanf("%s", &entUser);
	printf("Enter a password: ");
	scanf("%s", &entPass);
	
	int checkUser = strcmp(entUser, user);
	int checkPass = strcmp(entPass, pass);
	
	if (checkUser == 0 && checkPass == 0)	{
		printf("Access granted.");
	}	else	{
		printf("Access denied.");
	}
	
	return 0;
}