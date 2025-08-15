///Write Program to print ASCII table (0-127).

#include<stdio.h>
int main()
{
     int i;

    printf("ASCII Table (0 - 127)\n");
    printf("----------------------\n");
    printf("Dec\tChar\tHex\tOct\n");
    printf("-------------------------------------\n");

    for (i = 0; i <= 127; i++)
        {
            if (i < 32 || i == 127)
            {
                printf("%3d\tNP\t%02X\t%03o\n", i, i, i);
            }
            else
            {
                printf("%3d\t%c\t%02X\t%03o\n", i, i, i, i);
            }
        }
        return 0;
}
