//Write a program which prints a Name by using gets and puts in C.

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = {'\0'};
    int Mob_No = 0;
    char City[20] = {'\0'};

    printf(" Enter Your Name: ");
    gets(Name);

    printf("\n Enter Mobile Number: ");
    scanf("%d",&Mob_No);

    printf(" Enter Your City: ");
    gets(City);

    printf("\n===============================\n");
    printf("\n Name = ");
    puts(Name);
    printf("\n Mobile Number = %d",Mob_No);
    printf("\n City = %s",City);
    return 0;
}
