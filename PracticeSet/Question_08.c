// Write a program to determine whether a student has passed or failed. To pass, a
// student requires a total of 40% and at least 33% in each subject. Assume there
// are three subjects and take the marks as input from the user.


#include <stdio.h>
     int main(){
        float subject1, subject2, subject3;
        printf("Enter the percentage for first subject: ");
        scanf("%f", &subject1);        
        printf("Enter the percentage for second subject: ");
        scanf("%f", &subject2);        
        printf("Enter the percentage for third subject: ");
        scanf("%f", &subject3);

        float total_percentage = (subject1 + subject2 + subject3)/3;

        if(total_percentage >= 40 && subject1 >=33 && subject2 >= 33 && subject3>= 33 ){
            printf("You have passed");
        }else {
            printf("you have faild");
        }
     }