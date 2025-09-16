// Write a C program that calculates a person's Body Mass Index (BMI) and classifies their weight.
// The program should prompt the user for their weight in kilograms (kg) and height in meters (m).
// The BMI formula is: BMI = weight / (height * height).
// Use floating-point variables for weight, height, and BMI.
// Classify the BMI using the following ranges:
// - Underweight: BMI < 18.5
// - Normal weight: 18.5 <= BMI < 25.0
// - Overweight: 25.0 <= BMI < 30.0
// - Obese: BMI >= 30.0
// Print the calculated BMI and its corresponding classification.
// ----------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main() {
    
    float height,weight,BMI;
    printf("enter your weight: " );
    scanf("%f", &weight);     
    printf("enter your height: ");
    scanf("%f", &height) ;   

    BMI = weight/pow(height,2);
    
    if (BMI < 18.5){
        printf("Underweight");
    }else if (BMI >= 18.5 && BMI <25){
        printf("Normal weight");
    }else if (BMI >= 25 && BMI<30){
        printf("Over weight");
    }else if (BMI >= 30){
        printf("obese");
    }

    return 0;
}
