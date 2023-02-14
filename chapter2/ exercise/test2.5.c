#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c, zhen, m[2000], e;
    while (~scanf("%d%d%d", &a, &b, &c), a != 0 || b != 0 || c != 0)
    {
        memset(m, 0, sizeof(m));
        m[0] = a / b; // 算出整数部分
        a %= b;       // 算出第一次的余数
        int i = 1;
        while (i <= c) // 算出小数点后c位
        {
            a *= 10; // 模拟除法的过程，自己随便算个数就知道了
            m[i++] = a / b;
            a %= b;
        }
        a *= 10;    // 第c位算完之后得到的是余数，要想计算第c+1位得先乘以10
        e = a / b;  // 算出第c+1位数的大小
        if (e >= 5) // 如果第c+1位大于等于5
        {
            m[c]++; // 则向前进一
            for (i = c - 1; i >= 1; i--)
                if (m[i + 1] == 10) // 判断是否存在整体进位的可能
                    m[i]++;
            if (m[1] == 10) // 如果第一位小数等于10的话则整数部分进一
                m[0]++;
            for (i = c; i >= 1; i--)
                if (m[i] == 10) // 将为10的部分都变为零
                    m[i] = 0;
        }
        printf("%d.", m[0]); // 输出整数部分和小数点
        for (i = 1; i <= c; i++)
            printf("%d", m[i]); // 输出后c位小数
        printf("\n");
    }
    return 0;
}