// Write a C program that prompts the user to enter a single alphabet character.
// The program should check if the character is a vowel (a, e, i, o, u) or a consonant.
// Use conditional statements with the logical OR operator (`||`) to check for vowels.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    char ch;
    printf("enter the character that you want to cheack: ");
    scanf(" %c", &ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("its a consonant");
    }else{
        printf("Its vowel");
    }
    

    return 0;
}
