///Write a Program that Finds a Count of Small Letters in a String.

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
        if(Str[i] >= 'a' && Str[i]<='z')
        {
            Count++;
        }
        i++;
    }
    printf("\n\n Count of Small Letters in %s: %d",Str,Count);
    return 0;
}
