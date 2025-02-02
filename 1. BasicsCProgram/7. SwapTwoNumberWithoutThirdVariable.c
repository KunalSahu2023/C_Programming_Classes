
// Without Third variable 

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of and b \n");
    scanf("%d %d", &a, &b);
    printf("Value of a and b Before Swapping is %d %d", a, b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("\nValue of a and b After Swapping is %d %d", a, b);
    return 0;
}
