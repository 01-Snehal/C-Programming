//Write a Program to Find Largest Among Given Array Elements.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int Arr[Size],Largest_Element,i=0;

    for(i=0;i<Size;i++)
    {
        printf("\n\n Enter %d Number: ",i+01);
        scanf("%d",&Arr[i]);
    }
    for(i=0;i<Size;i++)
    {
        printf("\n\n Number is : %d ",Arr[i]);
    }
    Largest_Element = Arr[0];
    for(i=0;i<Size;i++)
    {
        if(Largest_Element < Arr[i])
        {
            Largest_Element = Arr[i];
        }
    }
    printf("\n\n Largest Element is %d ",Largest_Element);

}
