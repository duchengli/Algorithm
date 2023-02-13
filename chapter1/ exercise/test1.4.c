#include <stdio.h>
#include <math.h>
#define pi 4.0 * atan(1.0)

int main()
{
    int n;
    scanf("%d", &n);
    printf("%.3f\n", sin(n * pi / 180));
    printf("%.3f\n", cos(n * pi / 180));
    return 0;
}