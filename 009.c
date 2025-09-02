// Write a program to calculate simple and compound interest without using pow()
#include <stdio.h>
int main() {
    double principal, rate, time;
    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    double simpleInterest = (principal * rate * time) / 100;

    double compoundInterest = principal;
    for(int i = 0; i < (int)time; i++) {
        compoundInterest += compoundInterest * rate / 100;
    }
    compoundInterest -= principal;

    printf("Simple Interest=%.2lf, Compound Interest=%.2lf\n", simpleInterest, compoundInterest);
    return 0;
}

