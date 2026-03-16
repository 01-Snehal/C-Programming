//Write a program that Counts a Digits in Given String.


#include<stdio.h>
#include<conio.h>

int Digit_Count(char *);

int main()
{
    char Str[40] = {'\0'};
    int Letter_Count = 0;

    printf("\n\n Enter a String: ");
    gets(Str);

    Letter_Count = Digit_Count(Str);
    printf("\n\n Count of Digits in Given String: %d",Letter_Count);

}
int Digit_Count(char *iStr)
{
    int i = 0, Count = 0;
    while(iStr[i] != '\0')
    {
        if(iStr[i] >= '0' && iStr[i] <= '9')
        {
          Count++;
        }
        i++;
    }
    return Count;
}
