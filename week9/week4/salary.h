#ifndef SALARY_WEEK4_H
#define SALARY_WEEK4_H

double calculateGrossSalary(double basicSalary, double transportAllowance,
                            double housingAllowance);
double calculateNetSalary(double grossSalary, double tax);
void runSalaryCalculator(void);

#endif
