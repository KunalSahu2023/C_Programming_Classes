
// Print Inverted Right-Angled Triangle of Stars

#include <stdio.h>

int main()
{
    printf("***** Alphabet Printing *****\n");
    int row = 5, col = 4;
    for (int i = 1; i <= row; i++)
    {
        for (int j = row; j >= i; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}