#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, k, space=10;
    for (i=0;i<=5;i++)
    {
        for (k=0;k<space;k++)
        {
         printf(" ");
        }
        for (j=0;j<2*i-1;j++)
        {
                printf("*");
        }

        space--;
        printf("\n");
    }
}

