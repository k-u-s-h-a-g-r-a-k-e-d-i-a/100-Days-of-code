// Day 5
// Q10 (User Inputs, Operations & Output)
// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main()
{
    int sec, hours, minutes, seconds;
    
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    
    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;
    sec = sec % 3600;
    minutes = sec / 60;
    seconds = sec % 60;
    
    printf("Time format: %02d:%02d:%02d\n", hours, minutes, seconds);
    
    return 0;
}
