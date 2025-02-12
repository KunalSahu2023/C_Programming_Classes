

// Write a function to find the length of a string without using strlen().

#include <stdio.h>
#include <string.h>

int main()
{
    printf("***** Program to find length of string *****\n");
    char strr[100] = "India is a peacefully country in the world";

    int len = strlen(strr);
    printf("The length of the string is : %d", len);
}