
// Implement a recursive function to calculate the factorial of a number.

#include <stdio.h>
int factorial(int n);

int main()
{
    printf(" ***** Factorial Program ***** \n");
    int result, num;
    printf("Enter the Number\n");
    scanf("%d", &num);
    result = factorial(num);
    printf("The Factorial of Number %d is %d", num, result);

    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
