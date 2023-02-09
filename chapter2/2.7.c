#include <stdio.h>
#include <time.h>

int main()
{
    int n, S = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }
        S = S + factorial;
    }
    printf("%d\n", S % 1000000);
    printf("Time used = %.2f\n", (double)clock() / CLOCKS_PER_SEC);
    return 0;
}
