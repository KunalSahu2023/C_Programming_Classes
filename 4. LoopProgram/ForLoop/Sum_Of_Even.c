
// Sum of Even Numbers Up to N

#include <stdio.h>
int main()
{
    int num, sumEven = 0;

    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Enter %d Element:\n",num);
    for (int i = 1; i <= num; i++)
    {
        scanf("%d",&num);
        
        if (num % 2 == 0)
        {
            sumEven = sumEven + num;
        }
    }

    printf("Sum of the even Numbers is %d\n",sumEven);
    return 0;
}
