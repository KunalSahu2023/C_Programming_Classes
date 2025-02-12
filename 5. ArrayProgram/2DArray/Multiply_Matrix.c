
// Multiply two matrices.

#include <stdio.h>
int main()
{
    int arr1[3][3] = {19, 3, 54, 5, 20, 5, 55, 6};
    int arr2[3][3] = {19, 39, 45, 6, 7, 56, 77, 5};
    int n = 3;
    int m = 3;
    int arr3[n][m];

    printf("Multiplication of The two array \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr3[i][j]);
        }
    }

    return 0;
}