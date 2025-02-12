
// Write a function that sorts an array in ascending order using any sorting algorithm.

#include <stdio.h>
int sortArray(int arr[]);

int main()
{
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};
    sortArray(arr);

    return 0;
}

int sortArray(int arr[])
{
    int temp;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {

            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted Array:\n ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}