

// Write a function to calculate the sum and the average of the elements in an array.

#include <stdio.h>
int sumAverage(int, int, int, int, int);

int main()
{
    int a, b, c, d, e;
    printf("Sum and Average Program\n");
    sumAverage(a, b, c, d, e);
}

int sumAverage(int a, int b, int c, int d, int e)
{
    printf("Enter the 5 Number\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int sum = a = b + c + d + e;
    int average = sum / 5;
    printf("Sum is %d \nAverage is %d", sum, average);
}