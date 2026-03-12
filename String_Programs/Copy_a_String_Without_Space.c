///Write a program of a String that copies a String without a space.

#include<stdio.h>
#include<conio.h>

int main()
{
    char Str[40];
    int i = 0, j = 0;

    printf("\n\n Enter a string: ");
    gets(Str);

    printf("\n\n Given String: %s",Str);
    while(Str[i] != '\0')
    {
        if(Str[i] != ' ')
        {
            Str[j] = Str[i];
            j++;
        }
        i++;
    }

    Str[j] = '\0';

    printf("\n\n=================================================");
    printf("\n\n String Without any Space : %s", Str);
     printf("\n\n=================================================");

    return 0;
}
