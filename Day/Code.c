//Day 1 
// Q2 (User Inputs, Operations & Output)
// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
int a , b , Sum,Multi , div,diff;
printf("Enter two numbers:");
scanf("%d %d", &a , &b);
Sum = a + b;
Multi = a * b;
diff = a - b;
div = a/b;
printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", Sum, diff, Multi, div);
 return 0;

}