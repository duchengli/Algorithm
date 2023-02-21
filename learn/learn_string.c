// Taking String input with space in C(4 Different Methods)
#include <stdio.h>
#define MAX_LIMIT 20

int main()
{
    // Method 1:Using gets
    // char str[20];
    // gets(str);
    // printf("%s", str);

    // Method 2:Using fgets
    // char str[MAX_LIMIT];
    // fgets(str, MAX_LIMIT, stdin);
    // printf("%s", str);

    // Method 3:Using %[^\n]%*c inside scanf
    char str[20];
    scanf("%[^\n]%*c", str);
    printf("%s\n", str);

    return 0;
}