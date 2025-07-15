#include <stdio.h>

int main() {
    float basic, hra, da, pf, gross, net;
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;
    da = 0.30 * basic;
    pf = 0.05 * basic;

    gross = basic + hra + da;
    net = gross - pf;

    printf("Gross Salary = %.2f\n", gross);
    printf("Net Salary = %.2f\n", net);
    return 0;
}
