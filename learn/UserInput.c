#include <stdio.h>

int main()
{
    // int myNum;
    // printf("Type a number: \n");
    // scanf("%d", &myNum);
    // printf("Your number is: %d\n", myNum);

    // int myNum;
    // char myChar;

    // printf("Type a number AND a character and press enter: \n");
    // scanf("%d %c", &myNum, &myChar);
    // printf("Your number is: %d\n", myNum);
    // printf("Your character is: %c\n", myChar);

    // char firstName[30];
    // printf("Enter your first name: \n");
    // scanf("%s", firstName);
    // printf("Hello %s\n", firstName);

    // However, the scanf() function has some limitations : it considers space(whitespace, tabs, etc) as a terminating character, which means that it can only display a single word(even if you type many words).For example :
    // char fullName[30];
    // printf("Enter your full name: \n");
    // scanf("%s", fullName);
    // printf("Hello %s\n", fullName);

    // That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:
    // However, the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words). For example:
    char fullName[30];

    printf("%ld\n", sizeof(fullName));
    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    return 0;
}