// Calculate the average of n numbers entered by the user.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    float avg;
    printf("Enter the Number of Elements \n");
    scanf("%d", &n);
    int number[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value index %d \n", i);
        scanf("%d", &number[i]);
        sum = sum + number[i];
    }
    printf("Sum of the Numbers is %d", sum);
    avg = sum / n;
    printf("\nAverage of the numbers is %.2f", avg);
    return 0;
}
