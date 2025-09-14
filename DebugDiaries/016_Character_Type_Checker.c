// Write a C program that prompts the user to enter a single character.
// The program should check if the character is an alphabet (a-z, A-Z), a digit (0-9), or a special character.
// You can use the ASCII values or library functions to check the character type.
// ----------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
    char value;
    printf("enter a single character: ");
    scanf("%c", &value);

    int ASCIIvalue= (int) value;

    if(ASCIIvalue >=0 && ASCIIvalue <=127){

        if (ASCIIvalue>= 48 && ASCIIvalue<=57){
            printf("The given character is a Number(0-9) #with ASCII Value of %d", ASCIIvalue);
        }else if (ASCIIvalue>= 65 && ASCIIvalue<=90){
            printf("The given value is captial alphabet(A-Z) with ASCII Value of %d", ASCIIvalue);

        }else if(ASCIIvalue>=95 &&ASCIIvalue <= 122){
            printf("The given value is small alphabet(a-z) with ASCII Value of %d", ASCIIvalue);
        } else {
            printf("Its a Symbol or Special character with ASCII Value of %d", ASCIIvalue);
        }
    

    }else{
        printf("Inavalid Input ");
    }
    
    
    return 0;
}
