///Write a program without Initialization (Null Initialization) by using Function.

#include<stdio.h>
#include<conio.h>
#define Size 5

void Array_Display(int Arr[]);

int main()
{
    int Array[Size] = {};

    printf("\n\n Null Initialization: ");

    Array_Display(Array);
}
void Array_Display(int Arr[])
{
    int i = 0;
    for(i = 0; i < Size; i++)
    {
        printf("\n\n Array Elements: %d",Arr[i]);

    }
}
