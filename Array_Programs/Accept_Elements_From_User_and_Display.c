//Write a program to Accept the array elements from the user and display it.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
    int Arr[Size],i = 0;
    printf("\n Enter Array Elements: ");

    for(i = 0; i < Size; i++)
    {
        printf("\n\n Enter Element No [%d] : ",i+101);
        scanf("%d",&Arr[i]);
    }
    printf("\n\n Array Elements Are: ");

    for(i = 0;i < Size;i++)
    {
        printf("\n\n Element of %d : %d",i+101,Arr[i]);
    }
}
