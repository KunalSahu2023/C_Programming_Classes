
// Add, subtract, multiply, and divide two numbers.
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;
    printf("Enter the Value of and b \n");
    scanf("%d %d", &a, &b);
    c = a - b;
    d = a + b;
    e = a * b;
    f = a / b;
    printf("\nAddition of a %d and b %d is %d", a, b, c);
    printf("\nSubtraction of a %d and b %d is %d", a, b, d);
    printf("\nMultiplication of a %d and b %d is %d", a, b, e);
    printf("\nDivision of a %d and b %d is %d", a, b, f);
    return 0;
}