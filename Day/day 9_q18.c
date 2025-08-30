// Write a program to assign grades based on a percentage input.
#include <stdio.h>

int main() {
    float a;
    printf("Enter Percentage:");
    scanf("%f",&a);
    if (a>= 90){
        printf("Grade :A");
    }else if(a>= 80){
        printf("Grade : B");
        
    }else if (a>= 60){
        printf("Grade : C");
    }else if ( a>=50){
        printf("Grade:D");
        
    }else{
        printf("Grade : F");
    }

    return 0;
}
