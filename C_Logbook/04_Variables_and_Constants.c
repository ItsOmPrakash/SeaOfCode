#include <stdio.h>
#define Pi 3.14 // constant variable using #define preprocessor directive that is used to define constant values
    int main() {
    // Variable is a name given to a memory location that stores a value.
    // Variable declaration

    int age; // integer variable
    // Variable initialization
    age = 25; // assigning value to variable
    // Variable declaration and initialization in a single line    
    float height = 5.9; // floating-point variable  


    // reassigning value to variable
    age = 30; // We can change the value of a variable

    // Constant variable
    // constant can be defined using #define preprocessor directive or const keyword
    const float pi = 3.14; // constant variable using const keyword that is used to define constant values
    // pi = 3.14159; // This will give an error because we cannot change the value of a constant variable


    // Rules for naming variables
    // 1. Variable names must start with a letter (a-z, A-Z) or an underscore (_).
    // 2. Variable names can contain letters, digits (0-9), and underscores.
    // 3. Variable names are case-sensitive (age and Age are different variables).
    // 4. Variable names cannot be a reserved keyword in C (like int, float
    // 5. Variable names should be meaningful and descriptive.


    // printing the values of variables
    printf("Age: %d\n", age); // %d is a format specifier for integer
    printf("Height: %.1f\n", height); // %.1f is a format
    printf("Value of Pi: %.2f\n", Pi); // %.2f is a format specifier for floating-point number with 2 decimal places
    printf("Value of pi: %.2f\n", pi); // %.2f is a format specifier for floating-point number with 2 decimal places
    
    return 0;
   }