#include <stdio.h>
int main() {
    // Taking input from the user
    // scanf function is used to take input from the user
    // It is a part of stdio.h library
    // The first argument is a format specifier that indicates the type of data to be read
    // The second argument is the address of the variable where the input will be stored
    int age;
    printf("Enter your age: ");
    scanf("%d", &age); // %d is used for integers

    float height;
    printf("Enter your height in meters: ");
    scanf("%f", &height); // %f is used for floating-point numbers

    char initial;
    printf("Enter the first letter of your name: ");
    scanf(" %c", &initial); // %c is used for characters, note the space before %c to consume any leftover newline character

    // Displaying the inputs back to the user
    printf("You are %d years old, %.2f meters tall, and your name starts with '%c'.\n", age, height, initial);

    return 0;
}