// Write a C program that prompts the user for an integer.
// The program should then use a while loop to print the multiplication table for that number, from 1 to 5.
// For example, if the user enters 8, the output should be:
// 8 times 1 = 8$
// 8 times 2 = 16$
// ... up to 8 times 5 = 40$.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    int num;
    printf("enter the number : ");
    scanf("%d", &num);

    int i=1;
    while (i<=5){
        printf("%d times %d = %d\n", num,i,num*i);
        i++;

    }


    return 0;
}
   
    
