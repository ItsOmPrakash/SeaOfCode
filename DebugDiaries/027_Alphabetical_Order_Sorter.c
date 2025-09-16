// Write a C program that prompts the user to enter three single alphabet characters.
// The program should print the three characters in alphabetical order.
// Use conditional statements to compare the characters' ASCII values and determine their order.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    char ch1, ch2, ch3;
    printf("enter the first character: ");
    scanf("%c", &ch1);    
    printf("enter the second character: ");
    scanf(" %c", &ch2);
    printf("enter the third character: ");
    scanf(" %c", &ch3);

    int value1 = (int) ch1; 
    int value2 = (int) ch2;
    int value3 = (int) ch3;

    if(value1 > value2 && value1 > value3){
        if (value2>value3){
            printf("\nFirst charachter: %c", ch3);
            printf("\nSecond character: %c", ch2);
            printf("\nThird character: %c",ch1);
        }else{
            printf("\nFirst charachter: %c", ch2);
            printf("\nSecond character: %c", ch3);
            printf("\nThird character: %c",ch1);
        }
    }else if (value2 > value1 && value2> value3 ){
        if (value1>value3){
            printf("\nFirst charachter: %c", ch3);
            printf("\nSecond character: %c", ch1);
            printf("\nThird character: %c",ch2);
        }else{
            printf("\nFirst charachter: %c", ch1);
            printf("\nSecond character: %c", ch3);
            printf("\nThird character: %c",ch2);
        }
    }else {
         if (value1>value2){
            printf("\nFirst charachter: %c", ch2);
            printf("\nSecond character: %c", ch1);
            printf("\nThird character: %c",ch3);
        }else{
            printf("\nFirst charachter: %c", ch1);
            printf("\nSecond character: %c", ch2);
            printf("\nThird character: %c",ch3);
        }
    }
    
    return 0;
}
