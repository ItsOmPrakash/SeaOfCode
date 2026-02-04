// Write a C program that uses a for loop to print all even numbers between 2 and 20 (inclusive).
// The output should be: 2 4 6 8 10 12 14 16 18 20.
// You can achieve this by either adjusting the loop's step value or using a conditional check inside the loop.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    
    for(int i=2; i<=20;i++){
        printf("%d\n",i);
        i++;
    }




    return 0;
}