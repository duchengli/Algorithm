#include <stdio.h>
#include <math.h>

int main()
{
    int m, n;
    int count = 0;
    while (scanf("%d%d", &n, &m) == 2 && n && m)
    {
        float sum = 0;
        if (n >= 1000000 || m >= 1000000)
        {
            break;
        }
        for (int i = n; i <= m; i++)
        {
            sum = sum + 1.0 / i / i;
        }
        count++;
        printf("Case %d:%.5f\n", count, sum);
    }
    return 0;
}