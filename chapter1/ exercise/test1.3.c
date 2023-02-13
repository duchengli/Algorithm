#include <stdio.h>

int main()
{
    int n;
    int s;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    printf("%d\n", s);
    // printf("%d\n", n * (n + 1) / 2);

    return 0;
}