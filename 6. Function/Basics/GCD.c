
// Write a function to find the greatest common divisor(GCD).

#include <stdio.h>
int GCD(int a, int b);

int main()
{
    printf("**** GCD (Greatest Common Divisor) Program ***** \n");
    int a, b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("The GCd of %d and %d is : %d  ", a, b, GCD(a, b));
}
int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}