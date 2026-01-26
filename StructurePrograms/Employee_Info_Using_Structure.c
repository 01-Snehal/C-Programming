///Write a program to store the information of 3 Employees by using structure without loop.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Employee
{
    int Employee_ID;
    char Name[50];
    int Salary;
};

int main()
{
    struct Employee e1[3] = {};

    printf("\n\n Enter 3 Employee Details Carefully!!");

    printf("\n\n Enter First Employee ID : ");
    scanf("%d",&e1[1].Employee_ID);

    getchar();

    printf("\n Enter Name : ");
    fgets(e1[1].Name, sizeof(e1[1].Name), stdin);

    printf("\n Enter Salary : ");
    scanf("%d",&e1[1].Salary);

    printf("\n =========================================");

    printf("\n\n Enter Second Employee ID : ");
    scanf("%d",&e1[2].Employee_ID);

    getchar();

    printf("\n Enter Name : ");
    fgets(e1[2].Name, sizeof(e1[2].Name), stdin);

    printf("\n Enter Salary : ");
    scanf("%d",&e1[2].Salary);

    printf("\n =========================================");

    printf("\n\n Enter Third Employee ID : ");
    scanf("%d",&e1[3].Employee_ID);

    getchar();

    printf("\n Enter Name : ");
    fgets(e1[3].Name, sizeof(e1[3].Name), stdin);

    printf("\n Enter Salary : ");
    scanf("%d",&e1[3].Salary);

    printf("\n Press any key to see All Information of Employees -> ");
    getch();

    system("cls");

    printf("\n\n <<<<<<<<<< EMPLOYEE DETAILS >>>>>>>>>>");

    printf("\n First Employee ID : %d", e1[1].Employee_ID);
    printf("\n First Employee Name : %s",e1[1].Name);
    printf("\n First Employee Salary : %d",e1[1].Salary);

    printf("\n ==========================================");

    printf("\n Second Employee ID : %d", e1[2].Employee_ID);
    printf("\n Second Employee Name : %s",e1[2].Name);
    printf("\n Second Employee Salary : %d",e1[2].Salary);

    printf("\n ==========================================");

    printf("\n Third Employee ID : %d", e1[3].Employee_ID);
    printf("\n Third Employee Name : %s",e1[3].Name);
    printf("\n Third Employee Salary : %d",e1[3].Salary);

    printf("\n ==========================================");

    printf("\n THANK YOU!! ");
}
