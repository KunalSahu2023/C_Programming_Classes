
// Print a square pattern of a given size.

#include <stdio.h>

int main()
{
    printf("***** Alphabet Printing *****\n");
    int row = 5, col = 4;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("A ");
        }
        printf("\n");
    }
}