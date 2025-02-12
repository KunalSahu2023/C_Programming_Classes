
// Find the first occurrence of a character in a string.

#include <stdio.h>
int main()
{
    printf("***** String Program *****\n");

    char str[20] = {'k', 'u', 'n', 'a', 'l', 'k', 'k', 'h', 'u'};
    int count = 0;
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    printf("Index is : ");
    for (int i = 0; i < 10; i++)
    {
        if (ch == str[i])
        {
            printf("%d ", i);
        }
    }
}