#include <stdio.h>
#include "salary.h"

float calculateTotalSalary(const float salaries[], int count)
{
    float total = 0;
    for (int i = 0; i < count; i++) total += salaries[i];
    return total;
}

float findHighestSalary(const float salaries[], int count)
{
    float highest = salaries[0];
    for (int i = 1; i < count; i++)
        if (salaries[i] > highest) highest = salaries[i];
    return highest;
}

float findLowestSalary(const float salaries[], int count)
{
    float lowest = salaries[0];
    for (int i = 1; i < count; i++)
        if (salaries[i] < lowest) lowest = salaries[i];
    return lowest;
}

void runSalaryStatistics(void)
{
    float salary[EMPLOYEE_COUNT];
    for (int i = 0; i < EMPLOYEE_COUNT; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        if (scanf("%f", &salary[i]) != 1) return;
    }

    float total = calculateTotalSalary(salary, EMPLOYEE_COUNT);
    printf("\n--- SALARY RESULTS ---\n");
    printf("Total Salary: %.2f\n", total);
    printf("Average Salary: %.2f\n", total / EMPLOYEE_COUNT);
    printf("Highest Salary: %.2f\n", findHighestSalary(salary, EMPLOYEE_COUNT));
    printf("Lowest Salary: %.2f\n", findLowestSalary(salary, EMPLOYEE_COUNT));
}

int main(void)
{
    runSalaryStatistics();
    return 0;
}
