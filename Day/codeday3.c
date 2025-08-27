//Day 3
//Q5(User Inputs, Operations & Output)
//Write a program to convert temperature from Celsius to Fahrenheit..
#include <stdio.h>

int main()
{
    
    float cel,fr;
    
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cel);
    fr = (cel*9/5)+32;
    printf("Temperature in Farenheit: %f\n", fr);

    
    return 0;
}
