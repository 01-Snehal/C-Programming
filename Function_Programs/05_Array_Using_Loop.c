///Write a program which accepts an array Elements from user with loop and display it By Using Function.

#include<stdio.h>
#include<conio.h>

void Accept_Elements(int Arr[]);
void Display_Elements(int Arr[]);

int main()
{
    int Arr_Elements[5] = {0};
    printf("\n\n Enter Array Elements: ");

    Accept_Elements(Arr_Elements);

    printf("\n\n Array Elements Are Displayed as following: ");

    Display_Elements(Arr_Elements);

    return 0;
}

void Accept_Elements(int Arr[])
{
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        printf("\n\n Enter %d Element: ",i+1);
        scanf("%d",&Arr[i]);
    }
}
void Display_Elements(int Arr[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("\n\n Your Array Elements Are: %d",Arr[i]);
    }
}

