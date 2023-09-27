#include <stdio.h>

int main()
{
    while (1)
    {
        int y, m, d;
        int leapyear = 0;
        int i;
        int c;
        int days = 0;
        scanf("%d %d %d", &y, &m, &d);
        if (y % 4 == 0)
        {
            if (y % 400 == 0)
            {
                leapyear = 1;
            }
            else if (y % 100 == 0 && y % 400 != 0)
            {
                leapyear = 0;
            }
            else
            {
                leapyear = 1;
            }
        }
        // printf("%d\n", leapyear);

        switch (leapyear)
        {
        case 0:
            // printf("%s\n", "非润年");
            for (i = 0; i < m; i++)
            {
                switch (i)
                {
                case 0:
                    c = 0;
                    break;
                case 1:
                    c = 31;
                    break;
                case 2:
                    c = 28;
                    break;
                case 3:
                    c = 31;
                    break;
                case 4:
                    c = 30;
                    break;
                case 5:
                    c = 31;
                    break;
                case 6:
                    c = 30;
                    break;
                case 7:
                    c = 31;
                    break;
                case 8:
                    c = 31;
                    break;
                case 9:
                    c = 30;
                    break;
                case 10:
                    c = 31;
                    break;
                case 11:
                    c = 30;
                    break;
                case 12:
                    c = 31;
                    break;
                }
                days = days + c;
            }
            days = days + d;
            break;
        case 1:
            // printf("%s\n", "润年");
            for (i = 0; i < m; i++)
            {
                switch (i)
                {
                case 0:
                    c = 0;
                    break;
                case 1:
                    c = 31;
                    break;
                case 2:
                    c = 29;
                    break;
                case 3:
                    c = 31;
                    break;
                case 4:
                    c = 30;
                    break;
                case 5:
                    c = 31;
                    break;
                case 6:
                    c = 30;
                    break;
                case 7:
                    c = 31;
                    break;
                case 8:
                    c = 31;
                    break;
                case 9:
                    c = 30;
                    break;
                case 10:
                    c = 31;
                    break;
                case 11:
                    c = 30;
                    break;
                case 12:
                    c = 31;
                    break;
                }
                days = days + c;
            }
            days = days + d;
            break;
        }
        printf("%d\n", days);
    }
    return 0;
}
