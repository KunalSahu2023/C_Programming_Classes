
// Count the number of vowels and consonants in a string.

#include <stdio.h>
#include <string.h>
int main()
{
    printf("***** String Program *****\n");

    char str[100];
    char ch, i = 0;
    int vowel = 0, consonant = 0;

    printf("Enter the String\n");
    scanf("%s", str);

    while (str[i] != '\0')
    {
        ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        else if (ch > 'a' && ch <= 'z')
        {
            consonant++;
        }
        i++;
    }
    printf("The Vowels is %d and consonants is %d", vowel, consonant);

    return 0;
}
