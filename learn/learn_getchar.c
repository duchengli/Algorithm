#include <stdio.h>

// int main()
// {
//     char s;
//     while ((s = getchar()) != EOF)
//     {
//         // putchar(s);
//         printf("%c", s);
//     }
//     return 0;
// }
int main()
{
    char id[50];
    printf("Please input your ID Number:\n");
    scanf("%s", id);
    printf("请确认身份证号(Y/N)\n");
    char a = getchar();
    printf("%d\n", a);

}