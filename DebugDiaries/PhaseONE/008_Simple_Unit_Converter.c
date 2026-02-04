// Write a C program that prompts the user for a length in meters (as a floating-point number).
// The program should convert this value into feet and inches and then print the result.
// 1 meter = 3.28084 feet
// 1 foot = 12 inches
// You should first convert meters to total feet, then separate the whole feet from the remaining decimal part. Convert the decimal part of the feet to inches.
// ----------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main() {
    
    float meter, feet; 
    int feet_part, inches;

    printf("enter the length: ");
    scanf("%f", &meter);

    feet = meter * 3.28084;
    feet_part = (int) feet;
    
    inches = (int)round((feet-feet_part)*12);

    printf("length in feets and inches are %d feets and %d inches", feet_part,inches);


    return 0;
}
