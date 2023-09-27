#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 0; i <= 1000; i++)
    {
        for (j = 0; j <= 1000; j++)
        {
            if (i + 100 == j * j)
            {
                for (k = j; k <= 1000; k++)
                {
                    if (i + 268 == k * k)
                    {
                        printf("%d %d %d %d %d\n", i, j, k, i + 100, i + 268);
                    }
                }
            }
        }
    }
    return 0;
}