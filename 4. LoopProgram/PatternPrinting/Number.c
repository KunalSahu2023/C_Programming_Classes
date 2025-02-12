
// Number Patterns

#include <stdio.h>

int main()
{
    printf("***** Number Pattern *****\n");
    int row = 5, col = 4;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
                }
        printf("\n");
    }

    return 0;
}