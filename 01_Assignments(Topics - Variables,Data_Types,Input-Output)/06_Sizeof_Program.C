///Write Program to print size of int, float, double, etc.

#include <stdio.h>

int main()
{
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));

    return 0;
}

