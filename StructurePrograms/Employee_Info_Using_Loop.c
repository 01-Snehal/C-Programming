///Write a program to store the information of 3 Employees by using structure using loop.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Employees
{
    int Employee_ID;
    char Name[50];
    int Salary;
};

int main()
{
    int i;
    struct Employees e1[5] = {};

    printf("\n\n <<<<<<<<<< ENTER 5 EMPLOYEE DETAILS >>>>>>>>>>");

    for(i = 0; i < 5; i++)
    {
        printf("\n\n Enter Employee ID: ");
        scanf("%d",&e1[i].Employee_ID);

        getchar();

        printf("\n Enter Emplyee Name: ");
        fgets(e1[i].Name,sizeof(e1[i].Name), stdin);

        printf("\n Enter Employee Salary: ");
        scanf("%d",&e1[i].Salary);

    }

    printf("\n\n Enter any key to see the Employee Details -> ");
    getch();

    system("cls");

    printf("\n\n <<<<<<<<<< EMPLOYEE DETAILS >>>>>>>>>>");

    for(i = 0; i < 5; i++)
    {
        printf("\n Employee ID : %d", e1[i].Employee_ID);
        printf("\n Employee Name : %s",e1[i].Name);
        printf("\n Employee Salary : %d",e1[i].Salary);
        printf("\n\n ===================================");
    }
    printf("\n\n THANK YOU");
}
