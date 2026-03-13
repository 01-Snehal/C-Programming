//Write a program that Counts a Vowels of a String using Function.

#include<stdio.h>
#include<conio.h>

int Cnt_Vowels(char *);

int main()
{
    char Str[40] = {'\0'};
    int Result = 0;

    printf("\n\n Enter a String: ");
    gets(Str);

    Result = Cnt_Vowels(Str);

    printf("\n\n Count of Vowels is: %d",Result);
}
int Cnt_Vowels(char *iStr)
{
    int i = 0, Count = 0;

    while(iStr[i] != '\0')
    {
        if(iStr[i] == 'a' || iStr[i] == 'e' || iStr[i] == 'i' || iStr[i] == 'o' || iStr[i] == 'u' ||
           iStr[i] == 'A' || iStr[i] == 'E' || iStr[i] == 'I' || iStr[i] == 'O' || iStr[i] == 'U')
        {
            Count++;
        }
        i++;
    }
    return Count;
}
