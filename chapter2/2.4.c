#include <stdio.h>

int main()
{
    long long n;
    int count = 0;
    scanf("%lld", &n);
    while (n > 1)
    {
        if (n % 2 == 1)
        {
            n = n * 3 + 1;
            // printf("%d\n", n);
        }
        else
        {
            n = n / 2;
        }
        count = count + 1;
    }

    printf("%d\n", count);
    return 0;
}
