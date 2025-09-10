
#include <stdio.h>

     int main(){
       
         // print function is used to display the output on the console 
         // printf function is a part of stdio.h library
         
         // To print a simple string
         printf("hello world !"); //prints hello world !
         
         // To print variables we use format specifiers as a placeholder for the variable
         // A format specifier is a special sequence of characters that indicates the type of data to be printed.
         // For example, %d is used for integers, %f for floating-point numbers, and %c for characters.
         int age = 25;
            printf("My age is %d years", age); //prints My age is 25 years

        // TO add a new line we use \n escape sequence this will print the next output in a new line
         float pi = 3.14;   
            printf("\nValue of pi is %f", pi); //prints Value of pi is 3.140000

            
        
        


         return 0;   
         // Return 0 to indicate successful completion
         
     }