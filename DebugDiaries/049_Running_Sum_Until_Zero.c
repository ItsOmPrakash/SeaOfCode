// Write a C program that repeatedly prompts the user to enter an integer.
// The program should keep a running total of all entered numbers.
// The process must stop when the user enters the value 0 (this is the sentinel value).
// After the loop terminates, print the final sum of all non-zero numbers entered.
// You must use a while loop for this.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
     
    int value ;
    int sum = 0;
    printf("enter a integer ");
    scanf("%d", &value);

    while(value>0){
        sum += value;
        printf("enter a integer ");
        scanf("%d", &value);

    }
        printf("\n Sum of all the numbers entered is %d", sum);
        
    return 0;
}