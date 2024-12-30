

// Find Quotient and Remainder.

#include <stdio.h>
int main()
{
    int first, second, quotient, remainder;
    printf("Enter the First Number \n");
    scanf("%d", &first);
    printf("Enter the Second Number \n");
    scanf("%d",&second);
    quotient = first / second;
    remainder = first % second;
    printf("\nQuotient is %d", quotient);
    printf("\nRemainder is %d", remainder);
    return 0;
}