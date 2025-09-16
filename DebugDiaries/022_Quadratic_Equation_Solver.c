// Write a C program that finds the roots of a quadratic equation. 
// The program should prompt the user for the coefficients a, b, and c (floating-point numbers).
// The formula for the roots is $x = frac{-b \pm \sqrt{b^2-4ac}}{2a}$.
// Your program must handle three cases using conditional statements based on the value of the discriminant ($D = b^2 - 4ac$):
// 1. If D is positive, print two distinct real roots.
// 2. If D is zero, print one real root.
// 3. If D is negative, print two distinct complex roots in the format a+bi and a-bi, 
// where $a = \frac{-b}{2a}$ and $b = \frac{\sqrt{|D|}}{2a}$.
// ----------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main() {
    float a ,b,c,discriminant;
    printf("enter the value of a :");
    scanf("%f",&a);
    printf("enter the value of b :");
    scanf("%f",&b);
    printf("enter the value of c :");
    scanf("%f",&c);

    discriminant == pow(b,2) - 4*(a*c);
    float value1, value2;

    if (discriminant > 0){

        value1 = (-b + sqrt(discriminant)) /(2*a);
        value2 = (-b - sqrt(discriminant)) /(2*a);
        printf("First real and distinct root of the given equation is %f", value1);
        printf("\nSecond real and distinct root of the given equation is %f1", value2);
    }else if (discriminant == 0){
        value1 = (-b)/(2*a);
        printf("real and distinct root of the given equation is %f", value1);
    }else {
        value1= (-b)/(2*a);
        value2= sqrt(discriminant)/(2*a);
        printf("First distinct complex root is %f+%fi", value1,value2);
        printf("Second distinct complex root is %f-%fi", value1,value2);

    }
    



    return 0;
}
