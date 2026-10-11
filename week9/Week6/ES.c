#include <stdio.h>
#include "ES.h"

float calculateSalaryAverage(const float salaries[], int count)
{
    float sum = 0;
    for (int i = 0; i < count; i++) sum += salaries[i];
    return sum / count;
}

float findHighestEmployeeSalary(const float salaries[], int count)
{
    float highest = salaries[0];
    for (int i = 1; i < count; i++)
        if (salaries[i] > highest) highest = salaries[i];
    return highest;
}

float findLowestEmployeeSalary(const float salaries[], int count)
{
    float lowest = salaries[0];
    for (int i = 1; i < count; i++)
        if (salaries[i] < lowest) lowest = salaries[i];
    return lowest;
}

int searchSalary(const float salaries[], int count, float target)
{
    for (int i = 0; i < count; i++)
        if (salaries[i] == target) return i;
    return -1;
}

void runEmployeeSalaryStatistics(void)
{
    float salary[EMPLOYEE_SALARY_COUNT];
    for (int i = 0; i < EMPLOYEE_SALARY_COUNT; i++) {
        printf("Enter salary for employee %d: ", i + 1);
        if (scanf("%f", &salary[i]) != 1) return;
    }
    for (int i = 0; i < EMPLOYEE_SALARY_COUNT; i++)
        printf("Salary %d: %.2f\n", i + 1, salary[i]);

    printf("Average Salary: %.2f\n",
           calculateSalaryAverage(salary, EMPLOYEE_SALARY_COUNT));
    printf("Highest Salary: %.2f\n",
           findHighestEmployeeSalary(salary, EMPLOYEE_SALARY_COUNT));
    printf("Lowest Salary: %.2f\n",
           findLowestEmployeeSalary(salary, EMPLOYEE_SALARY_COUNT));

    float target;
    printf("\nEnter salary to search for: ");
    if (scanf("%f", &target) != 1) return;
    int position = searchSalary(salary, EMPLOYEE_SALARY_COUNT, target);
    if (position >= 0) printf("Salary located at employee number %d.\n", position + 1);
    else printf("Salary not found.\n");
}

int main(void)
{
    runEmployeeSalaryStatistics();
    return 0;
}
