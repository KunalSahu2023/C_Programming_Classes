
// Count the number of words, characters, and lines in a text file.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0, word = 0, character = 0;
    fp = fopen("examples1.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    fprintf(fp, "Hello, World!\n, programming\n is used to buil\nd \nsoftware and web \napplication \nand other applications\n cghdhdfjhdfjf\n \n");
    while ((ch = fgetc(fp)) != EOF)
    {
        character++;
        // fputc(ch, fp1);
        if (ch == '\n')
        {
            count++;
        }
        else if (ch == ' ')
        {
            word++;
        }
    }
    printf("Number of lines in the file is %d\n", count);
    printf("Number of words in the file is %d\n", word);
    printf("Number of character in the file is %d\n", character);

    fclose(fp);

    return 0;
}