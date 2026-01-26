///Write a C program of Structure.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stud
{
    int Roll_No;
    char Name[40];
    long long int Mobile_Number;
    float Percentage;
};
int main()
{
    struct Stud s1 = {};
       printf("\n *********************************************");
       printf("\n             Student Information");
       printf("\n *********************************************");

       printf("\n\n Enter Student's Roll Number: ");
       scanf("%d",&s1.Roll_No);

       getchar();

       printf("\n Enter Student's Name: ");
       fgets(s1.Name, sizeof(s1.Name), stdin);

       printf("\n Enter Student's Mobile Number: ");
       scanf("%lld",&s1.Mobile_Number);

       printf("\n Enter Student's Percentage: ");
       scanf("%f",&s1.Percentage);

       printf("\n\n Student Details are: ");

       printf("\n\n Roll_Number : %d",s1.Roll_No);
       printf("\n Name          : %s",s1.Name);
       printf("\n Mobile Number : %lld",s1.Mobile_Number);
       printf("\n Percentage    : %f",s1.Percentage);
}
