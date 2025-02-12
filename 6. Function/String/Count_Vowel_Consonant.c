
// Function to count vowels and consonants

#include <stdio.h>
#include <string.h>
void vowelsConsonants(char strr[]);

int main()
{
    printf("***** Program to count vowels and consonants *****\n");

    char strr[100] = "India is a peaceful country in the world";
    vowelsConsonants(strr); // Correct function call

    return 0;
}

void vowelsConsonants(char strr[])
{
    int vowels = 0, consonants = 0;

    for (int i = 0; i < strlen(strr); i++)
    {
        char ch = strr[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
}
