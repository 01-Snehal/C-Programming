///Write a program that checks whether given String is Palindrome or Not.

#include<stdio.h>
#include<conio.h>

int Check_Palindrome(char *);

int main()
{
    char Str[40] = {'\0'};

    printf("\n\n Enter a String: ");
    gets(Str);

    Check_Palindrome(Str);

}
int Check_Palindrome(char *iStr)
{
    int i = 0, j = 0;
    while(iStr[i] != '\0')
    {
        i++;
    }
    i--;

    while(j < i)
    {
        if(iStr[i] != iStr[j])
        {
            break;
        }
        j++;
        i--;
    }
    if(j < i)
    {
        printf("\n\n Given String is Not Palindrome!!");
    }
    else
    {
        printf("\n\n Given String is Palindrome");
    }
}
