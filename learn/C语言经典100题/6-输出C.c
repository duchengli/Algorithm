#include <stdio.h>

int main()
{
    int m = 5;

    for (int i = 0; i <= m; i++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < m - 1; i++)
    {
        printf("*\n");
    }

    for (int i = 0; i <= m; i++)
    {
        printf("*");
    }
    printf("\n");
    printf("\n");
}