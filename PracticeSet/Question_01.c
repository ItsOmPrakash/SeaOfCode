// Write a C program to calculate area of a rectangle:
// a. Using hard coded inputs.
// b. Using inputs supplied by the user.

#include <stdio.h>
    int main(){
        // a. Using hard coded inputs.
        int length1 = 20, width1 =10;
        int area1= length1 * width1;
        printf("area of rectangle is %d", area1);

        //b. Using inputs supplied by the user.
        
        int length2, width2;
        printf("\nenter the length: ");
        scanf("%d", &length2);
        printf("\nenter the width: ");
        scanf("%d", &width2);
        int area2= length2* width2; 
        printf("\narea of rectangle is %d", area2);

        return 0;
}

