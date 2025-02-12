

// Count the number of lines in a file.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("examples.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
    }
    fprintf(fp, "Programming Language is used to develop Software!\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    printf("Number of lines in the file is %d\n", count);

    fclose(fp);

    return 0;
}