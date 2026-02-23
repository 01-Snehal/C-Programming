///Write a program that finds a maximum Element in Array By Using Function.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

void Accept_Elements(int Arr[]);
void Display_Elements(int Arr[]);
int Max_Count(int Arr[]);

int main()
{
    int Max_Num , Array_Elements[] = {0};

    printf("\n\n Enter All the Array Elements!!");

    Accept_Elements(Array_Elements);

    printf("\n Enter any key to Display all the Elements: ");
    getch();
    Display_Elements(Array_Elements);

    Max_Num = Max_Count(Array_Elements);
    printf("\n\n Maximum Number is: %d",Max_Num);
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
      printf("\n\n The %d Element is %d",i+1,Arr[i]);
    }
}
int Max_Count(int Arr[])
{
    int Max, i = 0;
    for(i = 0; i < Size; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
}
