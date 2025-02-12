
// Check if two numbers are divisible by each other.

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the First Number\n");
    scanf("%d", &num1);
    printf("Enter the Second Number\n");
    scanf("%d", &num2);
    if (num1 % num2 == 0 && num2 % num1 == 0)
    {
        printf("%d is Divisible by %d", num1, num2);
    }
    else if (num1 % num2 == 0)
    {
        printf("%d is Divisible by %d", num1, num2);
    }
    else if (num2 % num1 == 0)
    {
        printf("%d is Divisible by %d", num2, num1);
    }
    else
    {
        printf("%d and %d are not Divisible by each other", num1, num2);
    }
}