/* Write a program that accepts a number from the user and calculates the square of that
number. (Square = Number * Number) */

#include<stdio.h>
int main()
{
    int Number, Square = 0;

    printf("\n Enter a Number: ");
    scanf("%d",&Number);

    Square = Number * Number;

    printf("\n Square root of a given number: %d",Square);
}
