/// Write a program to print swapping of two numbers by using Function.( Issue : Swapping does not happen )

#include<stdio.h>
#include<conio.h>

void Swap(int , int);

int main()
{
    int N1 = 0;
    int N2 = 0;

    printf("\n Enter First Number: ");
    scanf("%d",&N1);

    printf("\n Enter Second Number: ");
    scanf("%d",&N2);

    printf("\n\n Values Before Swapping : %d ,%d ",N1,N2);

    Swap(N1,N2);

    printf("\n Values After Swapping : %d ,%d ",N1,N2);

    getch();
    return 0;

}

void Swap(int No1, int No2)
{
    int Temp = 0;

    Temp = No1;
    No1  = No2;
    No2  = Temp;
}
