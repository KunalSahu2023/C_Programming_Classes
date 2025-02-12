
// Count the number of digits in a number.

#include <stdio.h>

int main()
{
    int num, count = 0, rem;
    printf("Enter a number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        count++;
        num = num / 10;
    }

    printf("Number of digits is %d", count);
    return 0;
}