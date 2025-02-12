
// Concatenate two strings.

#include <stdio.h>
#include <string.h>
int main()
{
    printf("***** String Program *****\n");

    char str1[100] = {'k', 'u', 'n', 'a', 'l', 'k', 'k', 'h', 'u'};
    char str2[100] = {'s', 'a', 'h', 'u'};
    strcat(str1, str2);
    printf("The Length of str is %s", str1);
}