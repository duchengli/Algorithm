#include <stdio.h>
#define INF 1000000000

int main()
{
    // FILE *fin, *fout;
    // fin = fopen("data.in", "rb");
    // fout = fopen("data.out", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0, kase = 0;
    while (scanf("%d", &n) == 1 && n)
    {
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            s += x;
            if (x < min)
                min = x;
            if (x > max)
                max = x;
        }
        if (kase)
            printf("\n");
        printf("Case %d: %d %d %.3f\n", ++kase, min, max, (double)s / n);
    }
    // fprintf(fout, "%d %d %.3f\n", min, max, (double)s / n);
    // fclose(fin);
    // fclose(fout);
    return 0;
}