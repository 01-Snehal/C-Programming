///Write a program that finds a length of a string.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str[20] = {'\0'};
    int Result = 0;

    printf("\n\n Enter a String: ");
    gets(Str);

    printf("\n\n Enter any key to see the length of a String : ");
    getch();

    Result = strlen(Str);
    printf("\n\n Length of given %s Value is : %d",Str,Result);

    return 0;
}
