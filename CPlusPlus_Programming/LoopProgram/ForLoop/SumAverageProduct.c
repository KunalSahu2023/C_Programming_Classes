
// Sum, Average and Product  of given Numbers entered by user


// Calculate the Sum, Average and Product of given numbers entered by the user.

#include <stdio.h>
int main()
{
    int a, b, c, d, e, sum = 0;
    float avg,prod;
    printf("Enter the value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    printf("Enter the value of c\n");
    scanf("%d", &c);
    printf("Enter the value of d\n");
    scanf("%d", &d);
    printf("Enter the value of e\n");
    scanf("%d", &e);
    sum = a + b + c + d + e;
    printf("Sum of the Numbers is %d", sum);
    avg = sum / 5;
    printf("\nAverage of the numbers is %.2f", avg);
     prod = a * b * c * d * e;
    printf("Product of the Numbers is %d", prod);
    return 0;
}