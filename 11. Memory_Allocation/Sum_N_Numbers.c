
// Calculate the sum of n numbers entered dynamically.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    int *p = malloc(n * sizeof(int));
    printf("Enter the size of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &p[i]);
    }
    printf("The Sum of elements is : ");
    for (int i = 0; i < n; i++)
    {
        sum = sum + p[i];
    }
    printf("%d ", sum);
    free(p);
}
