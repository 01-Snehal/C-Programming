/* Write a program that accepts three numbers from the user and swaps their values such that
the value of the first number goes to the second, the second goes to the third, and the third
goes to the first.*/

#include<stdio.h>
int main()
{
    int Num1,Num2,Num3,Temp = 0;

    printf("\n Enter First Number: ");
    scanf("%d",&Num1);

    printf("\n Enter Second Number: ");
    scanf("%d",&Num2);

    printf("\n Enter Third Number: ");
    scanf("%d",&Num3);

    printf("\n Values Before Swapping = %d, %d, %d. ", Num1,Num2,Num3);

    Temp = Num1;
    Num1 = Num2;
    Num2 = Num3;
    Num3 = Temp;

    printf("\n\n Values After Swapping = %d, %d, %d",Num1,Num2,Num3);

    return 0;
}

