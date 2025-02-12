
// Implement a function that calculates the factorial of a given number.

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
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
