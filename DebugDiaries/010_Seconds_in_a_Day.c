// Write a C program that prompts the user to enter a number of days.
// The program should calculate and print the total number of seconds in that many days.
// Assume a day has 24 hours, 60 minutes per hour, and 60 seconds per minute.
// The input and output should be integers.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int days, seconds;

    printf("enter the number of days: ");
    scanf("%d", &days);

    seconds= days*(24*60*60);
    printf("the total number of second in %d days is %d seconds", days, seconds);
    

    return 0;
}
