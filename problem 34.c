#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest, amount;

    // Input from user
    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);

    printf("Enter Rate of Interest (in %%): ");
    scanf("%lf", &rate);

    printf("Enter Time (in years): ");
    scanf("%lf", &time);

    // Compound Interest Formula
    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    // Output with 2 decimal precision
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}
