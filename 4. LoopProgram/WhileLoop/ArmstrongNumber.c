
// Check if a number is an Armstrong number.

#include <stdio.h>

int main()
{
    int sum = 0, num, rem, temp;
    printf("Enter the number\n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem * rem * rem;
        num = num / 10;
    }
    if (sum == temp)
    {
        printf("%d is an Armstrong Number", temp);
    }
    else
    {
        printf("%d is not an Armstrong Number", temp);
    }

    return 0;
}