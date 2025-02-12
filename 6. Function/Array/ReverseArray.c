
// Implement a function to reverse an array of numbers.

#include <stdio.h>
int reverseArray(int arr[]);

int main()
{
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};

    printf("Original Array : ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    reverseArray(arr);
    return 0;
}

int reverseArray(int arr[])
{
    int start = 0;
    int end = 9;

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
}
