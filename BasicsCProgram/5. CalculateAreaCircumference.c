
// Calculate the Area of a Circle.
#include <stdio.h>
int main()
{
    float PI = 3.14, area;
    int r;
    printf("Enter the value of r \n");
    scanf("%d", &r);
    area = PI * r * r;
    printf("Area of Circle is %.2f", area);
    return 0;
}