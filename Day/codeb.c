//Day 1 
// Q2 (User Inputs, Operations & Output)
// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main()
{
int a , b , Sum ,pro,diff,div;
printf("Enter two numbers:");
scanf("%d %d", &a , &b);
Sum = a + b;
pro = a*b;
diff = a-b;
div= a/b;
printf("Sum=%d", "difference=%d", "Product=%d","Division=%d" ,Sum,diff,pro,div);
 return 0;

}
