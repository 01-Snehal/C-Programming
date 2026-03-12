///Write a Program that finds a Count of Capital Letter, Small Letters, Space and Digits in a String.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str[20] = {'\0'};
    int Digit_Count = 0;
    int Cap_Letter = 0;
    int Small_Letter = 0;
    int Space = 0;
    int i = 0;

    printf("\n\n Enter a String :");
    gets(Str);

    while(Str[i] != '\0')
    {
        if(Str[i] >= '0' && Str[i] <= '9')
        {
            Digit_Count++;
        }
        else if(Str[i] >= 'A' && Str[i] <= 'Z')
        {
            Cap_Letter++;
        }
        else if(Str[i] >= 'a' && Str[i] <= 'z')
        {
           Small_Letter++;
        }
         else if(Str[i] == ' ')
        {
            Space++;
        }
        i++;
    }
    printf("\n\n Count of Digits is         : %d", Digit_Count);
    printf("\n\n Count of Capital Letters is: %d", Cap_Letter);
    printf("\n\n Count of Small Letters is  : %d", Small_Letter);
    printf("\n\n Count of White Spaces is   : %d", Space);

    return 0;
}

