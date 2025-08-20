#include <stdio.h>

int main()
 {
    float gross, allowance, deduction, net;
    printf("Enter Gross Salary: ");
    scanf("%f", &gross);
    allowance = 0.10 * gross;
    deduction = 0.03 * gross;
    net = gross + allowance - deduction;
    printf("Allowance = %.2f\n", allowance);
    printf("Deduction = %.2f\n", deduction);
    printf("Net Salary = %.2f\n", net);
    return 0;
}
