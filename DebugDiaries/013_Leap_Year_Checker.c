// Write a C program that takes a year as input from the user.
// The program should determine if the year is a leap year and print a message.
// A year is a leap year if it is divisible by 4, except for years that are divisible by 100 but not by 400.
// You will need to combine multiple conditions using logical operators.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int year ;
    printf("enter the year: ");
    scanf("%d", &year);

    if(year%4==0){
        if (year % 100==0){
            if(year % 400==0){
                printf("this year is leap year");
            } else{
                printf("this year is not leap year");
            } 
        }else {
                printf("this year is leap year");

        }
    }else{
                printf("this year is not leap year");

    }
    
    return 0;
}
