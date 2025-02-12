
// Use a pointer to a pointer to store the address of another pointer.

#include <stdio.h>
int main()
{
    printf("5**** Array Implementation using Pointer *****\n");

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr;
    int **gtr;
    ptr = arr;
    gtr = &ptr;

    printf("Value of arr[0] = %d\n", *ptr);
    printf("Value of arr[1] = %d\n", *(ptr + 1));
    printf("Value of arr[2] = %d\n", *(ptr + 2));
    printf("Value of arr[3] = %d\n", *(ptr + 3));
    printf("Value of arr[4] = %d\n", *(ptr + 4));
    printf("Value of ptr = %p\n", *ptr);
    printf("\n");
    printf("Value of arr[0] = %d\n", **gtr);
    printf("Value of gtr = %p\n", **gtr);
    printf("Value of arr[1] = %d\n", **(gtr + 1));
    printf("Value of arr[2] = %d\n", **(gtr + 2));
    printf("Value of arr[3] = %d\n", **(gtr + 3));
    printf("Value of arr[4] = %d\n", **(gtr + 4));

    return 0;
}