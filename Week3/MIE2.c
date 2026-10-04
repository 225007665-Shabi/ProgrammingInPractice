#include<stdio.h>
int main(){
double basicSalary;
double tax;
double transportAllowance;
double housingAllowance;
double grossSalary;
double netSalary;
 printf("Enter Basic Salary :");
 scanf("%lf", &basicSalary); 
 printf("Enter Transport Allowance: ");
 scanf("%lf", &transportAllowance);
 printf("Enter Housing Allowance:  ");
 scanf("%lf", &housingAllowance);
 printf("Enter Tax: ");
 scanf("%lf", &tax);
 grossSalary = basicSalary + housingAllowance + transportAllowance;
 netSalary = grossSalary - tax;
 printf("\nGross Salary: $%.2f\n", grossSalary);
 printf("Net Salary: $%.2f\n", netSalary);
 return 0;
}