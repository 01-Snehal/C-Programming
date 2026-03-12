///Write a Program that Finds a Count of Capital Letters in a String.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str[20] = {'\0'};
    int Count, i = 0;

    printf("\n\n Enter a String : ");
    gets(Str);

    while(Str[i] != '\0')
    {
        if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Count++;
        }
        i++;
    }
    printf("\n\n Count of Capital Letters in %s: %d",Str,Count);
    return 0;
}
