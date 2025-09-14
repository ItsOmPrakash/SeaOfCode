// Write a C program that takes three side lengths of a triangle as input from the user.
// First, check if the given lengths can form a valid triangle (the sum of any two sides must be greater than the third side). If not, print an error message.
// If it is a valid triangle, determine and print whether it is equilateral (all sides equal), isosceles (two sides equal), or scalene (no sides equal).
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
     
    int side1, side2, side3;
        printf("enter the first side of the triangle: ");
        scanf("%d", &side1);    
        printf("enter the second side of the triangle: ");
        scanf("%d", &side2);
        printf("enter the third side of the triangle: ");
        scanf("%d", &side3);

        if ((side1+side2)>side3 || (side1+ side3)> side2 || (side2 + side3)> side1){
            if (side1==side2==side3){
                printf("its a equilateral triangle ");
            }else if(side1== side2|| side1==side3|| side2==side3){
                printf("its a isosceles triangle");
            }else {
                printf("its a scalene triangle");
            }
        }else{
            printf("it is not a valid triangle");
        }
    return 0;
}

