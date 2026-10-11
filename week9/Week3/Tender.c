#include <stdio.h>
#include "Tender.h"

int isTenderQualified(float budget, float price, int registered, int documentsOk)
{
    return registered != 0 && documentsOk != 0 && price <= budget;
}

void runTenderAssessment(void)
{
    char supplierName[50];
    float budget, price;
    int registered, documentsOk;

    printf("Enter supplier: ");
    scanf("%49s", supplierName);
    printf("Enter available budget: ");
    if (scanf("%f", &budget) != 1) return;
    printf("Enter tender price: ");
    if (scanf("%f", &price) != 1) return;
    printf("Is the supplier registered? (1=Yes, 0=No): ");
    if (scanf("%d", &registered) != 1) return;
    printf("Are all documents complete? (1=Yes, 0=No): ");
    if (scanf("%d", &documentsOk) != 1) return;

    printf("\nSupplier: %s\n", supplierName);
    printf("Status: %s\n",
           isTenderQualified(budget, price, registered, documentsOk)
               ? "Qualified" : "Disqualified");
}

int main(void)
{
    runTenderAssessment();
    return 0;
}
