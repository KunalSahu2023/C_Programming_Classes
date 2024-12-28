
// Input the length and breadth of a rectangle and calculate its perimeter and area.
#include <stdio.h>
int main()
{
    int l, b, per, area;
    printf("Enter the length of the rectangle \n");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle \n");
    scanf("%d",&b);
    per = 2 * (l + b);
    area = l * b;
    printf("Perimeter of the rectangle is %d", per);
    printf("\nArea of the rectangle is %d", area);
    return 0;
}