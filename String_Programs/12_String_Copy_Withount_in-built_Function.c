///Write a program that copies first String into Second String without using in-built function.

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
        Str2[j] = Str1[i];
        i++;
        j++;
    }

    printf("\n\n Given String is : %s",Str1);
    printf("\n\n Copied String is : %s",Str2);

    return 0;
}
