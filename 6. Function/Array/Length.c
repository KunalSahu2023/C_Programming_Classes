
// Write a function to find the length of array.

#include <stdio.h>
int lenArray(int arr[], int size);

int main()
{
    printf("****** Array Length Program ***** \n");
    int arr[] = {5, 4, 6, 7, 7, 78, 87, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int length = lenArray(arr, size);
    printf("Length of Array is %d", length);
    return 0;
}

int lenArray(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count++;
    }
    return count;
}