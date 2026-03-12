///Write a Program that Converts a Lowercase String to UpperCase.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char Str[20] = {'\0'};

    printf("\n\n Enter a String: ");
    gets(Str);

    for(int i = 0; Str[i] != '\0'; i++)
    {
        Str[i] = toupper(Str[i]);
    }
    printf("\n\n String in Lowercase is = %s",Str);
    return 0;
}
