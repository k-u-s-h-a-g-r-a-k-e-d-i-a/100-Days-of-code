// Q39 (Loops without Arrays/Strings)
// Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int a,product=1;
    scanf("%d",&a);
    while (a > 0) ;
    {
        int digit = a % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        a /= 10;
    }
    return 0;
}
