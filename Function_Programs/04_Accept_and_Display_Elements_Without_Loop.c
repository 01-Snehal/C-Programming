///Write a program that Accepts Values from User abd Display it using Function without Loop.

#include<stdio.h>
#include<conio.h>
#define Size 3

void Accept_Values(int Arr[]);
void Display_Values(int Arr[]);

int main()
{
    int Arr_Values[Size] = {0};

    printf("\n\n Enter All Array Elements!!");

    Accept_Values(Arr_Values);

    printf("\n\n Elements Are: ");

    Display_Values(Arr_Values);
}

void Accept_Values(int Arr[])
{
    printf("\n\n Enter First Element: ");
    scanf("%d",&Arr[0]);
    printf("\n\n Enter Second Element: ");
    scanf("%d",&Arr[1]);
    printf("\n\n Enter Third Element: ");
    scanf("%d",&Arr[2]);
}
void Display_Values(int Arr[])
{
    printf("\n\n First Element : %d ",Arr[0]);
    printf("\n\n Second Element: %d ",Arr[1]);
    printf("\n\n Third Element : %d ",Arr[2]);
}
