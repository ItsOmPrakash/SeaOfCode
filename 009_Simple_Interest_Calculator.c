// Write a C program that calculates the simple interest for a loan.
// The program should ask the user to enter the principal amount, the annual interest rate (in percent), and the time period (in years). All inputs should be floating-point numbers.
// Print the calculated simple interest.
// The formula for simple interest is:
// Simple Interest = (Principal * Rate * Time) / 100
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    float principal, interest_rate, time,simple_interest;  
    printf("Please enter your principal ammount: ");
    scanf("%f",&principal);
    printf("Please enter your interest rate (in %): ");
    scanf("%f",&interest_rate );
    printf("Please enter your time period: ");
    scanf("%f",&time);       
    
    simple_interest = (principal* interest_rate * time)/100;
    printf("the calculated simple interest is %f", simple_interest);
    return 0;
}
