
// Swap two numbers using a function.

#include <stdio.h>
int swap(int a, int b);
int main()
{
    int x, y;
    printf("Enter the Value of a and b\n");
    scanf("%d %d", &x, &y);
    printf("Before Swapping Value of a = %d and b = %d\n", x, y);
    swap(x, y);
    return 0;
}

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("After Swapping Value of a = %d and b = %d\n", a, b);
}