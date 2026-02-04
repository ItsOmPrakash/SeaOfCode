// Write a C program that prompts the user to enter a positive integer.
// The program should calculate the sum of the individual digits of the number and print the result.
// For example, if the input is 1234, the sum is $1 + 2 + 3 + 4 = 10$.
// You must use a `while` loop.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int num;
    int sum =0;
    printf("Enter a postive number : ");
    scanf("%d", &num);
     
    while(num> 0){
        int value = num %10;
        sum += value;
        num = num/10;

    }
    printf( "sum of value is %d ", sum);
                                      
    return 0;
}
