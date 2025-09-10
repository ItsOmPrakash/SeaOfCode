#include <stdio.h>
    int main() {
    // Type casting in C is the process of converting a variable from one data type to another.
    // It can be done in two ways: implicit type casting and explicit type casting.
    // 1. Implicit Type Casting (Automatic Type Conversion)
    // In implicit type casting, the compiler automatically converts one data type to another when necessary.
    int intVar = 10;           // integer variable
    float floatVar = 5.75;     // floating-point variable

    // Implicitly converting int to float
    float result1 = intVar + floatVar; // intVar is automatically converted to float    
    printf("Result of implicit type casting (int to float): %.2f\n", result1);

    // 2. Explicit Type Casting (Manual Type Conversion)
    // In explicit type casting, the programmer manually converts one data type to another using a cast
    float floatVar2 = 9.99;    // floating-point variable
    // Explicitly converting float to int
    int result2 = (int)floatVar2; // floatVar2 is explicitly converted to int
    printf("Result of explicit type casting (float to int): %d\n", result2);

    return 0;
}