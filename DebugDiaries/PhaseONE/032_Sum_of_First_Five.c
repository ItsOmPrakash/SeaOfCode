// Write a C program that calculates the sum of the first five positive integers (1 + 2 + 3 + 4 + 5).
// Use a for loop to perform the calculation and then print the final sum.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int sum=0;
    for(int i=1; i<=5; i++){

       sum = sum+1;
    }
    printf("sum of first five positive interger is %d", sum);
    
    return 0;
}
