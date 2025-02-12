

// Copy the content of one string to another using strcpy().

#include <stdio.h>
#include <string.h>
int main()
{
    printf("***** String Program *****\n");

    char str1[100] = {'k', 'u', 'n', 'a', 'l', 'k', 'k', 'h', 'u'};
    char str2[100];
    strcpy(str2, str1);
    printf("The Length of str is %s\n", str1);
    printf("The Length of str is %s", str2);
}