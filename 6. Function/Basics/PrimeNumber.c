
// Check if a number is prime using a function.

#include <stdio.h>
int primeNumber(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (primeNumber(num))
        printf("%d is a Prime Number.\n", num);
    else
        printf("%d is Not a Prime Number.\n", num);

    return 0;
}

int primeNumber(int num)
{
    if (num < 2)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
        return 1;
    }
}