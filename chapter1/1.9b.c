#include <stdio.h>

int main()
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    } // make a <= b
    if (a > c)
    {
        t = a;
        a = c;
        c = t;
    } // make a <= c
    if (b > c)
    {
        t = b;
        b = c;
        c = t;
    } // make a <= c
    printf("%d %d %d\n", a, b, c); // cba

    return 0;
}
