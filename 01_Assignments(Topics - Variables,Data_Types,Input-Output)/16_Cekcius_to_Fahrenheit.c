/* Write a program which accept temperature in Fahrenheit and convert it into Celsius.
(1 Celsius = (Fahrenheit -32) * (5/9)) */

#include<stdio.h>
int main()
{
    float Fht = 0,Cel = 0;

    printf("\n Enter Temperature in Fahrenheit: ");
    scanf("%f",&Cel);

    Fht = (Cel * (0.9/5.0)) + 32;

    printf("\n Temperature %0.2f Celcius = %0.2f Fahrenheit ",Cel,Fht);
    return 0;

}
