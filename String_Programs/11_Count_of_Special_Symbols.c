///Write a Program that Finds a Count of Special Symbols in a String.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str[20] = {'\0'};
    int Count = 0, i = 0;
    int Alpha_count = 0, Special_Symbols = 0;

    printf("\n\n Enter a Password : ");
    gets(Str);

    while(Str[i] != '\0')
    {
        if((Str[i] >= 'a' && Str[i] <= 'z') || (Str[i] >= 'A' && Str[i] <= 'Z'))
        {
           Alpha_count++;
        }
        else if(Str[i] >= '0' && Str[i]<='9')
        {
           Count++;
        }
        else if(Str[i] != '\n' && Str[i] !=' ')
        {
           Special_Symbols++;
        }
        i++;
    }
    printf("\n\n Count of Special Symbols in %s: %d",Str,Special_Symbols);
    return 0;
}
