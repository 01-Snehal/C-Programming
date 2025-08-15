/*Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)*/

#include <stdio.h>

int main()
{
    float Area = 0, Radius = 0;

    printf("\n Enter Radius of a Circle: ");
    scanf("%f",&Radius);

    Area = 3.14 * Radius * Radius;
    printf("\n Area of a Circle: %f.", Area);

    return 0;
}
