#include <stdio.h>
int main(){
 char supplierName[50];
  float budget;
 float price;
 int registered;
 int documentsOk;
 printf("Enter supplier : ");
 scanf("%49s", supplierName);
  printf("Enter available budget: ");
 scanf("%f", &budget);
 printf("Enter tender price: ");
 scanf("%f", &price);
 printf("Is the supplier registered? (1=Yes, 0=No): ");
 scanf("%d", &registered);
 printf("Are all documents complete? (1=Yes, 0=No): ");
 scanf("%d", &documentsOk);
 if (registered == 0 || documentsOk == 0)
 {
 printf("\nSupplier: %s\n", supplierName);
   printf("Status: Disqualified\n");
 }
 else if (price > budget)
 {
 printf("\nSupplier: %s\n", supplierName);
 printf("Status: Disqualified\n");
 }
 else
 {
 printf("\nSupplier: %s\n", supplierName);
 printf("Status: Qualified\n");
 }
 return 0;
}
