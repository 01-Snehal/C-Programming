///Write a program that Counts a Words in given String .

#include<stdio.h>
#include<conio.h>

int Small_Count(char *);

int main()
{
    char Str[40] = {'\0'};
    int Letter_Count = 0;

    printf("\n\n Enter a String: ");
    gets(Str);

    Letter_Count = Small_Count(Str);
    printf("\n\n Count of Words in Given String: %d",Letter_Count);

}
int Small_Count(char *iStr)
{
    int i = 0, Count = 0;
    while(iStr[i] != '\0')
    {
        if(iStr[i] >= 'a' && iStr[i] <= 'z')
        {
          Count++;
        }
        i++;
    }
    return Count;
}
