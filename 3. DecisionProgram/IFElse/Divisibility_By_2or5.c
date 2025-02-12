
// Determine if a number is divisible by 2 and not by 5.

#include <stdio.h>
int main()
{
    int num1;
    printf("Enter the Number\n");
    scanf("%d", &num1);
    if (num1 % 2 == 0 && num1 % 5 != 0)
    {
        printf("%d is Divisible by 2 and not by 5", num1);
    }
    else if (num1 % 2 == 0 && num1 % 5 == 0)
    {
        printf("%d is Divisible by 2 and 5", num1);
    }
    else if (num1 % 2 != 0 && num1 % 5 == 0)
    {
        printf("%d is not Divisible by 2 and Divisible by 5", num1);
    }
    else
    {
        printf("%d is not Divisible by 2 and 5", num1);
    }

    return 0;
}