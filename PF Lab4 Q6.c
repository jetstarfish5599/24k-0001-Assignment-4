#include <stdio.h>

int main() {
    float cost, discount = 0, savedAmount, finalAmount;

    // Ask the user to enter the total cost of shopping
    printf("Enter the total cost of shopping: ");
    scanf("%f", &cost);

    // Check if the cost of shopping is eligible for a discount
    if (cost < 500) {
        printf("Minimum amount eligible for a discount is 500.\n");
        printf("Your total cost is: %.2f\n", cost);
        printf("No discount applied.\n");
    } else {
        // Apply discount based on the cost
        if (cost < 2000) 
{
            discount = 5;
}
 else if (cost >= 2000 && cost <= 4000) 
{
            discount = 10;
 }
 else if (cost > 4000 && cost <= 6000) 
{
            discount = 20;
}
 else if (cost > 6000) 
{
            discount = 35;
}

        // Calculate saved amount and final amount after discount
        savedAmount = (cost * discount) / 100;
        finalAmount = cost - savedAmount;

        // Print receipt of shoppin including cost,discount,amountsaved and totalamount
        printf("Original amount: %.2f\n", cost);
        printf("Discount percentage: %.2f%%\n", discount);
        printf("Saved amount: %.2f\n", savedAmount);
        printf("Final amount after discount: %.2f\n", finalAmount);
    }

    return 0;
}