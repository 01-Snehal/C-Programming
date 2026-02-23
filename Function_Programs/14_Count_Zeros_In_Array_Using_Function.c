///Write a program that finds a Count of 0's in Givan Array By Using Function.

#include<stdio.h>
#include<conio.h>
#define Size 5

void Accept_Elements(int Arr[]);
void Display_Elements(int Arr[]);
int Zeros_Count(int Arr[]);

int main()
{
    int Count = 0;
    int Elements[] = {0};

    printf("\n\n*****************************************************");
    printf("\n\n Enter All the Array Elements: ");
    printf("\n\n*****************************************************");

    Accept_Elements(Elements);

    printf("\n\n*****************************************************");
    printf("\n\n ARRAY ELEMENTS ARE ");
    printf("\n\n*****************************************************");

    Display_Elements(Elements);

    printf("\n\n Enter any key to get Count of Zero's in above Array: ");
    getch();

    Count = Zeros_Count(Elements);
    printf("\n\n Count of Zero's in above Array is: %d",Count);
}
void Accept_Elements(int Arr[])
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n\n Enter %d Element: ",i+1);
        scanf("%d",&Arr[i]);
    }
}
void Display_Elements(int Arr[])
{
    for(int i = 0; i < Size; i++)
    {
        printf("\n\n The %d Element is :%d ",i+1,Arr[i]);
    }
}
int Zeros_Count(int Arr[])
{
    int Zero_Count = 0;
    for(int i = 0; i < Size; i++)
    {
        if(Arr[i] == 0)
        {
            Zero_Count++;
        }
    }
    return Zero_Count;
}
