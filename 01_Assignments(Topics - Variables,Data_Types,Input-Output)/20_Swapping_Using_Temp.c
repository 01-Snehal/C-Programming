/// Write a program that accepts two numbers from the user and swaps their values.

#include<stdio.h>
int main()
{
    int Num1,Num2,Temp = 0;

    printf("\n Enter First Number: ");
    scanf("%d",&Num1);

    printf("\n Enter Second Number: ");
    scanf("%d",&Num2);

    printf("\n Values Before Swapping = %d,%d. ", Num1,Num2);

    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;

    printf("\n\n Values After Swapping = %d,%d",Num1,Num2);

}
