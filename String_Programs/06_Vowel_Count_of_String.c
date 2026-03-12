///Write a Program that Finds a Count of Digits in a String.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str[20] = {'\0'};
    int Count = 0, i = 0;

    printf("\n\n Enter a String : ");
    gets(Str);

    while(Str[i] != '\0')
    {
        if(Str[i] == 'a' || Str[i] == 'e' || Str[i] == 'i' || Str[i] == 'o' || Str[i] =='u' ||
           Str[i] == 'A' || Str[i] == 'E' || Str[i] == 'I' || Str[i] == 'O' ||Str[i] == 'U')
        {
            Count++;
        }
        i++;
    }
    printf("\n\n Count of Vowels is: %d",Count);
    return 0;
}
