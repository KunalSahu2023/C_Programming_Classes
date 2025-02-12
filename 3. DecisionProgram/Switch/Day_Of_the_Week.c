
// Display the day of the week based on input (1-7).

#include <stdio.h>
int main()
{

    int num;
    printf("Enter a Number (between 1 - 7)\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Invalid number");
        break;
    }
    return 0;
}
