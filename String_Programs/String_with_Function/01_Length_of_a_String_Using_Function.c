//Write a Program that Finds a Length of a String by Using User Defined Function.

#include<stdio.h>
#include<conio.h>

int Find_Length(char *);

int main()
{
    char Str[40] = {'\0'};
    int Result = 0;

    printf("\n\n Enter a String : ");
    gets(Str);

    Result = Find_Length(Str);

    printf("\n\n Length of Given String is : %d\n\n",Result);

    return 0;
}

int Find_Length(char *iStr)
{
    int i = 0;
    while(iStr[i] != '\0')
    {
        i++;
    }

    return i;
}
