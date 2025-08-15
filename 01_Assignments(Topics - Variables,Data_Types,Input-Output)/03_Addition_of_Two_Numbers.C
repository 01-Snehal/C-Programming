///Write a program to add two numbers provided by the user and display the result.

#include<stdio.h>

int main()
{
    int Num1 = 0,Num2 = 0,Addition = 0;

    printf("\n Enter First Number: ");
    scanf("%d",&Num1);

    printf("\n Enter Second Number: ");
    scanf("%d",&Num2);

    Addition = Num1 + Num2;

    printf("\n Addition of two Numbers : %d",Addition);

    return 0;
}
