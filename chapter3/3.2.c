#include <stdio.h>
#include <string.h>
#define maxn 7

int a[maxn];
int main()
{
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &k);
    printf("start computer:\n");
    for (int i = 1; i <= k; i++)
    {
        printf("%d\n", i);
        for (int j = i; j <= n; j = j + i)
        {
            printf("%d ", j);
            a[j] = !a[j];
        }
        printf("\n");
        for (int i = 0; i <= maxn - 1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}