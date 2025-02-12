
// Find the largest and smallest elements in an array.

#include <stdio.h>
int main()
{
    int arr[] = {19, 13, 54, 5, 20, 15, 55, 6, 56, 6};
    int large = arr[0];
    int small = arr[0];
    printf("Array is : ");
    for (int i = 1; i < 10; i++)
    {
        printf("%d ", arr[i]);

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

    return 0;
}