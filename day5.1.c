#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time;
    double simpleInterest, compoundInterest, amount;

    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    simpleInterest = (principal * rate * time) / 100.0;

    amount = principal * pow(1.0 + rate / 100.0, time);
    compoundInterest = amount - principal;

    printf("Simple Interest = %.2lf\n", simpleInterest);
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}