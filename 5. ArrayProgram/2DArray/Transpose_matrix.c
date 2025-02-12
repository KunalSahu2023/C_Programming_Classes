
// Find the transpose of a matrix.

#include <stdio.h>
int main()
{
    int arr1[3][3] = {19, 3, 54, 5, 20, 5, 55};
    int n = 3;
    int m = 3;
    int arr3[n][m];

    printf("original Matrix : \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("Transpose  of The Matrix : \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr3[i][j] = arr1[j][i];
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}