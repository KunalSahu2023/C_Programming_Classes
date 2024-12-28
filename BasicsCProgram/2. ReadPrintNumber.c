
#include <stdio.h>
int main()
{
    int a;
    float b;
    // Read and print an integer.
    printf("Enter an Integer Number \n");
    scanf("%d", &a);
    printf("Integer Number is %d \n", a);

    // Read and print a float.
    printf("Enter a Float Number \n");
    scanf("%f", &b);
    printf("Float Number is %.2f", b);
    return 0;
}
