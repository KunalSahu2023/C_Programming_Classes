// the ASCII value of a character.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character \n");
    scanf("%c", &c);
    printf("ASCII Value of the character %c is %d", c, (int)c);
    return 0;
}