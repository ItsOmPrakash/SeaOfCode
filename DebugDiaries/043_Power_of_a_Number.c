// Write a C program that prompts the user to enter a base number and an exponent (both integers).
// The program should calculate the power (base^exponent) without using the `pow()` function from `<math.h>`.
// You must use a `for` loop to multiply the base by itself the correct number of times.
// ----------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main() {
    
    int baseNum, exponent, result=1;
    printf("Enter the base Number : ");
    scanf("%d", &baseNum);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);
    int calculated_value = pow(baseNum, exponent);

    printf("the power of %d is %d\n", baseNum, calculated_value);

    for(int i= 1; i<= exponent; i++){
        result *= baseNum; 
    }
    printf("the power of %d is %d", baseNum, result);


    return 0;
}
