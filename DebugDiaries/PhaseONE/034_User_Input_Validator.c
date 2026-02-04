// Write a C program that asks the user to enter a positive number.
// Use a do-while loop to repeatedly prompt the user until they enter a number greater than 0.
// Once a valid number is entered, print a confirmation message.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int num;

    do {
    printf("Enter a positive number: ");
    scanf("%d", &num);
  } while (num <= 0);


    return 0;
}
