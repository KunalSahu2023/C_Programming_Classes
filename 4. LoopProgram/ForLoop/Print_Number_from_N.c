
// Print numbers from 1 to N.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d ",i);
    }
    return 0;
}