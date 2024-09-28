/*
Write a C program to display greetings based on the time in a 24-hour format. If the time is:
 Between 6 and 11 (inclusive of 6 but not 12): Greet with “Good Morning”.
 Between 12 and 17 (inclusive of 12 but not 18): Greet with “Good Afternoon”.
 Between 18 and 23 (inclusive of 18 but not 24): Greet with “Good Evening”.
 Between 0 and 5: Greet with “Good Night”
*/

#include <stdio.h>

int main()  {
    int time;
    printf("Please enter the time: ");
    scanf("%d", &time);

    if (time < 0 || time >= 24)  {
        printf("Invalid time\n");
    }   else if (time <= 5) {
        printf("Good Night\n");
    }   else if (time <= 11) {
        printf("Good Morning\n");
    }   else if (time <= 17) {
        printf("Good Afternoon\n");
    }   else if (time <= 23) {
        printf("Good Evening\n");
    }

    return 0;
}