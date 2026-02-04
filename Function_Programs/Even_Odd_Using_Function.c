///Write a Program to find whether a given number is Even or Odd using Function.

#include<stdio.h>
#include<conio.h>

int EvenOdd(int);

int main()
{
    int No;

    printf("\n\n Enter a Number: ");
    scanf("%d",&No);

    EvenOdd(No);
}

int EvenOdd(int No1)
{

    if(No1 % 2 == 0)
    {
        printf("\n %d Number is Even!!",No1);
    }
    else
    {
        printf("\n\n %d Number is Odd!!",No1);
    }
}
