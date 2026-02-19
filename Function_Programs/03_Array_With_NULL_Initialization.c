///Write a program that Initializes NULL Values and display it using function.

#include<stdio.h>
#include<conio.h>
#define Size 5

void Array_Display(int Arr[]);

int main()
{
    int Array[Size] = {0};

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
