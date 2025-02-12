
// Print Number Square

#include <stdio.h>

int main()
{
    printf("***** Number Square Pattern *****\n");
    int row = 5, col = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
