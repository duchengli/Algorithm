#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int abc, def, ghi;
    int a[10], count = 0;
    memset(a, 0, sizeof(a)); // 将a数组中的值全部设置为0
    for (abc = 123; abc < 333; abc++)
    { // 基本可以确定abc的最小值和最大值
        def = 2 * abc;
        ghi = 3 * abc;
        // 设置数组中所有对应的9位数字位置的值1
        a[abc / 100] = 1;     // a
        a[abc / 10 % 10] = 1; // b
        a[abc % 10] = 1;      // c
        a[def / 100] = 1;     // d
        a[def / 10 % 10] = 1; // e
        a[def % 10] = 1;      // f
        a[ghi / 100] = 1;     // g
        a[ghi / 10 % 10] = 1; // h
        a[ghi % 10] = 1;      // i
        int i;
        for (i = 1; i <= 9; i++)
        {
            count += a[i];
        }
        if (count == 9)
        {
            printf("%d %d %d\n", abc, def, ghi);
        }
        // 重置count 和a数组
        count = 0;
        memset(a, 0, sizeof(a));
    }
    return 0;
}
