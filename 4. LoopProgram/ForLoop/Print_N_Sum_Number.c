
// Print sum of numbers up to N.

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter the Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum of %d numbers is %d",num,sum);
    return 0;
}