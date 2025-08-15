///Write a program to accept marks of 3 subjects and calculate and display total and percentage.

#include<stdio.h>
int main()
{
    int Sub1,Sub2,Sub3,Total = 0;
    float Percentage = 0;

    printf("\n Enter Subject1 Marks (C Lang): ");
    scanf("%d",&Sub1);

    printf("\n Enter Subject2 Marks (CPP Lang): ");
    scanf("%d",&Sub2);

    printf("\n Enter Subject3 Marks (Java Lang): ");
    scanf("%d",&Sub3);

    Total = Sub1+Sub2+Sub3;
    Percentage = (Total / 300.0) * 100;;

    printf("\n Total Of Three Subject Marks: %d\n",Total);
    printf("\n Percentage of Marks: %f.\n",Percentage);

    return 0;
}
