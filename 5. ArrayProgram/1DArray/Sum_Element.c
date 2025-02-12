
// sum of array elements.

#include <stdio.h>
int main()
{
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};
    int sum = 0;
    printf("Array is : ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);

        sum = sum + arr[i];
    }
    printf("\nSum of Array Elements = %d", sum);

    return 0;
}