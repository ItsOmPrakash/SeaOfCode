// Write a C program that acts as a basic currency converter.
// Define three conversion rates as constants: Euro ($1 = 0.93 EUR), Yen ($1 = 150.81 JPY), and Pound Sterling ($1 = 0.81 GBP).
// Prompt the user to enter an amount in US dollars (USD) as a floating-point number.
// Then, prompt the user to enter a single character to select the target currency: 'E' for Euro, 'Y' for Yen, or 'P' for Pound Sterling.
// Use a switch statement to perform the correct conversion based on the user's input and print the result.
// If the user enters an invalid character, print an error message.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    const float euro = 0.93;
    const float yen = 150.81;
    const float pound = 0.81;
    float dollar, ammount;
    printf("enter the ammount in dollor: ");
    scanf("%f", &dollar);
    char user_input;
    printf("Enter the operation you want to perform\n");
    printf("'E' for Euro, 'Y' for Yen, or 'P' for Pound ----- ");
    scanf(" %c", &user_input);


    switch (user_input){
        case 'E':{
            ammount= dollar * euro;
            printf("Ammount after conversion is %fEUR", ammount);
        } break;
        case 'Y': {
            ammount= dollar* yen;
            printf("Ammount after conversion is %fJPY", ammount);
        }break;
        case 'P':{
            ammount= dollar* pound;
            printf("Ammount after conversion is %fGBP", ammount);
        }break;
        default:
            printf("invalid user input");
    }
    
    return 0;
}
