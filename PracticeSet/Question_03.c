// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include <stdio.h>
    int main(){
        float Celsius, Fahrenheit;
        printf("whats the temprature: ");
        scanf("%f",&Celsius);
        //formula to convert Celsius to Fahrenheit is F = (9/5 × °C) + 32
        Fahrenheit = (float)(Celsius*9/5)+ 32;
        printf("Centigrade degrees temperature to Fahrenheit is %f", Fahrenheit);

        return 0;
    }