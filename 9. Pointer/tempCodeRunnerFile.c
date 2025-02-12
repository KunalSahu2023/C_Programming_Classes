
// Swap two numbers using pointers.

#include <stdio.h>
int main()
{

    printf("***** Swap two numbers using pointers. *****\n");
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int *p1 = &a, *p2 = &b;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("After swapping: %d %d\n", a, b);

    return 0;
}
