#include <stdio.h>
#include <string.h>

int main()
{
    // int myNumbers[4] = {25, 50, 75, 100};
    // int *ptr = myNumbers;

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\n", myNumbers[i]);
    // }

    // Instead of printing the value of each array element, let's print the memory address of each array element:
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%d\n", *(ptr + i));
    // }

    int myNumbers[4] = {25, 50, 75, 100};
    // Change the value of the first element to 13
    *myNumbers = 13;
    // Change the value of the second element to 17
    *(myNumbers + 1) = 17;
    // Get the value of the first element
    printf("%d\n", *myNumbers);
    // Get the value of the second element
    printf("%d\n", *(myNumbers + 1));

    return 0;
}