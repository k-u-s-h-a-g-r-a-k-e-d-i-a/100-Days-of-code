// Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[200], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // take full line input

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);   // read a single character

    // loop through the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
