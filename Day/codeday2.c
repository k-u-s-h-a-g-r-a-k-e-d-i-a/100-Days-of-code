//Day 2
//Q3 (User Inputs, Operations & Output)
//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(){
    int a, b, Peri;
    
    printf("Enter the length of rectangle: ");
    scanf("%d", &a);
    
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);
    
    Peri = 2 * (a + b);
    
    printf("Area: %d\n", a * b);
    printf("Perimeter: %d\n", Peri);
    
    return 0;
}
