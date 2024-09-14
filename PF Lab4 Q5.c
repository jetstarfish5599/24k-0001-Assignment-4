#include <stdio.h>

int main()
 {
//unit input from user and unit output from program    
char fromUnit, toUnit;
//value of original input and value of output    
float value, convertedValue;

    // Ask user for input
    printf("Select the input temperature unit (C is for Celsius, F is for Fahrenheit, K is for Kelvin): ");
   // Space before %c to avoid reading a newline from previous input that is mentioned above   
    scanf(" %c", &fromUnit);  
    //ask user for value of input
    printf("Enter the temperature value: ");
    scanf("%f", &value);
//ask user to select the unit of temperature
    printf("Select the unit to convert to (C for Celsius, F for Fahrenheit, K for Kelvin): ");
    scanf(" %c", &toUnit);

    // Perform conversion of values and units using switch statement
    switch (fromUnit) {
        case 'C': 
                                        // From Celsius any other unit
            switch (toUnit) {
                case 'F': 
// from Celsius to Fahrenheit
                    convertedValue = (value * 9/5) + 32;
                    printf("%.2f Celsius is %.2f Fahrenheit\n", value, convertedValue);
                    break;
                case 'K':
//From Celsius to Kelvin
                    convertedValue = value + 273.15;
                    printf("%.2f Celsius is %.2f Kelvin\n", value, convertedValue);
                    break;
                case 'C': 
// Celsius to Celsius (no change)
                    printf("%.2f Celsius is %.2f Celsius\n", value, value);
                    break;
 //invalid input               
               default:
                    printf("Invalid unit!\n");
            }
            break;

        case 'F': 
                                   // From Fahrenheit to any other unit 
            switch (toUnit) {
                case 'C': 
// From Fahrenheit to Celsius
                    convertedValue = (value - 32) * 5/9;
                    printf("%.2f Fahrenheit is %.2f Celsius\n", value, convertedValue);
                    break;
                case 'K': 
//From Fahrenheit to Kelvin
                    convertedValue = (value - 32) * 5/9 + 273.15;
                    printf("%.2f Fahrenheit is %.2f Kelvin\n", value, convertedValue);
                    break;
                case 'F': 
//From Fahrenheit to Fahrenheit (no change)
                    printf("%.2f Fahrenheit is %.2f Fahrenheit\n", value, value);
                    break;
                default:
                    printf("Invalid unit!\n");
            }
            break;

        case 'K': 
                                  // From Kelvin to  any other unit
            switch (toUnit) {
                case 'C': 
//From Kelvin to Celsius
                    convertedValue = value - 273.15;
                    printf("%.2f Kelvin is %.2f Celsius\n", value, convertedValue);
                    break;
                case 'F': 
// Kelvin to Fahrenheit
                    convertedValue = (value - 273.15) * 9/5 + 32;
                    printf("%.2f Kelvin is %.2f Fahrenheit\n", value, convertedValue);
                    break;
                case 'K': 
//From Kelvin to Kelvin (no change)
                    printf("%.2f Kelvin is %.2f Kelvin\n", value, value);
                    break;
                default:
                    printf("Invalid target unit!\n");
            }
            break;

        default:
            printf("Invalid input unit!\n");
    }

    // default message from ai converter
    printf("Thank you for using our AI-powered temperature converter.\n");

    return 0;
}