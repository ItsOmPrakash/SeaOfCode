// Write a C program that prompts the user to enter a positive integer.
// The program should determine whether the number is a prime number and print a message indicating the result.
// A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.
// You must use a `for` loop and an `if` statement to check for divisibility.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int num, isPrime=1;
    printf("Enter a positive number:");
    scanf("%d", &num);

    for (int i=2; i<num; i++){
        if(num% i==0){
           isPrime=0;
            break;
        }
    }
    

    if(isPrime!=0){
        printf("it is prime number");

    }else {
        printf("it is not a prime number");
    }

    return 0;
}
