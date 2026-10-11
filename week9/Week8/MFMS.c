#include <stdio.h>
#include "MFMS.h"

void displayWelcome(void)
{
    printf("Welcome to the Municipal Financial Management System\n");
}

float calculateVAT(float amount)
{
    return amount * 0.15f;
}

float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}

void displayMenu(void)
{
    printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
}

int searchEmployee(int id, const int ids[], int size)
{
    for (int i = 0; i < size; i++)
        if (ids[i] == id) return i;
    return -1;
}

int main(void)
{
    int choice;
    const int employeeIDs[] = {101, 102, 103, 104, 105};
    const int employeeCount = (int)(sizeof(employeeIDs) / sizeof(employeeIDs[0]));

    displayWelcome();
    do {
        displayMenu();
        if (scanf("%d", &choice) != 1) return 1;

        if (choice == 1) {
            float amount;
            printf("Enter amount: ");
            if (scanf("%f", &amount) != 1) return 1;
            printf("VAT: %.2f\n", calculateVAT(amount));
        } else if (choice == 2) {
            float basic, housing, transport;
            printf("Basic salary: ");
            if (scanf("%f", &basic) != 1) return 1;
            printf("Housing allowance: ");
            if (scanf("%f", &housing) != 1) return 1;
            printf("Transport allowance: ");
            if (scanf("%f", &transport) != 1) return 1;
            printf("Gross salary: %.2f\n", calculateSalary(basic, housing, transport));
        } else if (choice == 3) {
            float revenue, expenses, result;
            printf("Enter revenue: ");
            if (scanf("%f", &revenue) != 1) return 1;
            printf("Enter expenses: ");
            if (scanf("%f", &expenses) != 1) return 1;
            result = calculateBudget(revenue, expenses);
            printf("Budget result: %.2f\n", result);
            if (result > 0) printf("SURPLUS\n");
            else if (result < 0) printf("DEFICIT\n");
            else printf("BALANCED\n");
        } else if (choice == 4) {
            printf("Exiting program...\n");
        } else {
            printf("Invalid choice.\n");
        }
    } while (choice != 4);

    int id;
    printf("\nEnter employee ID to search: ");
    if (scanf("%d", &id) != 1) return 1;
    int position = searchEmployee(id, employeeIDs, employeeCount);
    if (position != -1) printf("Employee found at position %d.\n", position + 1);
    else printf("Employee not found.\n");
    return 0;
}
