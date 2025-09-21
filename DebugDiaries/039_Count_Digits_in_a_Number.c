// Write a C program that prompts the user to enter an integer.
// The program should count the number of digits in the integer and print the total count.
// You must use a `while` loop and integer division.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int number_of_digits(int N){
    int count=0;

        if (N==0){
        return 1;
        }else if (N<0){
            N= -(N);
        }

        
        while(N>0) {
            N= N/10;
            count++;
        }
        return count;

    }


int main() {

    int value , count;
    printf("enter the integer value: ");
    scanf("%d", &value);
    printf("Number of digits in %d is %d", value, number_of_digits(value) );
    
    
    return 0;
}

