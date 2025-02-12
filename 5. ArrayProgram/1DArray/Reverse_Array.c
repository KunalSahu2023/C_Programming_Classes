
// Reverse an array.

#include <stdio.h>
int main()
{
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};
    int start = 0;
    int end = 9;

    printf("Original Array : ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("\nReversed Array : ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
