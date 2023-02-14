#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int criteria1, criteria2;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        criteria1 = ((c > a && c > b) && (a + b > c)) || ((b > a && b > c) && (a + c > b)) || ((a > c && a > b) && (b + c > a));
        criteria2 = (pow(a, 2) == pow(b, 2) + pow(c, 2)) || (pow(b, 2) == pow(a, 2) + pow(c, 2)) || (pow(c, 2) == pow(a, 2) + pow(b, 2));

        if (criteria1)
        {
            if (criteria2)
            {
                printf("right triangle\n");
            }
            else
            {
                printf("non-right triangle\n");
            }
        }
        else
        {
            printf("No a triangle\n");
        }
    }
    return 0;
}