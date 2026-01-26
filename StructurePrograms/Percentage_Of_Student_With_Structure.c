///Write a program by using a structure to print marks and total and percentage of a student.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Student
{
    int Roll_No;
    char Name[50];
    float Maths;
    float Chemistry;
    float Physics;
    int total;
    float Percentage;
};
int main()
{
    struct Student s1 = {};
    printf("\n\n ********** Student Marksheet Information **********");

    printf("\n\n Enter Roll Number: ");
    scanf("%d",&s1.Roll_No);

    getchar();

    printf("\n Enter Name: ");
    fgets(s1.Name, sizeof(s1.Name), stdin);

    printf("\n Enter Maths Marks: ");
    scanf("%f",&s1.Maths);

    printf("\n Enter Chemistry Marks: ");
    scanf("%f",&s1.Chemistry);

    printf("\n Enter Physics Marks: ");
    scanf("%f",&s1.Physics);

    printf("\n Enter any key to see the total and percentage of Marks: ");
    getch();

    system("cls");

    s1.total = s1.Maths+s1.Chemistry+s1.Physics;
    printf("\n\n ********** Total Result **********");
    printf("\n\n Total = %d", s1.total);

    s1.Percentage = (s1.total / 300.0) * 100;
    printf("\n\n Percentage = %f",s1.Percentage);

    if(s1.Percentage >= 35)
    {
        printf("\n\n Pass");
    }
    else
    {
        printf("\n\n Fail");
    }
}
