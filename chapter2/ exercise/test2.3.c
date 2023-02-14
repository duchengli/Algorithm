#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // printf("%d %d\n", (9 - (i - 1) * 2), (i - 1) * 2);
        // printf("%d %d %d\n", (i - 1), (9 - (i - 1) * 2), (i - 1));
        for (int j = 1; j <= (i - 1); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (9 - (i - 1) * 2); j++)
        {
            printf("*");
        }
        for (int j = 1; j <= (i - 1); j++)
        {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}