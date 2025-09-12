// Write a C program that prompts the user to enter a number.
// The program should check if the number is positive, negative, or zero and print the corresponding message.
// You must use an if-else if-else structure.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int  value;
    printf("enter a value: ");
    scanf("%d", &value );

    if (value>0){
        printf("the given value is positive");
    } else if(value <0){
        printf("the given value is negative");
    }else{
        printf("the given value is zero");
    }
    
    return 0;
}
