#include <stdio.h>
#include "salary.h"

double calculateGrossSalary(double basicSalary, double transportAllowance,
                            double housingAllowance)
{
    return basicSalary + transportAllowance + housingAllowance;
}

double calculateNetSalary(double grossSalary, double tax)
{
    return grossSalary - tax;
}

void runSalaryCalculator(void)
{
    double basicSalary, tax, transportAllowance, housingAllowance;
    double grossSalary, netSalary;

    printf("Enter Basic Salary: ");
    if (scanf("%lf", &basicSalary) != 1) return;
    printf("Enter Transport Allowance: ");
    if (scanf("%lf", &transportAllowance) != 1) return;
    printf("Enter Housing Allowance: ");
    if (scanf("%lf", &housingAllowance) != 1) return;
    printf("Enter Tax: ");
    if (scanf("%lf", &tax) != 1) return;

    grossSalary = calculateGrossSalary(basicSalary, transportAllowance,
                                       housingAllowance);
    netSalary = calculateNetSalary(grossSalary, tax);
    printf("\nGross Salary: $%.2f\n", grossSalary);
    printf("Net Salary: $%.2f\n", netSalary);
}

int main(void)
{
    runSalaryCalculator();
    return 0;
}
