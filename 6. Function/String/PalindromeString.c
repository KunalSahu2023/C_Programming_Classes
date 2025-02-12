
// Implement a function to check if a string is a palindrome.

#include <stdio.h>
#include <string.h>

int isPalindrome(char strr[], int start, int end);

int main()
{
    char strr[100];
    printf("***** Program to check Palindrome String *****\n");
    printf("Enter a string: ");
    scanf("%s", strr);

    int len = strlen(strr);
    
    if (isPalindrome(strr, 0, len - 1))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int isPalindrome(char strr[], int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (strr[start] != strr[end])
    {
        return 0;
    }
    return isPalindrome(strr, start + 1, end - 1);
}