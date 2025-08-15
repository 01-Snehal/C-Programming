/// Write a program to find the character for an ASCII value provided by the user and display the result.

#include <stdio.h>

int main()
{
    int asciiValue;
    char character;

    printf("Enter an ASCII Value: ");
    scanf("%d", &asciiValue);

    // Convert to character
    character = (char)asciiValue;

    printf("The character for ASCII value %d is: '%c'\n", asciiValue, character);

    return 0;
}
