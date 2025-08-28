//Day 4
//Q8
//Write a program to find and display the sum of the first n natural numbers
#include <stdio.h>
int main()
{
    int n, sum = 0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Method 1: Using formula
    int formula_sum = n * (n + 1) / 2;
    printf("Using formula: Sum = %d\n", formula_sum);
    
    // Method 2: Using loop (alternative approach)
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Using loop: Sum = %d\n", sum);
    
    return 0;
}
