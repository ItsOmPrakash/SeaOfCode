// Write a C program that prompts the user to enter a positive integer.
// The program should reverse the digits of the number and print the reversed number.
// For example, if the input is 1234, the output should be 4321.
// You must use a `while` loop and arithmetic operators to extract and reassemble the digits.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int value;
    printf("enter a positive integer: ");
    scanf("%d", &value);

    int reminder;
    while (value>0){
        
        reminder = (value%10);
        printf(" %d", reminder);
        value= value/10;

    }

    return 0;
}

