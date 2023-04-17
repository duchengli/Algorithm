#include <stdio.h>
#include <stdlib.h>

// int cmp(const void *_a, const void *_b)
// {
//     int *a = (int *)_a;
//     int *b = (int *)_b;
//     return *a - *b;
// }

// int main()
// {
//     int num[10] = {5, 7, 8, 1, 26, 52, 9, 3, 14, 56};
//     int sz = sizeof(num) / sizeof(num[0]);
//     qsort(num, sz, sizeof(num[0]), cmp);
//     int i = 0;
//     for (i = 0; i < sz; i++)
//     {
//         printf("%d ", num[i]);
//     }
//     printf("\n");
//     return 0;
// }
int main()
{
    int a, b, c;
    a = 15;
    b = 20;
    c = 8;

    printf("%d\n", a < b ? a : b);
}