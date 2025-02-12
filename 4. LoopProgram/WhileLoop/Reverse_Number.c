
// Reverse a number.

#include <stdio.h>

int main()
{
    int rev = 0, num, rem;
    printf("Enter the number\n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = rem % 10;
        rev = rev * 10 + rem;
        printf("%d", rev);
        num = num / 10;
    }
    return 0;
}