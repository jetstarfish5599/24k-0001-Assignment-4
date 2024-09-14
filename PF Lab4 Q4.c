#include <stdio.h>


int main() {
//variable switch    
 int choice;
//various values to input for area of triangle,rectangle and circle   
 float radius, length, width, base, height, area;
//specifically for area of circle
 float M_PI=3.142;
    while (1) {
        // Display the menu
        printf("\nGeometric Calculator Menu:\n");
        printf("1. Calculate the area of a circle\n");
        printf("2. Calculate the area of a rectangle\n");
        printf("3. Calculate the area of a triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Switch statement to handle the 4 different choices
        switch (choice) {
            case 1:
                // Calculating area of a circle
                printf("Enter the radius of the circle: ");
                scanf("%f", &radius);
                if (radius >= 0) {
                    area = M_PI * radius * radius;
                    printf("The area of the circle is: %.2f\n", area);
                } else {
                    printf("Radius cannot be negative.\n");
                }
                break;

            case 2:
                // Calculate area of a rectangle
                printf("Enter the length of the rectangle: ");
                scanf("%f", &length);
                printf("Enter the width of the rectangle: ");
                scanf("%f", &width);
                if (length >= 0 && width >= 0) {
                    area = length * width;
                    printf("The area of the rectangle is: %.2f\n", area);
                } else {
                    printf("Length and width cannot be negative.\n");
                }
                break;

            case 3:
                // Calculate area of a triangle
                printf("Enter the base of the triangle: ");
                scanf("%f", &base);
                printf("Enter the height of the triangle: ");
                scanf("%f", &height);
                if (base >= 0 && height >= 0) {
                    area = 0.5 * base * height;
                    printf("The area of the triangle is: %.2f\n", area);
                } else {
                    printf("Base and height cannot be negative.\n");
                }
                break;

            case 4:
                // Exit the program
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                // Handle invalid input
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}