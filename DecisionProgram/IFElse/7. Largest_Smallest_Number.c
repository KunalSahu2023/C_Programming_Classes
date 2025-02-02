
// The Largest and The Smallest of Two Numbers

#include <stdio.h>
int main()
{
    int first, second;
    printf("Enter first Number\n");
    scanf("%d", &first);
    printf("Enter Second Number\n");
    scanf("%d", &second);
    if (first > second)
    {
        printf("Largest Number is %d:", first);
    }
    else if (first < second)
    {
        printf("Largest Number is %d:", second);
    }

    printf("/n");

    if (first > second)
    {
        printf("Smallest Number is %d:", second);
    }
    else if (first < second)
    {
        printf("Smallest Number is %d:", first);
    }
    else
    {
        printf("Both are Equal");
    }

    return 0;
}