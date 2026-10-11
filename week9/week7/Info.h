#ifndef SUPPLIER_INFO_H
#define SUPPLIER_INFO_H

#define SUPPLIER_TEXT_LENGTH 50
#define SUPPLIER_PHONE_LENGTH 20

typedef struct {
    char name[SUPPLIER_TEXT_LENGTH];
    char email[SUPPLIER_TEXT_LENGTH];
    char phone[SUPPLIER_PHONE_LENGTH];
    char town[SUPPLIER_TEXT_LENGTH];
} Supplier;

void removeNewline(char text[]);
void readSupplier(Supplier *supplier);
void displaySupplier(const Supplier *supplier);
int supplierNameMatches(const Supplier *supplier, const char search[]);
void runSupplierInformation(void);

#endif
