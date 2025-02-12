
// Reverse a string.

#include <stdio.h>
int main()
{
    printf("Index Find Programs\n");
    char str[] = {'k', 'u', 'n', 'a', 'l'};
    int start = 0;
    int end = 5;

    printf("Original String:\n ");
    printf("%s ", str);
    while (start < end)
    {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("\nReversed Array:");
    for (int i = 0; i < 7; i++)
    {
        printf("%s ", str[i]);
    }

    return 0;
}