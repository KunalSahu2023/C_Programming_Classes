
// Write a function that reverses a given string.

#include <stdio.h>
#include <string.h>

int main()
{
    printf("***** Program to reverse string *****\n");
    char strr[100] = "India is a peaceful country in the world";
    int len = strlen(strr);
    int start = 0, end = len - 1;
    printf("Original String is : %s\n", strr);
    while (start < end)
    {
        int temp = strr[start];
        strr[start] = strr[end];
        strr[end] = temp;
        start++;
        end--;
    }

    printf("the Reverse String is : %s\n", strr);
}