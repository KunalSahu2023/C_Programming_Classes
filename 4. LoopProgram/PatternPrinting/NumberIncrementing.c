

// Print a square of numbers incrementing from left to right and top to bottom

#include <stdio.h>

int main()
{
    printf("***** Alphabet Printing *****\n");
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ", i + j);
        }
        printf("\n");
    }

    return 0;
}