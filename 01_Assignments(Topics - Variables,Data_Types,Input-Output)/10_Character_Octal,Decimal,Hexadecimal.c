///Write a program to accept a character and give its Octal,Decimal,Hexadecimal Values.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Decimal      : %d\n", ch);
    printf("Hexadecimal  : 0X%02X\n", ch);
    printf("Octal        : 0%o\n", ch);

    return 0;
}
