// Write a C program that prompts the user to enter a non-negative integer.
// The program should then calculate the factorial of that number and print the result.
// For example, the factorial of 5 is $5 \times 4 \times 3 \times 2 \times 1 = 120$.
// You should use a `for` loop.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int value;
    printf("enter a non nagative number: ");
    scanf("%d", &value);
    int fac=1;

    if (value>0){
        for(int i=value; i>0; i--){
            fac= fac*i;
        }
        printf("Factorial of %d is %d", value , fac);

    }else{
        printf("Invalid input");
    }
    
    return 0;
}
