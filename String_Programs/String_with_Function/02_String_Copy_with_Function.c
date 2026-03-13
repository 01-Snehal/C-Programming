//Write a Program that Copies a First String into Second String by Using User Defined Function.

#include<stdio.h>
#include<conio.h>

int Str_Copy(char *,char *);

int main()
{
    char Src[40] = {'\0'};
    char Dest[40] = {'\0'};

    printf("\n\n Enter a Source String : ");
    gets(Src);

    Str_Copy(Src,Dest);

    printf("\n----------------------------------------------");
    printf("\n\n Given Source String is         : %s",Src);
    printf("\n\n Destination (Copied) String is : %s",Dest);
    printf("\n----------------------------------------------");
    return 0;
}

int  Str_Copy(char *iSrc, char *iDest)
{
    int i = 0;
    while(iSrc[i] != '\0')
    {
        iDest[i] = iSrc[i];
        i++;
    }

    return i;
}
