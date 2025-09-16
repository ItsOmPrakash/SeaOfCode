// Write a C program that prompts the user to enter a three-digit integer.
// The program must determine if the number is a palindrome. A number is a palindrome if it reads the same forwards and backward.
// For example, 121 is a palindrome, but 123 is not.
// You must use integer division and the modulo operator to isolate the digits. Do not convert the number to a string.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int user_input,first_digit, Last_digit;

    printf("Enter a three digit number: ");
    scanf("%d", &user_input);

    first_digit = user_input/100;
    Last_digit = user_input%10;

    if(first_digit== Last_digit){
        printf("the given nummber is a palindrome");
    }else{
        printf("it is not palindrome");
    }




    
    return 0;
}
