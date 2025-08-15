/* Write a program that accepts the side length of a square from the user and calculates its
area. (Area of Square = Side * Side) */
#include <stdio.h>

int main()
{
    float side, area;

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("The area of the square is: %.2f\n", area);

    return 0;
}

