
// Multiplication Table

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the Number\n");
    scanf("%d", &num);
    printf("Multiplication table of %d is:\n", num);
    for (int i = 1; i <= 10; i++)
    {
        int res = num * i;
        printf("%d x %d = %d\n",num,i,res);
    }
    return 0;
}