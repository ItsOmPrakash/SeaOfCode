// Write a C program that simulates a simple login.
// Define a correct username and password as string literals in your code (e.g., "user" and "pass").
// Prompt the user to enter a username and a password.
// Use conditional statements to check if the entered credentials match the predefined ones and print a success or failure message.
// You will need to use the `strcmp` function from the `<string.h>` library for comparing the strings.
// ----------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#define user "hari"
#define pass "om23"


int main() {
    
    // char user[] = "hari"; 
    // char pass[] = "om23";
    
    char username[20], password[20];
    printf("enter the username: ");
    scanf(" %s",username);
    printf(" enter your password: ");
    scanf(" %s", password);

    if (strcmp(username, user)==0){
        if(strcmp(password, pass)==0){
            printf("Loged in");
        }else{
            printf("enter correct password");
        }
     } else {
        printf("enter correct username ");
     }

    return 0;
}
