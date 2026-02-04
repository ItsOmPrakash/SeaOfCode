// Write a C program that takes three side lengths of a triangle as input from the user (floating-point numbers).
// The program must first check if the given lengths can form a valid triangle. 
// A triangle is valid if the sum of any two sides is greater than the third side.
// If the triangle is valid, classify it as one of the following:
// - Equilateral (all three sides are equal)
// - Isosceles (at least two sides are equal)
// - Scalene (all three sides are different)
// Finally, further classify a valid triangle based on its angles:
// - Right-angled (if $a^2 + b^2 = c^2$)
// - Acute (if $a^2 + b^2 > c^2$)
// - Obtuse (if $a^2 + b^2 < c^2$)
// Print the full classification (e.g., "This is a valid, Right-angled, Isosceles triangle.").
// ----------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main() {
    int side1, side2, side3;
     int another_smaller_side, smaller_side, larger_side;
        printf("\nenter the first side of the triangle: ");
        scanf("%d", &side1);    
        printf("\nenter the second side of the triangle: ");
        scanf("%d", &side2);
        printf("\nenter the third side of the triangle: ");
        scanf("%d", &side3);

        if (side1>side2 && side1>side3){

            larger_side = side1;
            smaller_side = side2;
            another_smaller_side= side3;

        }else if (side2>side1 && side2>side3){

            larger_side = side2;
            smaller_side = side1;
            another_smaller_side= side3;

        }else {
            larger_side = side3;
            smaller_side = side2;
            another_smaller_side= side1;
        }



        if((side1+side2)>side3 || (side1+side3)>side2 || (side2+side3)>side1){

            if (side1==side2==side3){
                if((pow(smaller_side,2)+pow(another_smaller_side,2))> pow(larger_side,2)){
                    printf("This is a valid acute angled, Euqilateral triangle ");
                }
            }else if(side1==side2 || side1 == side3 || side2== side3){
                if((pow(smaller_side,2)+pow(another_smaller_side,2))== pow(larger_side,2)){
                    printf("This is a valid  right angled, Isosceles triangle ");
                }else if((pow(smaller_side,2)+pow(another_smaller_side,2))> pow(larger_side,2)){
                    printf("This is a valid acute angled,Isosceles triangle ");
                }else{
                     printf("This is a valid Obtuse angled,Isosceles triangle ");
                }
            }else {

                if((pow(smaller_side,2)+pow(another_smaller_side,2))> pow(larger_side,2)){
                    printf("This is a valid acute angled, Scalene triangle ");
                }else if((pow(smaller_side,2)+pow(another_smaller_side,2))< pow(larger_side,2)){
                    printf("This is a valid Obtuse angled, Scalene triangle ");
                }
            }    
                 
        }else{
            printf("its not a valid triangle");
        }


    return 0;
}
