// Write a C program that prompts the user for two characters. Store them in two separate char variables. 
// Then, swap the values of these variables and print them before and after the swap.

// --------------------------------------------------------------------------

#include <stdio.h>
     int main() {
        
        char first_char,second_char,temp;
        printf("enter the first character: ");
        scanf("%c", &first_char);
        printf("enter the second character: ");
        scanf(" %c", &second_char);
        
        printf("\nvalues of  first and second character before the swap is %c and %c \n", first_char,second_char);
        temp = first_char ;
        first_char = second_char;
        second_char = temp;
        printf("values of  first and second character after the swap is %c and %c", first_char,second_char);

        return 0;


     }