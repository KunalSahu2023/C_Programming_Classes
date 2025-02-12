
// Resize a dynamically allocated array using realloc.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, new;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("\n");

    printf("Enter the new size of the array: ");
    scanf("%d", &new);

    p = (int *)realloc(p, new * sizeof(int));
    printf("\n");

    printf("\nEnter %d new elements: ", new - n);
    for (int i = n; i < new; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("\n");

    printf("The elements are: ");
    for (int i = 0; i < new; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);
}