//Write a program to find Even and Odd by using given array elements.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int Arr[Size],i=0,Even_count,Odd_count;

    printf("\n\n Enter Array Elements:");

    for(i = 0; i < Size; i++)
    {
        printf("\n\n Enter [%d] Element : ",i);
        scanf("%d",&Arr[i]);
    }

    printf("\n\n Array Elements!");

    for(i = 0; i<Size;i++)
    {
        printf("\n\n Element %d",Arr[i]);
    }

    printf("\n\n***Even Odd Count***");
    for(i=0;i<Size;i++)
    {
        if(Arr[i] % 2 == 0)
        {
            Even_count++;
        }
        else
        {
           Odd_count++;
        }
    }
    printf("\n\n Even Elements Count: %d \n\n Odd Elements Count: %d",Even_count,Odd_count);
}
