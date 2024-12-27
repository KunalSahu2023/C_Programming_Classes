// 8. Calculate the compound interest based on user input.
#include <stdio.h>
#include <math.h>
int main()
{
    int principal, rate, time;
    float compound_interest;
    printf("Enter the value of principal, rate and time \n");
    scanf("%d %d %d", &principal, &rate, &time);
    compound_interest = principal * pow((1 + rate / 100), time) - principal;
    printf("Compound interest is %.2f", compound_interest);
    return 0;
}