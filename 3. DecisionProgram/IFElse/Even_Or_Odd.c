
// Determine if a number is even or odd.

#include <Stdio.h>
int main()
{
    int num;
    printf("Enter the Number\n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is Odd", num);
    }
}