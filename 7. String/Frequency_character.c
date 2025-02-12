
// Find the frequency of characters in a string.

#include <stdio.h>
int main()
{
    printf("***** String Program *****\n");

    char str[20] = {'k', 'u', 'n', 'a', 'l', 'k', 'a', 'h', 'u'};
    int count = 0;
    char ch;
    printf("Enter the character\n");
    scanf("%c", &ch);

    for (int i = 0; i < 10; i++)
    {
        if (ch == str[i])
        {
            count++;
        }
    }
    printf("The Character %c is %d times", ch, count);
}
