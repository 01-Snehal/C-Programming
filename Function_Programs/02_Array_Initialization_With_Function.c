///Write a Program of Array Initialization and Display it by Using Function.

#include<stdio.h>
#include<conio.h>
#define Size 5

void Accept_Values(int Arr[]);
void Display_Values(int Arr[]);

int main()
{
    int Arr_Values[Size] = {0};

    printf("\n Enter All Array Elements: ");

    Accept_Values(Arr_Values);

    printf("\n\n All Array Elements!");

    Display_Values(Arr_Values);
}

void Accept_Values(int Arr[])
{
    int i = 0;
    for(int i = 0; i < Size; i++)
    {
        printf("\n\n Enter %d Element : ",i+1);
        scanf("%d",&Arr[i]);
    }
}

void Display_Values(int Arr[])
{
    int i = 0;
    for(i = 0; i < Size; i++)
    {
        printf("\n\n Array Elements Are: %d",Arr[i]);
    }
}
