
// Calculate the Area and Circumference of a Circle.
#include <stdio.h>
int main()
{
    float PI = 3.14, area,circum;
    int r;
    printf("Enter the value of r \n");
    scanf("%d", &r);
    area = PI * r * r;
    printf("Area of Circle is %.2f\n", area);
    circum = 2 * PI * r ;
    printf("Circumference of Circle is %.2f", circum);
    return 0;
}