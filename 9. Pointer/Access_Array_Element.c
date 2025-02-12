

// Access elements of an array using a pointer and pointer arithmetic.

#include <stdio.h>
int main()
{
    printf("5**** Array Implementation using Pointer *****\n");

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Value of arr[0] = %d\n", *ptr);
    printf("Value of arr[1] = %d\n", *(ptr + 1));
    printf("Value of arr[2] = %d\n", *(ptr + 2));
    printf("Value of arr[3] = %d\n", *(ptr + 3));
    printf("Value of arr[4] = %d\n", *(ptr + 4));
    printf("Value of arr[0] = %d\n", arr[0]);
    printf("Value of arr[1] = %d\n", arr[1]);
    printf("Value of arr[2] = %d\n", arr[2]);
    printf("Value of arr[3] = %d\n", arr[3]);
    printf("Value of arr[4] = %d\n", arr[4]);

    return 0;
}