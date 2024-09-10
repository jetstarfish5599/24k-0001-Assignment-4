#include <stdio.h>

int main() {
//variable integers   
 int choice, a, b;
    
int add, sub, mul;
//as answer of division may include decimal    
float div;

    // Take the choice input from the user
    printf("Enter your choice (1 for Add, 2 for Subtract, 3 for Multiply, 4 for Divide): ");
    scanf("%d", &choice);

    // Take two numbers as input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform arithematic operations based on choice
    switch(choice) {
        //perform Addition
        case 1:
            add = a + b;
            printf("Result: %d\n", add);
            break;
        //perform substraction
        case 2:
            sub = a - b;
            printf("Result: %d\n", sub);
            break;
        //perform multiplication
        case 3:
            mul = a * b;
            printf("Result: %d\n", mul);
            break;
            //perform division 
        case 4:
            if (b != 0)
 {  
             //  denominator should not be zero
                div = (float)a / b;
                printf("Result: %.2f\n", div);
            } else {
                printf("Syntax Error.\n");
            }
            break;
        default:
            printf("Error: Invalid choice.\n");
            break;
    }
    return 0;
}
//main end