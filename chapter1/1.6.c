#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    // printf("%d%d%d\n", n / 100, (n / 10) % 10, n % 10);
    // printf("%d%d%d\n", n % 10, (n / 10) % 10, n / 100);
    m = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
    printf("%03d\n", m);

    return 0;
}