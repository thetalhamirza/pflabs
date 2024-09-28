/*
Write a C program to input electricity unit charges and calculate the total electricity bill
according to the given conditions:
1. For the first 30 units: Rs. 0.60/unit
2. For the next 80 units: Rs. 0.85/unit
3. For the next 100 units: Rs. 1.30/unit
4. For units above 210: Rs. 1.60/unit
An additional surcharge of 15% is added to the bill.
*/



#include <stdio.h>

int main()  {
    int units;
    float charge;
    printf("Please enter the units used: ");
    scanf("%d", &units);

    if (units < 0)  {
        printf("Invalid input");
    }   else if (units <= 30) {
        charge = units * 0.60;
    }   else if (units > 30 && units <= 110) {
        units -= 30;
        charge = 18 + (units * 0.85);
    }   else if (units > 110 && units <= 210)   {
        units -= 110;
        charge = 18 + 68 + (units * 1.30);
    }   else if (units > 210)   {
        units -= 210;
        charge = 18 + 68 + 130 + (units * 1.60);
    }
    charge = charge + (charge * 0.15);

    printf("Total electricity bill: %.2f", charge);



    return 0;
}