#include <stdio.h>
     int main() {

    // Format specifiers are special characters used in input and output functions to specify the type of data being handled.
    // They are used in functions like printf() and scanf() to indicate how to interpret the
    // data being printed or read.

    int intVar = 10;           // integer variable
    float floatVar = 5.75;     // floating-point variable
    double doubleVar = 19.99;  // double-precision floating-point variable
    char charVar = 'A';        // character variable
    char strVar[] = "Hello";   // string variable (array of characters)
    
    // Printing variables using format specifiers
    printf("Integer: %d\n", intVar);               // %d for integer
    printf("Float: %.2f\n", floatVar);             // %.2f for floating-point with 2 decimal places
    printf("Double: %.2lf\n", doubleVar);          // %.2lf for double with 2 decimal places
    printf("Character: %c\n", charVar);            // %c for character
    printf("String: %s\n", strVar);                // %s for string

    // Reading input using format specifiers
    int inputInt;
    float inputFloat;
    char inputChar; 

    printf("Enter an integer: ");
    scanf("%d", &inputInt);           // %d for integer
    printf("You entered: %d\n", inputInt);
    printf("Enter a float: ");
    scanf("%f", &inputFloat);         // %f for floating-point
    printf("You entered: %.2f\n", inputFloat);
    printf("Enter a character: ");
    scanf(" %c", &inputChar);         // %c for character (note the space before %c to consume any leftover newline character)
    printf("You entered: %c\n", inputChar);

    return 0;

}