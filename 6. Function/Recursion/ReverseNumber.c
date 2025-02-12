
// // Implement a recursive function to reverse an array of integers.

#include <stdio.h>
int reverseNumber(int num, int rev);
int main()
{
    printf(" ***** Reverse Array Using Recursion *****\n");
    int num, reverse;
    printf("Enter The Number:\n");
    scanf("%d", &num);
    reverse = reverseNumber(num, 0);
    printf("The reverse Number is %d", reverse);
}

int reverseNumber(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }
    else
    {
        rev = rev * 10 + (num % 10);
        return reverseNumber(num / 10, rev);
    }
}
