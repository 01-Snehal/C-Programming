///Write a program to multiply two numbers provided by the user and display the result

#include<stdio.h>

int main()
{
    int Num1,Num2,Multiplication = 0;

    printf("Enter First Number: ");
    scanf("%d",&Num1);

    printf("\n Enter Second Number: ");
    scanf("%d",&Num2);

    Multiplication = Num1 * Num2;

    printf("\nMultiplication of Two Numbers = %d\n",Multiplication);

}
