#include <stdio.h>

int main() 
{
//id of customer and unit    
int customer_id, units;
//name of customer    
char customer_name[50];
   //
 float amount, surcharge = 0, total_amount;
    
    // Input id from the user
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);
    
    printf("Enter Units Consumed: ");
    scanf("%d", &units);
    
    // Calculate amount based on units consumed
    if (units < 200) 
{
        amount = units * 16.20;
    } 
else if (units < 300) 
{
        amount = units * 20.10;
    } 
else if (units < 500) 
{
        amount = units * 27.10;
    } 
else {
        amount = units * 35.90;
    }
    
    // If amount exceeds 18000, apply surcharge of 15%
    if (amount > 18000) 
{
        surcharge = amount * 0.15;
    }
    
    total_amount = amount + surcharge;
    
    // Output of the result for variable input
    printf("\nCustomer ID : %d", customer_id);
    printf("\nCustomer Name : %s", customer_name);
    printf("\nUnits Consumed : %d", units);
    printf("\nAmount Charges @Rs. %.2f per unit: %.2f", (units < 200 ? 16.20 : units < 300 ? 20.10 : units < 500 ? 27.10 : 35.90), amount);
    if (surcharge > 0) {
        printf("\nSurcharge Amount: %.2f", surcharge);
    }
    printf("\nNet Amount Paid by the Customer: %.2f\n", total_amount);
    
    return 0;
}
//end main