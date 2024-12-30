
// Using Third Variable :
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of and b \n");
    scanf("%d %d", &a, &b);
    printf("Value of a and b Before Swapping is %d %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nValue of a and b After Swapping is %d %d", a, b);
    return 0;
}

