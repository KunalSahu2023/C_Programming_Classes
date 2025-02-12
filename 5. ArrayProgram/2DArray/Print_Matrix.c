
// Input and print a matrix.

#include <stdio.h>

int main()
{
    printf("Matrix Printing\n");
    int arr[3][3] = {2, 3, 4, 6, 7, 8, 10, 13, 15};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    return 0;
}