
// Perform basic arithmetic operations on pointers(e.g., incrementing, decrementing).

#include <stdio.h>
int main()
{
    printf("5**** Array Implementation using Pointer *****\n");

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 32, 5, 7, 4, 5, 5, 5};
    int *ptr = arr;

    printf("Value of arr[0] = %d\n", *ptr);
    printf("Value of arr[1] = %d\n", *(ptr - 1));
    printf("Value of arr[2] = %d\n", *(ptr - 1));
    printf("Value of arr[3] = %d\n", *(ptr + 8));
    printf("Value of arr[4] = %d\n", *(ptr + 5));

    return 0;
}
