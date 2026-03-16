///Write a program that Counts a Words in given String .

#include<stdio.h>
#include<conio.h>

int Word_Count(char *);

int main()
{
    char Str[40] = {'\0'};
    int Letter_Count = 0;

    printf("\n\n Enter a String: ");
    gets(Str);

    Letter_Count = Word_Count(Str);
    printf("\n\n Count of Capital Letters is: %d",Letter_Count);

}
int Word_Count(char *iStr)
{
    int i = 0, Count = 0;
    while(iStr[i] != '\0')
    {
        if(iStr[i] >= 'a' && iStr[i] <= 'z')||(iStr[i] >= 'A' && iStr[i] < 'Z')

        {
          Count++;
        }
        i++;
    }
    return Count;
}
