/*Write a program to accept a number from the user and calculate the square root of that
number, then display the result. (SquareRoot = sqrt(No)) */

#include<stdio.h>
#include<math.h>
int main()
{
    int Number,Square_root= 0;

    printf("\n Enter a Number: ");
    scanf("%d",&Number);

    Square_root = sqrt(Number);

    printf("\n Square root of a given Number = %d",Square_root);
}
