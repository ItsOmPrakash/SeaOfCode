// Write a C program that converts a temperature from Fahrenheit to Celsius. 
// The program should ask the user to input a temperature in Fahrenheit (a floating-point number), 
// perform the conversion, and print the result. 
// The formula for conversion is C=(F−32)∗5/9.

// ---------------------------------------------------------------------------------------------

#include <stdio.h>
     int main(){
         
        float temp_fahrenheit, temp_celsius;
        printf("whats the temperature: ");
        scanf("%f", &temp_fahrenheit);
        temp_celsius = (temp_fahrenheit-32)*5/9;
        printf("Temprature in fahrenheit is %f and temprature in celsius is %f", temp_fahrenheit ,temp_celsius );

        return(0);
     }