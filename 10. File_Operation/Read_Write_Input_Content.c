

// Implement a program that takes input from the user and writes it to a text file.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch[50];
    fp = fopen("file2.txt", "r");
    if (fp == NULL)
    {
        printf("File not found\n");
        exit(1);
    }
    while (fgets(ch, 50, fp) != NULL)
    {
        printf("%s", ch);
    }
    printf("Enter the text: ");
    scanf("%s", &ch);
    fputs(&ch, fp);
    fclose(fp);
    return 0;
}
