// Write a C program that calculates the cost of a movie ticket. 
// The price is based on the age of the person and the time of the movie.
// Define a base ticket price, e.g., $10.00.
// Prompt the user for their age (integer) and the time of the movie (as an integer, e.g., 14 for 2 PM, 20 for 8 PM).
// Use nested conditional statements to apply discounts:
// - If age is less than 12, the ticket is free.
// - If age is between 12 and 65, apply a $2.00 discount for a showtime before 17:00 (5 PM).
// - If age is over 65, apply a 50% discount.
// - Otherwise, print the full price.
// Print the final ticket price.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    float price = 10.00 ; 
    int age, time;
    printf("enter your age: ");
    scanf("%d",&age);  
    printf("enter the time of the movie: ");
    scanf("%d", &time);
    
    if (time < 24 && time > 0){

        if(age <= 12){
            printf("Your ticket is free");

        }else if( age >12 && age <= 65 ){
            if(time < 17){
                price = price - 2.00;
                printf("Price for your ticket is $%.2f with a $2 discount ", price);
            }else { 
                printf("Price for your ticket is $%.2f",price);
            }
        }else if (age >65 ){
            if(time< 17){
                price = (price* .5)-2.00;
                printf("Price for your ticket is $%.2f with a 50 percent discount and additional $2 off ", price);
            }else { 
                price = (price* .5);
                printf("Price for your ticket is $%.2f with a 50 percent discount",price);
            }
        }


    }
    
    return 0;
}
