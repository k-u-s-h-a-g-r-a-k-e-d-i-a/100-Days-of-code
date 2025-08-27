//Day 4
//Q8
//Write a program to find and display the sum of the first n natural numbers

#include <stdio.h>

int main()
{
    int n, sum = 0, i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Method 1: Using loop
    for(i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    
    // Method 2: Using formula (alternative approach)
    int formula_sum = n * (n + 1) / 2;
    printf("Using formula: Sum = %d\n", formula_sum);
    
    return 0;
}
