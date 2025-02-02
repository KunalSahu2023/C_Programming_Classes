
// Check if a number is multiple of 5 using logical operators.

#include <stdio.h>
int main()
{

    int num;
    printf("Enter a Number\n");
    scanf("%d", &num);
    if (num % 5 == 0)
    {
        printf("%d is a multiple of 5", num);
    }
    else
    {
        printf("%d is not a multiple of 5", num);
    }

    return 0;
}
