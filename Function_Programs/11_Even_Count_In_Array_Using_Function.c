///Write a program that finds a count of Even Numbers is array by using function.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

void Accept_Elements(int Arr[]);
void Display_Elements(int Arr[]);
int Even_Count(int Arr[]);

int main()
{
    int Even_Num , Array_Elements[] = {0};

    printf("\n\n Enter All the Array Elements!!");

    Accept_Elements(Array_Elements);

    printf("\n Enter any key to Display all the Elements: ");
    getch();
    Display_Elements(Array_Elements);
    printf("\n Enter any key to Display all the Elements: ");
    getch();
    Even_Num = Even_Count(Array_Elements);
    printf("\n\n Count of Even Numbers is: %d",Even_Num);
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
      printf("\n\n %d Array Element",Arr[i]);
    }
}
int Even_Count(int Arr[])
{
    int Count, i = 0;
    for(i = 0; i < Size; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            Count++;
        }
    }
    return Count;
}
