// Write a C program that acts as a basic calculator.
// The program should prompt the user to enter two floating-point numbers and a character representing an arithmetic operator (+, -, *, /).
// Use an if-else if-else structure to perform the requested operation and print the result.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    float value1, value2;
    char operator;
    printf("enter the first value: ");
    scanf("%f", &value1);
    printf("enter the second value: ");
    scanf("%f", &value2);
    printf("what operation you would like to perform: ");
    scanf(" %c", &operator);

    if(operator=='+'){
        printf("value after the operation is %f", value1 + value2);
    }else if(operator=='-'){
        printf("value after the operation is %f", value1 - value2);

    }else if(operator == '/'){
        printf("value after the operation is %f", value1 / value2);

    }else if(operator=='*'){
        printf("value after the operation is %f", value1 * value2);

    }else {
        printf("Invalid Operation");
    }

    return 0;
}
