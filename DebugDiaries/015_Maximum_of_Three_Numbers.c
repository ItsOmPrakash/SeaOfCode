// Write a C program that asks the user to enter three integers.
// The program should find and print the largest of the three numbers using conditional statements.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    
    int value1,value2,value3;
    printf("enter the first value ");
    scanf("%d", &value1);
    printf("enter the second value ");
    scanf("%d",&value2);
    printf("enter the third value ");
    scanf("%d",&value3);

    if (value1> value2){
        if (value1> value3){
            printf("First value is the largest");
        }else{
            printf("Third value is the largest");
        }
    }else if (value2> value3){
        printf("Second Value is the largest");
    }else {
        printf("Third value is the largest");
    }

    return 0;
}
