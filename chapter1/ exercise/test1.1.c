#include <stdio.h>

int main()
{
    int a, b, c;
    double avg;
    scanf("%d%d%d", &a, &b, &c);
    double d = (double)(a + b + c) / 3;
    printf("%.3f\n", d);

    return 0;
}