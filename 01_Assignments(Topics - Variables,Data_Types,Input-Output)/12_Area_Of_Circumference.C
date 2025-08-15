/* Write a program which accept radius of circle from user and calculate its Circumference.
Consider value of PI as 3.14. (Circumference =  2 * PI * Radius)*/

#include<stdio.h>
int main()
{
    float Radius,Circumference = 0;

    printf("\n Enter Radius of a Circle: ");
    scanf("%f",&Radius);

    Circumference = 2 * 3.14 * Radius;

    printf("\n Area of Circumference = %f.\n ",Circumference);
}
