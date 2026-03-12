///Write a program that Reverses a String without using in-built function.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str1[40] = {'\0'};
    char Str2[40] = {'\0'};
    int i = 0, j = 0;

    printf("\n\n Enter a String: ");
    gets(Str1);

    while(Str1[i] != '\0')
    {
        i++;
    }
    i--;

    while(i >= 0)
    {
        Str2[j] = Str1[i];
        i--;
        j++;
    }
    Str2[j] = '\0';

    printf("\n\n=================================================");
    printf("\n\n Given String is : %s",Str1);
    printf("\n\n Reversed String is : %s",Str2);
    printf("\n\n=================================================");
    return 0;
}
