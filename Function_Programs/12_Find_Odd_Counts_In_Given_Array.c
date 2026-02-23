//Write a program that takes an input array and finds the count of Odd Numbers in That array using Function.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define  Size  5

void Accept_Elements(int Arr[]);
void Display_Elements(int Arr[]);
int Odd_Count(int Arr[]);

int main()
{
    int O_Count = 0;
    int Elements[] = {0};

    printf("\n************************************");
    printf("\n\n Enter All the Array Elements:  !!");
    printf("\n\n************************************");

    Accept_Elements(Elements);

    printf("\n===========================");
    printf("\n\n YOUR ARRAY ELEMENTS ARE ");
    printf("\n===========================");

    Display_Elements(Elements);
    printf("\n===========================");

    printf("\n\n Enter any key to get Count of Odd Numbers: ");
    getch();
    O_Count = Odd_Count(Elements);
    printf("\n\n Count of Odd Numbers is: %d",O_Count);
}

void Accept_Elements(int Arr[])
{
    int i = 0;
    for(i = 0; i < Size; i++)
    {
        printf("\n\n Enter %d Element : ",i+1);
        scanf("%d",&Arr[i]);
    }
}
void Display_Elements(int Arr[])
{
    int i = 0;
    for(i = 0; i < Size; i++)
    {
        printf("\n\n %d Element is : %d",i+1,Arr[i]);
    }
}
int Odd_Count(int Arr[])
{
    int i = 0;
    int Count = 0;
    for(i = 0; i < Size; i++)
    {
       if(Arr[i] % 2 != 0)
       {
           Count++;
       }
    }
    return Count;
}
