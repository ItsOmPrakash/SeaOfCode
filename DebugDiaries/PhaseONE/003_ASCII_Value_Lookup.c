// Write a C program that asks the user to enter an integer. 
// The program should then treat this integer as an ASCII value and print the corresponding character.

// -----------------------------------------------------------------------------------------------

#include <stdio.h>
     int main(){

        int value;

        printf("enter the integer value: ");
        scanf("%d", &value);
        printf("ASCII value %d for the given character %c", value ,value);
        
        return(0);
     }