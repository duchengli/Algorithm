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
    int sum = a + b + c;
    int smallest = (a < b ? a : b) < c ? a : c;
    int largest = (a < b ? b : a) < c ? c : b;

    printf("smallest %d\n", (a < b ? a : b) < c ? a : c);
    printf("middle %d\n", sum - smallest - largest);
    printf("largest %d\n", (a < b ? b : a) < c ? c : b);

    return 0;
}