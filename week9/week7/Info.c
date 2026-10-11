#include <stdio.h>
#include <string.h>
#include "Info.h"

void removeNewline(char text[])
{
    text[strcspn(text, "\n")] = '\0';
}

void readSupplier(Supplier *supplier)
{
    printf("Supplier Name: ");
    if (!fgets(supplier->name, sizeof(supplier->name), stdin)) return;
    removeNewline(supplier->name);

    printf("Email: ");
    if (!fgets(supplier->email, sizeof(supplier->email), stdin)) return;
    removeNewline(supplier->email);

    printf("Enter Phone: ");
    if (!fgets(supplier->phone, sizeof(supplier->phone), stdin)) return;
    removeNewline(supplier->phone);

    printf("Town: ");
    if (!fgets(supplier->town, sizeof(supplier->town), stdin)) return;
    removeNewline(supplier->town);
}

void displaySupplier(const Supplier *supplier)
{
    printf("\n--- Supplier Information ---\n");
    printf("Supplier Name: %s\n", supplier->name);
    printf("Email: %s\n", supplier->email);
    printf("Phone: %s\n", supplier->phone);
    printf("Town: %s\n", supplier->town);
    printf("Length of Supplier Name: %zu\n", strlen(supplier->name));
}

int supplierNameMatches(const Supplier *supplier, const char search[])
{
    return strcmp(search, supplier->name) == 0;
}

void runSupplierInformation(void)
{
    Supplier supplier = {{0}, {0}, {0}, {0}};
    char supplierCopy[SUPPLIER_TEXT_LENGTH];
    char search[SUPPLIER_TEXT_LENGTH];

    readSupplier(&supplier);
    displaySupplier(&supplier);
    strcpy(supplierCopy, supplier.name);
    printf("Copied Supplier Name: %s\n", supplierCopy);

    printf("\nSearch for supplier name: ");
    if (!fgets(search, sizeof(search), stdin)) return;
    removeNewline(search);

    if (supplierNameMatches(&supplier, search)) {
        printf("Supplier found.\n");
        displaySupplier(&supplier);
    } else {
        printf("Supplier not found.\n");
    }
}

int main(void)
{
    runSupplierInformation();
    return 0;
}
