/* Write a program which accept width & height of rectangle from user and calculate its area.
(Area = Width * Height) */

#include<stdio.h>
int main()
{
    int Area,Width,Height = 0;

    printf("\n Enter the Width of a Rectangle: ");
    scanf("%d",&Width);

    printf("\n Enter the Height of a Rectangle: ");
    scanf("%d",&Height);

    Area = Width * Height;

    printf("\n Area of Rectangle = %d",Area);
}
