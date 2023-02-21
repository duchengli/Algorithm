#include <stdio.h>

int getchar_test_v1();

int main()
{
    getchar_test_v1();
}

int getchar_test_v1()
{
    printf("Input chars: ");
    int ch = getchar();
    putchar(ch);
    printf("\n");
}

int getchar_test_v2()
{
    int ch;
    printf("Input chars: ");
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    printf("\n");
}
