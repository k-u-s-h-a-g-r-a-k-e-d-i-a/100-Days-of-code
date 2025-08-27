//Day 6
// Q11 (Conditional Statements)
//Write a program to input an integer and check whether it is even or odd using if–else
#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter an Integer: ");
    scanf("%d", &a);
    
    if (a % 2 == 0) {
        printf("Integer is even\n");
    }
    else {
        printf("Integer is odd\n");
    }
    
    return 0;
}
