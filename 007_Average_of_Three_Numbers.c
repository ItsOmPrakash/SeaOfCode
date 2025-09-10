// Write a C program that asks the user to input three integer values.
// The program should then calculate the average of these three numbers and print the result.
// The output should be a floating-point number.
// You must use type casting to ensure the average is calculated correctly.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {

    int value1, value2, value3;
    printf("enter the 1st value ");
    scanf("%d",&value1);
    printf("enter the 2nd value ");
    scanf("%d",&value2);
    printf("enter the 3rd value ");
    scanf("%d",&value3);
    
    float average = (float) (value1 + value2 + value3)/3 ;
    printf("average of the given value is %f", average);

    return 0;
}
