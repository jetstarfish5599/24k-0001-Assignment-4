#include <stdio.h>

int main()
 {
    //assigning n as stated in question
int n;

    // Input value of n from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if n is between 1 and 9 this will include 1 and 9
    if (n >= 1 && n <= 9) 
{
        // Print the corresponding word for the number from 1 to 9
        switch (n) 
{
            case 1:
                printf("one\n");
                break;
            case 2:
                printf("two\n");
                break;
            case 3:
                printf("three\n");
                break;
            case 4:
                printf("four\n");
                break;
            case 5:
                printf("five\n");
                break;
            case 6:
                printf("six\n");
                break;
            case 7:
                printf("seven\n");
                break;
            case 8:
                printf("eight\n");
                break;
            case 9:
                printf("nine\n");
                break;
        }
//end of switch statement
    } 
//end of if part of statement
else if (n > 9) {
        // If n is greater than 9, print "greater than 9"
        printf("greater than 9\n");
    }
//if else statement end
    return 0;
}
//main end