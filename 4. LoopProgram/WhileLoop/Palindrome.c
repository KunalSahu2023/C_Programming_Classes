
// Check if a number is a palindrome.

#include <stdio.h>

int main()
{
    int rev = 0, num, rem, temp;
    printf("Enter the number\n");
    scanf("%d", &num);
    temp = num;

    while (num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if (temp == rev)
    {
        printf("%d is a Palindrome Number", temp);
    }
    else
    {
        printf("%d is not a Palindrome Number", temp);
    }

    return 0;
}