#include <stdio.h>
#include <string.h>

int main()
{
    // char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // printf("%ld\n", strlen(alphabet));
    // printf("%ld\n", sizeof(alphabet));

    // char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // printf("%ld\n", strlen(alphabet)); // 26
    // printf("%ld\n", sizeof(alphabet)); // 50

    // char str1[20] = "Hello ";
    // char str2[] = "World!";
    // // Concatenate str2 to str1 (result is stored in str1)
    // strcat(str1, str2);
    // // Print str1
    // printf("%s\n", str1);

    // char str1[20] = "Hello World!";
    // char str2[20];
    // printf("%s\n", str2);
    // // Copy str1 to str2
    // strcpy(str2, str1);
    // // Print str2
    // printf("%s\n", str2);

    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";
    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2)); // Returns 0 (the strings are equal)
    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3)); // Returns -4 (the strings are not equal)


    return 0;
}
