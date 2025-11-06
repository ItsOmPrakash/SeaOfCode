// Write a C program that prompts the user for a small integer N (e.g., 5).
// The program should use a for loop to calculate and print the square of every integer from 1 up to N.
// For example, if N is 4, the output should show:
// 1 squared is 1
// 2 squared is 4
// 3 squared is 9
// 4 squared is 16
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int value;
    printf("Enter a integer: ");
    scanf("%d", &value);

    for(int i= 0; i<=value; i++){
        printf("%d squared is %d\n", i , i*i);
    }

    return 0;
}