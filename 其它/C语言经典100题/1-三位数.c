#include <stdio.h>

int main()
{
    int g, s, b;
    int count = 0;

    for (b = 1; b < 5; b++)
    {
        for (s = 1; s < 5; s++)
        {
            for (g = 1; g < 5; g++)
            {
                if (b != s && b != g && s != g)
                {
                    printf("%d %d %d\n", b, s, g);
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}