// Write a C program that prompts the user to enter a positive integer.
// The program should then use a while loop to count down from that number to 1, printing each number.
// After the countdown, print "Blast Off!".
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int value;
    printf("enter a number: ");
    scanf("%d", &value);
    
    for(int i=value; i>1;i-- ){
        printf("%d\n", i);
    }
    return 0;
}