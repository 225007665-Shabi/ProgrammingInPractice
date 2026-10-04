#include <stdio.h>
int main() {
float budget[10];
float totalBudget = 0;
float average;
float temp;
for (int i = 0; i < 10; i++) {
printf("Enter department budgets:\n");
scanf("%f", &budget[i]);
}
for (int i = 0; i < 10; i++) {
printf("%.2f\n", budget[i]);
totalBudget = totalBudget + budget[i];
}
average = totalBudget / 10;
printf("\nTotal Department budget: %.2f\n", totalBudget);
printf("Average Department budget: %.2f\n", average);
for (int i = 0; i < 9; i++) {
for (int j = i + 1; j < 10; j++) {
if (budget[i] > budget[j]) {
temp = budget[i];
budget[i] = budget[j];
budget[j] = temp;
}
}
}
printf("\nBudgets from lowest to highest:\n");
for (int i = 0; i < 10; i++) {
printf("%.2f\n", budget[i]);
}
return 0;
}