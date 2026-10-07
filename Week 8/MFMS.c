#include <stdio.h>
void displayWelcome() {
printf("Welcome to the Municipal Financial Management System\n");
}
float calculateVAT(float amount) {
return amount * 0.15;
}
float calculateSalary(float basic, float housing, float transport) {
return basic + housing + transport;
}
float calculateBudget(float revenue, float expenses) {
return revenue - expenses;
}
void displayMenu() {
printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
printf("1. Calculate VAT\n");
printf("2. Calculate Salary\n");
printf("3. Calculate Budget\n");
printf("4. Exit\n");
printf("Enter choice: ");
}
int searchEmployee(int id, int ids[], int size) {
for (int i = 0; i < size; i++) {
if (ids[i] == id) {
return i;
}
}
return -1;
}
int main() {
int choice;
int employeeIDs[] = {101, 102, 103, 104, 105};
displayWelcome();
do {
displayMenu();
scanf("%d", &choice);
if (choice == 1) {
float amount;
float vat;
printf("Enter amount: ");
scanf("%f", &amount);
vat = calculateVAT(amount);
printf("VAT: %.2f\n", vat);
}
else if (choice == 2) {
float basic; 
float housing; 
float transport;
float gross;
printf("Basic salary: ");
scanf("%f", &basic);
printf("Housing allowance: ");
scanf("%f", &housing);
printf("Transport allowance: ");
scanf("%f", &transport);
gross = calculateSalary(basic, housing, transport);
printf("Gross salary: %.2f\n", gross); }       
else if (choice == 3) {
float revenue;
float expenses;
float result;
printf("Enter revenue: ");
scanf("%f", &revenue);
printf("Enter expenses: "); 
scanf("%f", &expenses);
result = calculateBudget(revenue, expenses);
printf("Budget result: %.2f\n", result);
if (result > 0) {
printf("SURPLUS\n");
}
else if (result < 0) {
printf("DEFICIT\n");
} else {
printf("BALANCED\n");
}
}
else if (choice == 4) {
printf("Exiting program...\n");
}
else {
printf("Invalid choice.\n");
}
} while (choice != 4);
int id;
 int position;
 printf("\nEnter employee ID to search: ");
 scanf("%d", &id);
position = searchEmployee(id, employeeIDs, 5);
if (position != -1) {
printf("Employee found at position %d.\n", position);
}
else {
printf("Employee not found.\n");
}
return 0;
}