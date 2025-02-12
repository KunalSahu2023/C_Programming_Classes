

// Program to allocate memory using malloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *p = calloc(n, sizeof(int));
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("The elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    free(p);
}