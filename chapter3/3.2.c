#include <stdio.h>
#include <string.h>
#define maxn 105

int a[maxn];
int main()
{
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &k);
    printf("start computer:\n");
    for (int i = 1; i <= k; i++)
    {
        // printf("Step: %d\n", i);
        for (int j = i - 1; j <= n - 1; j = j + i)
        {
            // printf("%d ", j+1);
            a[j] = !a[j];
        }
        // printf("\n");

        // printf("\n");
    }
    for (int i = 0; i <= maxn - 1; i++)
    {
        // printf("%d ", a[i]);
        if (a[i] == 1)
        {
            printf("%d ", i + 1);
                }
    }
    printf("\n");
}