//Write a Program that Reverses a String by Using User Defined Function.

#include<stdio.h>
#include<conio.h>

int Str_Rev(char *,char *);

int main()
{
    char Src[40] = {'\0'};
    char Dest[40] = {'\0'};

    printf("\n\n Enter a Source String : ");
    gets(Src);

    Str_Rev(Src,Dest);

    printf("\n----------------------------------------------");
    printf("\n\n Given Source String is : %s",Src);
    printf("\n\n Reversed String is     : %s",Dest);
    printf("\n----------------------------------------------");
    return 0;
}

int  Str_Rev(char *iSrc, char *iDest)
{
    int i = 0, j = 0;

    while(iSrc[i] != '\0')
    {
        i++;
    }
    i--;
    while(iSrc[i] >= 0)
    {
        iDest[j] = iSrc[i];
        i--;
        j++;
    }

    return i;
}
