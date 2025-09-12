// Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>
    int main(){
        int number;

        printf("enter the number that you want to check: ");
        scanf("%d", &number);

        if(number%97==0){
            printf("Yes the number is divisable");
        }
        else {
            printf("No it is not divisable");
        }

        return 0;

    }