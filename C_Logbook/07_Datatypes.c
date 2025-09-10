#include <stdio.h>
    
    int main() {
    // Data types in C define the type of data that a variable can hold. 
    // Data types determine the size and layout of the variable's memory, 
    // the range of values that can be stored, and the operations that can be performed on that data. 

    // These are predefined data types in C which are used to declare variables.
    // 1. int: Used to store integer values (whole numbers).
    // 2. float: Used to store single-precision floating-point numbers (decimal numbers).
    // 3. double: Used to store double-precision floating-point numbers (decimal numbers with higher precision).
    // 4. char: Used to store single characters (letters, digits, symbols).
    // 5. void: Represents the absence of a value or type (used in functions that do not return a value).
  
    int intVar = 10;           // integer variable Size of int is typically 4 bytes
    float floatVar = 5.75;     // floating-point variable size of float is typically 4 bytes
    double doubleVar = 19.99;  // double-precision floating-point variable size of double is typically 8 bytes
    char charVar = 'A';        // character variable size of char is typically 1 byte
    char strVar[] = "Hello";   // string variable (array of characters) size of strVar is 6 bytes (5 characters + 1 null terminator)
    void *ptr;                 // void pointer (can point to any data type) size of ptr is typically 4 or 8 bytes depending on the system

    // integer variable is of two types: signed and unsigned
    unsigned int uIntVar = 20; // unsigned integer variable (can only hold non-negative values) 
    signed int sIntVar = -20;  // signed integer variable (can hold both negative and positive values)
    // short and long are modifiers that can be used with int, float, and double data types to change their size and range.
    short int shortIntVar = 5; // short integer variable (typically 2 bytes
    long int longIntVar = 100000; // long integer variable (typically 4 or 8 bytes depending on the system)
    long long int longLongIntVar = 10000000000; // long long integer variable (typically 8 bytes)
    long double longDoubleVar = 19.9999999999; // long double variable (higher precision than double)
    
    return 0;

}
