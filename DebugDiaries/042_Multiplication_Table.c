// Write a C program that prompts the user to enter a positive integer.
// The program should print the multiplication table for that number, from 1 to 10.
// For example, if the input is 7, the output should show:
// 7 \times 1 = 7$
// 7 \times 2 = 14$
// ... up to 7 \times 10 = 70$.
// Use a `for` loop.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int num;
    printf("enter a number: ");
    scanf("%d",&num);

    for(int i=1; i<=10; i++){
        printf("%d times %d is: %d\n", num, i,num*i);
    }
    
    return 0;
}
