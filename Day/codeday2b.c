//Day 2
//Q4(User Inputs, Operations & Output)
//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

int main()
{
    int rad;
    float ar;
    
    printf("Enter the radius of circle: ");
    scanf("%d", &rad);
    ar = 3.14*rad*rad;
    printf("Area: %f\n", ar);

    
    return 0;
}
