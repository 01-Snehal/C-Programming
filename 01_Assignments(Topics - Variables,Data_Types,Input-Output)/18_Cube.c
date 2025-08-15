/* Write a program that accepts a number from the user and calculates the cube of that
number. (Cube = Number * Number * Number) */

#include<stdio.h>
int main()
{
    int Number, Cube = 0;
    printf("\n Enter a Number: ");
    scanf("%d",&Number);

    Cube = Number * Number * Number;

    printf("\n Cube of a Given Number = %d",Cube);
}
