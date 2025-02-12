
// Input and print the elements of a 1D array.

#include <stdio.h>
int main()
{
    printf("Print Array:\n");
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}