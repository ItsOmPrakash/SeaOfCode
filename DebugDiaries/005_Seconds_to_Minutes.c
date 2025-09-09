// Write a C program that prompts the user for a total number of seconds (an integer). 
// The program should then calculate and print the equivalent time in minutes and remaining seconds. 
// For example, 150 seconds should be displayed as 2 minutes and 30 seconds.

// ----------------------------------------------------------------------------------------
  #include <stdio.h>
     int main() {
        int seconds, minutes,remaining_seconds;
        printf("enter the total number of seconds: ");
        scanf("%d", &seconds);

        minutes = seconds /60;
        remaining_seconds = seconds % 60;
        printf("Total seconds %d is converted into %d minutes and %d seconds", seconds, minutes, remaining_seconds);


        return 0;
     }