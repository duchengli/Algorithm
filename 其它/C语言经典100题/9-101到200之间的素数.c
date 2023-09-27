#include <stdio.h>
#include <math.h>

// int main()
// {
//     int i, t;
//     for (i = 100; i <= 200; i++)
//     {
//         for (t = 2; t < i; t++)
//         {
//             if (i % t == 0)
//             {
//                 break;
//             }
//         }
//         if (i == t)
//         {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
//     return 0;
// }

int main()
{
    int i, t;
    int count = 0;
    for (i = 101; i <= 200; i += 2)
    {
        int flag = 1;
        for (t = 2; t <= sqrt(i); t++)
        {
            if (i % t == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n%d", count);
    printf("\n");
}