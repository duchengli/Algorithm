#include <stdio.h>

int main()
{
    // 一维数组
    // int myNumbers[] = {25, 50, 75, 100};
    // int length = sizeof(myNumbers) / sizeof(int);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d\n", myNumbers[i]);
    // }

    // 二维数组
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }
    return 0;
}