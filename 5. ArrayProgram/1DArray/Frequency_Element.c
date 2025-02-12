
// Count the frequency of each element in an array.1

#include <stdio.h>
int main()
{
    int arr[] = {19, 3, 54, 5, 20, 5, 55, 6, 56, 56};
    int elem, count = 0;
    printf("Array is : ");
    for (int i = 0; i < 10; i++)
    {
    printf("%d ", arr[i]);
    }
    
    printf("\nEnter the Element to count \n");
    scanf("%d", &elem);
    for (int i = 0; i < 10; i++)
    {
        if (elem == arr[i])
        {
            count++;
        }
    }
    printf("Number %d is %d times",elem,count);

    return 0;
}