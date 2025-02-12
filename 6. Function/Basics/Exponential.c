
// Write a function to calculate
// 𝑎^b (a raised to the power b).

#include <stdio.h>
int exponent(int, int);

int main()
{
    int a, n;
    printf("Exponentiation program Using\n");
    exponent(a, n);
}

int exponent(int a, int n)
{
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int result = 1;

    for (int i = 1; i <= n; i++)
    {
        result = result * a;
    }

    printf("result : %d", result);
}