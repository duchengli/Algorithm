// C语言中getchar与scanf函数详解
// getchar函数是用来读取字符的一个函数，一般与putchar（输出字符）一起使用。

#include <stdio.h>

// example1
// int main()
// {
//     char s;
//     while ((s = getchar()) != EOF)
//     {
//         putchar(s);
//         // printf("%c", s);
//     }
//     return 0;
// }

// example2
int main()
{
    char id[50];
    printf("请输入身份证号\n");
    scanf("%s", id);
    printf("请确认身份证号(Y/N)\n");
    getchar();
    char a = getchar();
    if (a == 'Y')
        printf("OK\n");
    else
        printf("请重新输入\n");
}
