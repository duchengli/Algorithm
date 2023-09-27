#include <stdio.h>

int main()
{
    double profit;
    double salary;

    while (1)
    {
        scanf("%lf", &profit);
        if (profit < 0)
        {
            printf("输入有错，请重新输入。\n");
        }
        else
        {
            if (profit <= 100000)
            {
                salary = profit * 0.1;
            }
            else if (profit < 200000)
            {
                salary = 100000 * 0.1 + (profit - 100000) * 0.075;
            }
            else if (profit < 400000)
            {
                salary = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
            }
            else if (profit < 600000)
            {
                salary = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
            }
            else if (profit < 1000000)
            {
                salary = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
            }
            else
            {
                salary = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
            }
            printf("%.2lf\n", salary);
        }
    }

    return 0;
}