// Write a C program that prompts the user for a number N.
// The program should print the first N terms of the Fibonacci sequence.
// The sequence starts with 0 and 1, and each subsequent term is the sum of the two preceding ones (e.g., 0, 1, 1, 2, 3, 5, 8...).
// Use a `for` loop.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int value;
    printf("enter the number: ");
    scanf("%d", &value);
    int sum=0;

    for (int i=1; i<=value; i++){
       
        printf("the sum of two preceding ones %d and %d is %d\n", sum, i, sum+i);
        sum = i;
        i = sum+i;
    }
    return 0;
}
