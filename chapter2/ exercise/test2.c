#include <stdio.h>

int main()
{
    int a = 2;
    int b = 1;
    int c = 6;
    int i;
    for (i = 10; i <= 100; i++)
    {
        if (i % 3 == a && i % 5 == b && i % 7 == c)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}