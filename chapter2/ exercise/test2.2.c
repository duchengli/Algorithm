#include <stdio.h>

int main()
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        int r = 0;
        for (int i = 10; i <= 100; i++)
        {
            if (i % 3 == a && i % 5 == b && i % 7 == c)
            {
                printf("%d\n", i);
                r = 1;
                break;
            }
        }
        if (r == 0)
        {
            printf("No answer\n");
        }
        // printf("%d %d %d\n", a, b, c);
    }
    return 0;
}