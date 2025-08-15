/* Write a program which accept distance in kilometer and convert it into meter.
 (1 kilometer = 1000 Meter) */

#include<stdio.h>
int main()
{
    float Kilometer,Meter = 0.0;

    printf("\n Enter the Length in Kilometers: ");
    scanf("%f",&Kilometer);

    Meter = Kilometer * 1000;

    printf("\n Result in Kilometer to Meter = %.2f ", Meter);

    return 0;
}
