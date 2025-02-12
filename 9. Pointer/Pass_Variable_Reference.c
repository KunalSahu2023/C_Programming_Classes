
// Use pointers to pass variables by reference to a function.

#include <stdio.h>

int func(int *p);
int main()
{
    printf("**** Array Implementation using Pointer *****\n");

    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    func(&arr);

    return 0;
}

int func(int *p)
{
    *p = 100;
    printf("Value of a: %d\n", *p);
    return 0;
}