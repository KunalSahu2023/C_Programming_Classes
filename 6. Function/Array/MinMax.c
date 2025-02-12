
// Write a function to return the maximum and minimum of the array.

#include <stdio.h>
int minMax(int arr[]);

int main()
{
    int arr[] = {19, 13, 54, 5, 20, 155, 55, 6, 56, 6};
    int large, small, minmax;
    printf("Array is : ");
    for (int i = 1; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    minMax(arr);

    return 0;
}

int minMax(int arr[])
{
    int large = arr[0];
    int small = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    printf("\nLargest Element is %d\n", large);
    printf("Smallest Element is %d\n", small);
}