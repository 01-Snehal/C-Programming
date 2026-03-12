///Write a Program that Copies a String into Another.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char U_Name[20] = "Unknown User";
    char L_Name[20] = "Bhandare";

    printf("\n\n Current User : %s",U_Name);

    printf("\n\n Enter any key to see the Username : ");
    getch();

    strcpy(U_Name,"Snehal");

    printf("\n\n Username : %s %s",U_Name,L_Name);

    return 0;
}
