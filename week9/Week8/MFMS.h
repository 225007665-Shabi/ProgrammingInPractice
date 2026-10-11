#ifndef MFMS_WEEK8_H
#define MFMS_WEEK8_H

void displayWelcome(void);
float calculateVAT(float amount);
float calculateSalary(float basic, float housing, float transport);
float calculateBudget(float revenue, float expenses);
void displayMenu(void);
int searchEmployee(int id, const int ids[], int size);

#endif
