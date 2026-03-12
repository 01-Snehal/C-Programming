///Write a Program that Finds a Count of Digits in a String.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Str[20] = {'\0'};
    int Count, i = 0;

    printf("\n\n Enter your Password that Contains atleast One Special Symbol and 0-9 Digit : ");
    gets(Str);

    while(Str[i] != '\0')
    {
        if(Str[i] >= '0' && Str[i] <= '9')
        {
            Count++;
        }
        i++;
    }
    printf("\n\n Count of Digits in Your Password is: %d",Count);
    return 0;
}
