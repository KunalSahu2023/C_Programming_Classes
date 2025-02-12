
// Implement a recursive function to calculate
//  b^𝑎(a raised to the power b).

#include <stdio.h>
int exponential(int, int);
int main()
{
    printf("**** Exponent Program Using Recursion ***** \n");
    int base, exp, result;
    printf("Enter the base\n");
    scanf("%d", &base);
    printf("Enter the value of exp\n");
    scanf("%d", &exp);

    result = exponential(base, exp);
    printf("The exponent of number %d is %d", base, result);
}

int exponential(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    else
    {
        return base * exponential(base, exp - 1);
    }
}
