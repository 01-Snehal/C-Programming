//Write a program that Counts a Special Symbols in Given String.


#include<stdio.h>
#include<conio.h>

int Symbol_Count(char *);

int main()
{
    char Str[40] = {'\0'};
    int Letter_Count = 0;

    printf("\n\n Enter a String: ");
    gets(Str);

    Letter_Count = Symbol_Count(Str);
    printf("\n\n Count of Digits in Given String: %d",Letter_Count);

}
int Symbol_Count(char *iStr)
{
    int i = 0, Count = 0;
    int Alpha_count = 0, Special_Symbols = 0;
    while(iStr[i] != '\0')
    {
        if((iStr[i] >= 'a' && iStr[i] <= 'z') || (iStr[i] >= 'A' && iStr[i] <= 'Z'))
        {
           Alpha_count++;
        }
        else if(iStr[i] >= '0' && iStr[i]<='9')
        {
           Count++;
        }
        else if(iStr[i] != '\n' && iStr[i] !=' ')
        {
           Special_Symbols++;
        }
        i++;
    }
    return Special_Symbols;
}
