
// Use relational operators to determine the largest among three numbers.

#include <stdio.h>
int main()
{
    printf("Compairing  Three Numbers\n");
    int a, b, c;
    printf("Enter the First Number\n");
    scanf("%d", &a);
    printf("enter the Second Number\n");
    scanf("%d", &b);
    printf("enter the Third Number\n");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("A is Greater");
    }
    else if (b > a && b > c)
    {
        printf("B is Greater");
    }
    else if (c > a && c > b)
    {
        printf("C is Greater");
    }
    printf("\n");
}