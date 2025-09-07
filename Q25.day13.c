// Q25 (Conditional Statements)
// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    int a, b;
    char opr;
    
    printf("Enter integers and operator = ");
    scanf("%d %d %c", &a, &b, &opr); 
    
    switch (opr) {
        case '+':
            printf("%d", a + b); 
            break;
        case '-':
            printf("%d", a - b);
            break;
        case '*':
            printf("%d", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d", a / b);
            } else {
                printf("Error: Division by zero");
            }
            break; 
        case '%':
            if (b != 0) {
                printf("%d", a % b);
            } else {
                printf("Error: Division by zero");
            }
            break; 
        default:
            printf("Invalid operator");  
            break;
    }
    
    return 0;
}
