// Write a C program that prompts the user for a numerical grade (an integer from 0 to 100).
// The program should use an if-else if-else structure to print the corresponding letter grade.
// For example:
// 90-100: A
// 80-89: B
// 70-79: C
// 60-69: D
// Below 60: F
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    
    int marks;
    printf("enter the marks you have scored: ");
    scanf("%d", &marks);

    if(marks>=90 && marks<=100){
        printf("Grade A");
    }else if(marks>=80){
        printf("Grade B");

    }else if(marks>= 70){
        printf("Grade C");

    }else if (marks >=60){
        printf("Grade D");
    }else if(marks<60 && marks>=0){
        printf("Grade F");
    }else {
        printf("invalid operation");
    }

    return 0;
}
