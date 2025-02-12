
// Sum of Odd Numbers Up to N

#include <stdio.h>
int main()
{
    int num, sumOdd = 0;

    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Enter %d Element:\n", num);
    for (int i = 1; i <= num; i++)
    {
        scanf("%d", &num);

        if (num % 3 == 0)
        {
            sumOdd = sumOdd + num;
        }
    }

    printf("Sum of the Odd Numbers is %d\n", sumOdd);
    return 0;
}