///Write a program to find out ASCII value of given input from the user and display the result.

#include<stdio.h>
int main()
{
    char ch = '\0';

    printf("\n Enter a Character: ");
    scanf("%c",&ch);

    printf("ASCII value of given Character %c is: %d.",ch,ch);
    return 0;

}
