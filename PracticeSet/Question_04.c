// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

#include <stdio.h>
    int main(){

        float interest_rate,ammount, time,simple_interest;
        printf("enter the interest rate: ");
        scanf("%f", &interest_rate);
    printf("enter the ammount:");
    scanf("%f", &ammount);        
        printf("enter the time :");
        scanf("%f", &time);

        simple_interest= time* ammount* interest_rate;
        printf("Simple interest is %f", simple_interest);
         
        return 0;
     }
