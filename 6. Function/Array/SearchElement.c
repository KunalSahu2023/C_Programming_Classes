
// Write a function that searches for a specific element in an array and returns its index.

#include <stdio.h>
int search(int arr[], int key);

int main()
{
    printf("**** Searching an Element in the Array\n **** ");
    int arr[] = {4, 5, 6, 7, 8, 3, 4, 5, 34, 67};
    int key;
    printf("Enter the Element\n");
    scanf("%d", &key);
    search(arr, key);
}

int search(int arr[], int key)
{
    for (int i = 0; i < 10; i++)
    {
        if (key == arr[i])
        {
            printf("%d is found at index %d", key, arr[i]);
        }
    }
}