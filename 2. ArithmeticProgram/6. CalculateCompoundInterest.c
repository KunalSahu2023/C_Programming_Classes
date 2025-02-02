
// Calculate the compound interest based on user input

#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, compound_interest, amount;
    printf("Enter the value of principal (in Rs.): \n");
    scanf("%f", &principal);
    printf("Enter the value of rate (in %): \n");
    scanf("%f", &rate);
    printf("Enter the value of time (in years): \n");
    scanf("%f", &time);
    amount = principal * pow((1 + rate / 100), time);
    compound_interest = amount - principal;
    printf("Compound interest is %.2f\n", compound_interest);

    return 0;
}
