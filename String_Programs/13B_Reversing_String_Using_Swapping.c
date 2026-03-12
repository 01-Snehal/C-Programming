///Write a program that Reverses a String without using in-built function.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str1[40] = {'\0'};
    char Temp = '\0';
    int i = 0, j = 0;

    printf("\n\n Enter a String: ");
    gets(Str1);

    while(Str1[i] != '\0')
    {
        i++;
    }
    i--;

    while(i > j)
    {
        Temp = Str1[i];
        Str1[i] = Str1[j];
        Str1[j] = Temp;
        j++;
        i--;
    }
    //Str2[j] = '\0';

    printf("\n\n=================================================");
    printf("\n\n Reversed String is : %s",Str1);
    printf("\n\n=================================================");
    return 0;
}
