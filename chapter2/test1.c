#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    for (int x = 100; x < 1000; x++)
    {
        a = x / 100;
        b = (x % 100) / 10;
        c = (x % 10);
        if (x == a * a * a + b * b * b + c * c * c)
        {
            printf("%d\n", x);
        }
    }
    return 0;
}