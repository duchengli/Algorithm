#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    // if (a < b && b < c)
    //     printf("%d %d %d\n", a, b, c); // abc
    // if (a < c && c < b)
    //     printf("%d %d %d\n", a, c, b); // acb
    // if (b < a && a < c)
    //     printf("%d %d %d\n", b, a, c); // bac
    // if (b < c && c < a)
    //     printf("%d %d %d\n", b, c, a); // bca
    // if (c < a && a < b)
    //     printf("%d %d %d\n", c, a, b); // cab
    // if (c < b && b < a)
    //     printf("%d %d %d\n", c, b, a); // cba

    // if (a <= b && b <= c)
    //     printf("%d %d %d\n", a, b, c); // abc
    // if (a <= c && c <= b)
    //     printf("%d %d %d\n", a, c, b); // acb
    // if (b <= a && a <= c)
    //     printf("%d %d %d\n", b, a, c); // bac
    // if (b <= c && c <= a)
    //     printf("%d %d %d\n", b, c, a); // bca
    // if (c <= a && a <= b)
    //     printf("%d %d %d\n", c, a, b); // cab
    // if (c <= b && b <= a)
    //     printf("%d %d %d\n", c, b, a); // cba

    if (a <= b && b <= c)
        printf("%d %d %d\n", a, b, c); // abc
    else if (a <= c && c <= b)
        printf("%d %d %d\n", a, c, b); // acb
    else if (b <= a && a <= c)
        printf("%d %d %d\n", b, a, c); // bac
    else if (b <= c && c <= a)
        printf("%d %d %d\n", b, c, a); // bca
    else if (c <= a && a <= b)
        printf("%d %d %d\n", c, a, b); // cab
    else if (c <= b && b <= a)
        printf("%d %d %d\n", c, b, a); // cba

    return 0;
}