
// Sort an array(ascending or descending order).

#include <stdio.h>
int main()
{
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};
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

    return 0;
}