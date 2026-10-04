#include <stdio.h>
int main() {
 double revenues =0;
 double expenses =0;
 double balance= 0;
 printf("MUNICIPAL BUDGET CALCULATOR\n");
 printf("----\n");
 printf("Enter total revenue: ");
 scanf("%lf", &revenues);
 printf("Enter total expenses: ");
scanf("%lf", &expenses);
 balance = revenues - expenses;
 printf("\nRevenue: %.2f\n", revenues);
 printf("Expenses: %.2f\n", expenses);
printf("Balance : %.2f\n",balance);
 if (balance > 0) {
 printf("Surplus: %.2f\n", balance);
 }
 else if (balance < 0) {
 printf("Deficit: %.2f\n", balance);
 }
 else {
 printf("The budget is balanced.\n");
 }
 return 0;
}