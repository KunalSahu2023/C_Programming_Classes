
// Fibonacci Sequence

#include <stdio.h>

int main()
{
    int a = 0, b = 1, num, next;
    printf("Enter the number of terms \n");
    scanf("%d", &num);
    printf("Fibonacci Series: ");
    for (int i = 1; i <= num; i++)
    {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}