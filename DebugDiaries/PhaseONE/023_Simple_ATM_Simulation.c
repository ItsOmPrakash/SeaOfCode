// Write a C program that simulates a basic ATM.
// Start with a fixed initial account balance, e.g., $1000.00.
// Prompt the user to choose an operation: 1 for withdrawal, 2 for deposit.
// Use conditional statements to handle the user's choice:
// - If the user chooses withdrawal (1), ask for the amount to withdraw.
// Check if the amount is positive and if there are sufficient funds. 
// If not, print an error message. Otherwise, update the balance and print the new balance.
// - If the user chooses deposit (2), ask for the amount to deposit. Check if the amount is positive. 
// If not, print an error message. Otherwise, update the balance and print the new balance.
// - If the user enters an invalid option, print an error message.
// ----------------------------------------------------------------------------------------
#include <stdio.h>


int main() {
    
    int userinput, ammount,account_balance= 1000;
    printf("Choose operation : 1 for withdrawal, 2 for deposit ");
    scanf("%d", &userinput );

    if (userinput==1){
     
        printf("enter the ammount: ");
        scanf("%d", &ammount);
        if(account_balance >= ammount){
            account_balance = account_balance - ammount;
            printf("Withdraw Sucessfull ! ");
            printf("\nYour new account balance is %d", account_balance);
        }else{
            printf("Insufficient funds");
        }
    }else if(userinput == 2){
        printf("enter the ammount :");
        scanf("%d",&ammount);
        if(ammount>0){
            account_balance= account_balance+ ammount;
            printf("Deposit Sucessfull !");
            printf("\nYour new account balance is %d ", account_balance);
        }else{
            printf("Invalid ammount");
        }

    }else{
        printf("Incorrect UserInput");
    }



    return 0;
}
