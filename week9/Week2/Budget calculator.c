#include <stdio.h>
#include "Budget calculator.h"

double calculateBalance(double revenue, double expenses)
{
    return revenue - expenses;
}

void displayBudgetResults(double revenues, double expenses, double balance)
{
    printf("\nRevenue: %.2f\n", revenues);
    printf("Expenses: %.2f\n", expenses);
    printf("Balance: %.2f\n", balance);

    if (balance > 0) {
        printf("Surplus: %.2f\n", balance);
    } else if (balance < 0) {
        printf("Deficit: %.2f\n", -balance);
    } else {
        printf("The budget is balanced.\n");
    }
}

void runBudgetCalculator(void)
{
    double revenues = 0, expenses = 0, balance;
    printf("MUNICIPAL BUDGET CALCULATOR\n----\n");
    printf("Enter total revenue: ");
    if (scanf("%lf", &revenues) != 1) return;
    printf("Enter total expenses: ");
    if (scanf("%lf", &expenses) != 1) return;
    balance = calculateBalance(revenues, expenses);
    displayBudgetResults(revenues, expenses, balance);
}

int main(void)
{
    runBudgetCalculator();
    return 0;
}
