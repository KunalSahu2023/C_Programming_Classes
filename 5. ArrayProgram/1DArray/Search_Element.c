
// Search for an element in an array using a linear search.

#include <stdio.h>
int main()
{
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};
    int num;
    printf("Array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the Number to search element from array : ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        if (num == arr[i])
        {
            printf("Number %d is located at index = %d", num, i);
        }
        else
        {
            printf("Number %d is not found in the array", num);
            break;
        }
    }

    return 0;
}