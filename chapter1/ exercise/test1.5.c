#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)

        if (n <= 3)
        {
            printf("%.2f\n", (double)(95 * n));
        }
        else
        {
            printf("%.2f\n", n * 95 * 0.85);
        }

    return 0;
}