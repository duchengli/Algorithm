#include <stdio.h>

int fibonaci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}
int main()
{
    int i;
    printf("month\tnumber\n");
    for (i = 1; i < 41; i++)
    {
        printf("%d\t%d\n", i, fibonaci(i));
    }
    return 0;
}