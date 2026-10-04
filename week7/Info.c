#include <stdio.h>
#include <string.h>
int main() {
char supplierName[50];
char phoneNo[20];
char town[50];
char email[50];
char supplierCopy[50];
char search[50];
printf("Supplier Name: ");
fgets(supplierName, sizeof(supplierName), stdin);
supplierName[strcspn(supplierName, "\n")] = '\0';
printf("Email: ");
fgets(email, sizeof(email), stdin);
email[strcspn(email, "\n")] = '\0';
printf("Enter Phone: ");
fgets(phoneNo, sizeof(phoneNo), stdin);
phoneNo[strcspn(phoneNo, "\n")] = '\0';
printf("Town: ");
fgets(town, sizeof(town), stdin);
town[strcspn(town, "\n")] = '\0';
printf("\n--- Supplier Information ---\n");
printf("Supplier Name: %s\n", supplierName);
printf("Email: %s\n", email);
printf("Phone: %s\n", phoneNo);
printf("Town: %s\n", town);
printf("Length of Supplier Name: %lu\n", strlen(supplierName));
strcpy(supplierCopy, supplierName);
printf("Copied Supplier Name: %s\n", supplierCopy);
printf("\nSearch for ...: ");
fgets(search, sizeof(search), stdin);
search[strcspn(search, "\n")] = '\0';
if (strcmp(search, supplierName) == 0) {
printf("Supplier found: %s\n", supplierName);
printf("Email: %s\n", email);
printf("Phone: %s\n", phoneNo);
printf("Town: %s\n", town);
} else {
printf("Supplier not found.\n");
}
return 0;
}