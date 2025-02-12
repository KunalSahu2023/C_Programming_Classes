
// Simple Calculator (add, subtract, multiply, divide).

#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    printf("Enter The Number 1\n");
    scanf("%d", &num1);
    printf("Choose Operator sign (+, -, *, /, %)\n");
    scanf("%c", &operator);
    printf("Enter The Number 2\n");
    scanf("%d", &num2);
    switch (operator)
    {
    case '+':
        printf("Addition is %d + %d", num1, num2);
        break;
    case '-':
        printf("Subtraction is %d - %d", num1, num2);
        break;
    case '*':
        printf("Multiplication is %d * %d", num1, num2);
        break;
    case '/':
        printf("Division is %d / %d", num1, num2);
        break;
    case '%':
        printf("Remainder is %d & %d", num1, num2);
        break;
    default:
        printf("Invalid Sign");
        break;
    }

    return 0;
}
