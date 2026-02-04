// Write a C program that prompts the user to enter an integer.
// The program should then use a conditional statement to determine if the number is even or odd and print the result.
// You can use the modulo operator (%) to check for evenness.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int value ;
    printf("Enter a value: ");
    scanf("%d", &value);

    if (value%2==0){
        printf("the given value is even");
    }else{
        printf("the given value is odd");
    }
    
    return 0;
}
