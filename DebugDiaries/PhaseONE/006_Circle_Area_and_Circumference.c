// Write a C program that prompts the user to enter the radius of a circle as a floating-point number.
// The program should then calculate and print both the area and the circumference of the circle.
// Use a const variable for the value of pi.
// Area formula: A = pi * r^2
// Circumference formula: C = 2 * pi * r

// ----------------------------------------------------------------------------------------


#include <stdio.h>
#define Pi 3.14

int main() {
       float radius, area, circumference;
       printf("whats the redius of the circle:  ");
       scanf("%f", &radius);
       
       area = radius*radius*Pi;
       circumference = 2* Pi * radius;
       printf("area and the circumference of the circle is %f and %f", area,circumference );
 

    return 0;
}
