
// Calculate the compound interest based on user input.
#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time, compound_interest, amount;
    printf("Enter the value of principal (in Rs.), rate (in %) and time (in years): \n");
    scanf("%f %f %f", &principal, &rate, &time);

    amount = principal * pow((1 + rate / 100), time);

    compound_interest = amount - principal;

    printf("Total Amount is %.2f\n", amount);
    printf("Compound interest is %.2f\n", compound_interest);

    return 0;
}
