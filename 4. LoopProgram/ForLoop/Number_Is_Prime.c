
// Combine relational and logical operators to determine if a number is prime.

#include <stdio.h>

int main()
{
    int num, isPrime = 1;

    printf("Enter a number:\n");
    scanf("%d", &num);

    if (num < 2)
    {
        isPrime = 0;
    }
    else
    {
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
