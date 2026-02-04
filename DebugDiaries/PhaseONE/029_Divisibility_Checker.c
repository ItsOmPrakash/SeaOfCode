// Write a C program that prompts the user for a single positive integer.
// The program should use conditional statements to check and print all applicable messages for the number:
// - If the number is divisible by both 3 and 5, print "Divisible by both 3 and 5".
// - If the number is divisible by 3 but not 5, print "Divisible by 3".
// - If the number is divisible by 5 but not 3, print "Divisible by 5".
// - If the number is not divisible by 3 or 5, print "Not divisible by 3 or 5".
// Use the modulo operator (%) to check for divisibility. Ensure that your logic correctly handles the "divisible by both" case.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    
    int number;
    printf("enter a number: ");
    scanf("%d", &number);

    if (number%3==0){
        if(number%5==0){
            printf("%d is both divisiable by 3 and 5", number);
        }else {
            printf("%d is divisible by 3", number);
        }
     } else if(number%5==0){
        printf("%d is divisible by 5", number);

     }else {
        printf("%d is not divisible by 3 and 5");
     }

    return 0;
}
