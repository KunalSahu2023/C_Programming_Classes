
// Copy the contents of one file to another.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *source, *destination;
    char ch;
    source = fopen("file.txt", "r");
    destination = fopen("file1.txt", "w");
    if (source == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    fprintf(source, "Programming Language is used to develop Software!\n");
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    return 0;
}