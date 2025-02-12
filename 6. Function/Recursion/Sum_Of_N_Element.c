
// Write a recursive function to calculate the sum of array elements.

#include <stdio.h>
int sumElement(int arr[], int n);

int main()
{
    int num;
    printf("***** Sum Of N Elements *****\n");
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = sumElement(arr, num);
    printf("The sum is: %d\n", sum);

    return 0;
}

int sumElement(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return arr[n - 1] + sumElement(arr, n - 1);
}
