///Write a C Program to calculate the Student marks using Function.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Calculate_Total(int,int,int);

int main()
{
    int Chem_Marks = 0;
    int Phy_Marks  = 0;
    int Math_Marks = 0;
    int Total_Marks = 0;

    printf("\n\n Enter Marks of Following Subjects!!");

    printf("\n\n Enter Chemistry Marks: ");
    scanf("%d",&Chem_Marks);

    printf("\n\n Enter Physics Marks: ");
    scanf("%d",&Phy_Marks);

    printf("\n\n Enter Maths Marks: ");
    scanf("%d",&Math_Marks);

    system("cls");

    Calculate_Total(Chem_Marks,Phy_Marks,Math_Marks);
}

int Calculate_Total(int Che,int Phy,int Math)
{
    int Total_Marks = 0;
    float Percentage = 0.0;
    Total_Marks = Che + Phy + Math ;
    printf("\n\n Total Marks = %d ",Total_Marks);

    Percentage = (Total_Marks / 300.0 )* 100;
    printf("\n\n Percentage = %.2f",Percentage);

}
