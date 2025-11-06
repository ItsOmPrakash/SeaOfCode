// Write a C program that prompts the user to enter a single character and a small positive integer N.
// The program should use a for loop to print the entered character N times on a single line.
// For example, if the input is 'X' and 5, the output should be XXXXX.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int i,character,integer;

    printf("Enter a Character : ");
    scanf("%d", &character);
    printf("Enter a integer : ");
    scanf(" %d", &integer);

    for(i=0; i<integer; i++){
        printf("%c", character);
    }
    
    return 0;
}