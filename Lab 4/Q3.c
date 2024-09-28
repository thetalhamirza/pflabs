/*
An online shopping store is providing discounts on items due to a seasonal sale. If the cost of
items is less than 1500, a discount of up to 7% will be applied. If the cost of shopping is
between 1500 and 3000, a 12% discount will be applied. For shopping between 3000 and 5000,
a 22% discount will be applied. For amounts over 5000, a 30% discount will be applied.
Print the original amount, the amount saved due to the discount, and the amount after
applying the discount.
*/

#include <stdio.h>

int main()  {
    float price;
    float discountedPrice;
    float difference;
    printf("Please enter an amount: ");
    scanf("%f", &price);

    if (price < 0)  {
        printf("Invalid price");
    }   else if (price <= 1500) {
        discountedPrice = price - (price * 0.07);
    }   else if (price <= 3000) {
        discountedPrice = price - (price * 0.12);
    }   else if (price <= 5000) {
        discountedPrice = price - (price * 0.22);
    }   else    {
        discountedPrice = price - (price * 0.30);
    }

    difference = price - discountedPrice;

    printf("Original amount: %.2f\n", price);
    printf("Amount saved: %.2f\n", difference);
    printf("After applying discount: %.2f\n", discountedPrice);



    return 0;
}