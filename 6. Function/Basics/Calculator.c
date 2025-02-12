
// Simple Calculator

#include <stdio.h>
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int mod(int, int);

int main()
{
    int a, b;
    printf("Simple Calcualtor\n");
    add(a, b);
    sub(a, b);
    mul(a, b);
    div(a, b);
    mod(a, b);

    return 0;
}

int add(int a, int b)
{
    printf("****** Addition Program ******\n");
    printf("Enter the Value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    int result = a + b;
    printf("Addition : %d", result);
}
int sub(int a, int b)
{
    printf("\n\n ****** Subtraction Program\n ******");
    printf("Enter the Value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    int result = a - b;
    printf("Subtraction : %d", result);
}
int mul(int a, int b)
{
    printf("\n\n ****** Multiplication Program\n ******");
    printf("Enter the Value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    int result = a * b;
    printf("Subtraction : %d", result);
}
int div(int a, int b)
{
    printf("\n\n ****** Division Program ******\n");
    printf("Enter the Value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    int result = a / b;
    printf("Division : %d", result);
}
int mod(int a, int b)
{
    printf("\n\n ****** Modulo Program ******\n");
    printf("Enter the Value of a\n");
    scanf("%d", &a);
    printf("Enter the value of b\n");
    scanf("%d", &b);
    int result = a % b;
    printf("Modulo : %d", result);
}