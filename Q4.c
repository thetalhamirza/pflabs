#include <stdio.h>

int main()        {
    float amount;
    int member;
    
    printf("Enter your total purchase amount: ");
    scanf("%f", &amount);
    
    printf("Are you a member? 1: Yes, 2: No: ");
    scanf("%d", &member);
    
    (amount > 100.0 && member == 1) ? printf("You are eligible for a discount!") : printf("Sorry, you're not eligible for a discount.");
    
    

    return 0;
}
