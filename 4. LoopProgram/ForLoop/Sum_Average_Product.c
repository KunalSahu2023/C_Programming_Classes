
// Calculate the Sum, Average and Product of n numbers.

#include <stdio.h>
int main()
{
    int num, sum = 0;
    float avg, prod = 1;

    printf("Enter the number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        avg = sum / num;
        prod = prod * i;
    }

    printf("Sum of the %d Numbers is %d\n",num,sum);
    printf("Average of the %d numbers is %.2f\n",num, avg);
    printf("Product of the %d Numbers is %.2f",num, prod);
    return 0;
}