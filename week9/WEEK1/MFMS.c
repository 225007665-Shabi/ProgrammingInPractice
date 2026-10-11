#include <stdio.h>
#include "MFMS.h"

void runMunicipalityInfo(void)
{
    char municipalityName[40];
    char mayorName[40];
    int population;

    printf("Municipal Financial Management System\n");
    printf("Enter Municipality Name: ");
    scanf("%39s", municipalityName);
    printf("Enter Mayor Name: ");
    scanf("%39s", mayorName);
    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n---------------------------------\n");
    printf("Municipality : %s\n", municipalityName);
    printf("Mayor : %s\n", mayorName);
    printf("Population : %d\n", population);
}

int main(void)
{
    runMunicipalityInfo();
    return 0;
}
