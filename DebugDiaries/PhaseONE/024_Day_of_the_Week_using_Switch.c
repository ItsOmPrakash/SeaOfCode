// Write a C program that prompts the user to enter a number from 1 to 7.
// The program should then use a switch statement to print the corresponding day of the week.
// For example, if the user enters 1, print "Sunday"; if they enter 2, print "Monday", and so on.
// If the user enters a number outside the range of 1 to 7, print an error message.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int userinput;
    printf("enter user input : ");
    scanf("%d", &userinput);

    switch (userinput) {
        case 1 :{
            printf("Sunday");
        } break;
        case 2: {
            printf("Monday");
        }break;
        case 3:
            printf("Tuesday");
        break;
        case 4: {
            printf("Wednesday");
        }break;
        case 5: {
            printf("Thursday");
        }break;
        case 6:{
            printf("Friday");
        }break;
        case 7: {
            printf("Saturday");
        }break;
        default :{
            printf("invalid input");
        }


    }

    return 0;
}
