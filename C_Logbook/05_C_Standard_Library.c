// Libeary is a collection of pre-compiled routines that a program can use.
// The routines, also called functions, are stored in object format.    
// A library is a collection of functions and macros that are pre-compiled and can be used in your programs to perform common tasks.
// The C Standard Library is a collection of header files and library routines used to implement common operations

#include <stdio.h>  // Standard Input Output header file
#include <stdlib.h> // Standard Library header file
#include <string.h> // String manipulation functions header file
#include <math.h>   // Math functions header file

int main() {
    // Using functions from the C Standard Library

    // 1. printf() and scanf() from stdio.h
    int num;
    printf("Enter an integer: "); // printf is used to print output to the console
    scanf("%d", &num);           // scanf is used to read input from the console
    printf("You entered: %d\n", num);

    // 2. malloc() and free() from stdlib.h
    int *arr;
    int n = 5;
    arr = (int *)malloc(n * sizeof(int)); // malloc is used to allocate memory dynamically
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Initialize array
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr); // free is used to deallocate memory

    // 3. strlen() and strcpy() from string.h
    char str1[20], str2[20];
    strcpy(str1, "Hello, World!"); // strcpy is used to copy strings
    int len = strlen(str1);         // strlen is used to get the length of a string
    printf("String: %s, Length: %d\n", str1, len);

    // 4. sqrt() and pow() from math.h
    double number = 16.0;
    double square_root = sqrt(number); // sqrt is used to calculate the square root
    double power = pow(number, 2);      // pow is used to calculate power
    printf("Square root of %.2f is %.2f\n", number, square_root);
    printf("%.2f raised to the power of 2 is %.2f\n", number, power);

    return 0;
}