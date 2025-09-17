// Write a C program that prompts the user for a positive integer N.
// The program should then calculate and print the sum of all integers from 1 to N.
// You must use a `for` loop to solve this problem.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int value;
    int n =0; 
    printf("enter the number: ");
    scanf("%d", &value);

    if (value >0){
        for(int i=1; i<=value;i++){
         
            n =n + i;
            
        }
        printf("the sum of all integers is %d", n);

    }else {
        printf("invalid input");
    }
    
    return 0;
}
