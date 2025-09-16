//Q38 (Loops without Arrays/Strings)
//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int a ,digit, temp,sum=0;
    printf("Enter any number=");
    scanf("%d",&a);
    temp = a;
    while (temp > 0){
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    printf("%d",sum);
    return 0;
}
