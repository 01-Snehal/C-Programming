///Write a program to find Maximum Number among three numbers.

#include<stdio.h>
#include<conio.h>

int MaxNum(int,int,int);

int main()
{
    int No1,No2,No3 = 0;

    printf("\n\n Enter First Number: ");
    scanf("%d",&No1);

    printf("\n\n Enter Second Number: ");
    scanf("%d",&No2);

    printf("\n\n Enter Third Number: ");
    scanf("%d",&No3);

    MaxNum(No1,No2,No3);
}

int MaxNum(int N1, int N2,int N3)
{
    if(N1 == N2 && N1 == N3 && N2 == N1 && N2 == N3 && N3 == N1 && N3 == N2)
    {
        printf("\n\n Numbers Are Equal!!");
    }
    else if(N1 > N2 && N1 > N3)
    {
        printf("\n\n %d Number 1 Is Greater!",N1);
    }
    else if(N2 > N1 && N2 > N3)
    {
        printf("\n\n %d Number 2 is Greater!",N2);
    }
    else
    {
        printf("\n\n %d : Number 3 is Greater!",N3);
    }

}
