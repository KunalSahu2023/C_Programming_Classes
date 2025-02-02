
// Modulus (Remainder) of Two Numbers

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the Value of a \n");
    scanf("%d", &a);
    printf("Enter the Value of b \n");
    scanf("%d", &b);
    c = a % b;
    printf("Modulus of %d and %d is %d", a, b, c);
    return 0;
}