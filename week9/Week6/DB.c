#include <stdio.h>
#include "DB.h"

float calculateTotalBudget(const float budgets[], int count)
{
    float total = 0;
    for (int i = 0; i < count; i++) total += budgets[i];
    return total;
}

void sortBudgetsAscending(float budgets[], int count)
{
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (budgets[i] > budgets[j]) {
                float temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }
}

void runDepartmentBudgets(void)
{
    float budget[DEPARTMENT_COUNT];
    for (int i = 0; i < DEPARTMENT_COUNT; i++) {
        printf("Enter budget for department %d: ", i + 1);
        if (scanf("%f", &budget[i]) != 1) return;
    }
    printf("\nDepartment budgets entered:\n");
    for (int i = 0; i < DEPARTMENT_COUNT; i++) printf("%.2f\n", budget[i]);

    float total = calculateTotalBudget(budget, DEPARTMENT_COUNT);
    printf("\nTotal Department Budget: %.2f\n", total);
    printf("Average Department Budget: %.2f\n", total / DEPARTMENT_COUNT);

    sortBudgetsAscending(budget, DEPARTMENT_COUNT);
    printf("\nBudgets from lowest to highest:\n");
    for (int i = 0; i < DEPARTMENT_COUNT; i++) printf("%.2f\n", budget[i]);
}

int main(void)
{
    runDepartmentBudgets();
    return 0;
}
