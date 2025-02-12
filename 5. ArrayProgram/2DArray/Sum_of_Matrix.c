
// Find the sum of all elements in a matrix.

#include <stdio.h>
int main()
{
    int arr1[3][3] = {19, 3, 54, 5, 20, 5, 55};
    int n = 3;
    int m = 3;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr1[i][j];
        }
    }
    printf("Sum of the Matrix is : %d", sum);

    return 0;
}