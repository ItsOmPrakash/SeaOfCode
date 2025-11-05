// Write a C program that creates a simple "Guess the Number" game.
// The program should 'think' of a secret number (e.g., 50, a hardcoded integer).
// Use a `do-while` loop to repeatedly prompt the user to guess the number.
// Inside the loop, use conditional statements to check if the user's guess is too high, too low, or correct.
// The loop should terminate only when the user guesses the correct number.
// Print a congratulatory message when the guess is correct.
// ----------------------------------------------------------------------------------------
#include <stdio.h>
 int main() {
 const int think = 20;
 int value;

   do {
    printf("Enter your input : ");
    scanf("%d", &value);
    if (value > think){
        printf("Guess Smaller number\n");
    
    }else if (value <think){
        printf("Guess higher number\n");

    }else {
        printf("Bravo ! you have done it\n");
    }

   }while (value!= think);

    

    return 0;
}
