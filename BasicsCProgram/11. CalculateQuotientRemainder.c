
// Find Quotient and Remainder.
#include <stdio.h>
int main()
{
    int a, b, quo, rem;
    printf("Enter the value of a and b \n");
    scanf("%d %d", &a, &b);
    quo = a / b;
    rem = a % b;
    printf("\nQuotient is %d", quo);
    printf("\nRemainder is %d", rem);
    return 0;
}