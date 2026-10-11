#include <stdio.h>
#include <string.h>
#include "VRN.h"

int searchRegistration(const char registrations[][REGISTRATION_LENGTH],
                       int count, const char target[])
{
    for (int i = 0; i < count; i++)
        if (strcmp(registrations[i], target) == 0) return i;
    return -1;
}

void runRegistrationSearch(void)
{
    char regs[REGISTRATION_COUNT][REGISTRATION_LENGTH];
    char search[REGISTRATION_LENGTH];

    printf("Enter %d registration numbers:\n", REGISTRATION_COUNT);
    for (int i = 0; i < REGISTRATION_COUNT; i++) {
        printf("Registration %d: ", i + 1);
        if (scanf("%19s", regs[i]) != 1) return;
    }
    printf("\nRegistration numbers entered:\n");
    for (int i = 0; i < REGISTRATION_COUNT; i++) printf("%s\n", regs[i]);

    printf("\nEnter the registration number to search for: ");
    if (scanf("%19s", search) != 1) return;

    int position = searchRegistration(regs, REGISTRATION_COUNT, search);
    if (position >= 0)
        printf("Registration number %s found at position %d.\n", search, position + 1);
    else
        printf("Registration number not found in system.\n");
}

int main(void)
{
    runRegistrationSearch();
    return 0;
}
