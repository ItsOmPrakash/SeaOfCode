// Write a C program that prompts the user to enter two integers.
// The program should then calculate and print their sum, difference, product, and the result of the first number divided by the second.


// -----------------------------------------------------------------------------------------------------------

#include <stdio.h>

    int main(){
       int first_num, second_num;
       printf("enter first number: ");
       scanf("%d", &first_num);
       printf("enter second number: ");
       scanf("%d",&second_num);
      
       printf(" Sum of %d and %d is = %d", first_num,second_num,first_num + second_num );
       printf("\n Difference  of %d and %d is = %d", first_num,second_num,first_num-second_num );
       printf("\n Product of %d and %d is = %d", first_num,second_num,first_num*second_num );
       printf("\n Division of %d and %d is = %d", first_num,second_num,first_num/second_num );

      return (0);

    }