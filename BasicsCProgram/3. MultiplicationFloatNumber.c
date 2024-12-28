
// Multiply Two Floating - Point Numbers.
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter two Floating Point Number \n");
    scanf("%f %f", &a, &b);
    c = a * b;
    printf("Multiplication of two floating-Point Number %.2f and %.2f is %.2f", a, b, c);
    return 0;
}