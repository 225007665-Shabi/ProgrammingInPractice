#ifndef EMPLOYEE_SALARY_STATISTICS_H
#define EMPLOYEE_SALARY_STATISTICS_H

#define EMPLOYEE_SALARY_COUNT 50

float calculateSalaryAverage(const float salaries[], int count);
float findHighestEmployeeSalary(const float salaries[], int count);
float findLowestEmployeeSalary(const float salaries[], int count);
int searchSalary(const float salaries[], int count, float target);
void runEmployeeSalaryStatistics(void);

#endif
