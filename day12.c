// Q23 (Conditional Statements)
// Write a program to calculate a library fine based on late days.
#include <stdio.h>
#include <math.h>
int main(){
    int days;
    printf("Enter number of late days: ");
    scanf("%d",&days);
    if (days <= 30) {
    printf("Fine: %d", days*2);
    }
    else {
        printf("Membership Cancelled");
    }
    return 0;
}
