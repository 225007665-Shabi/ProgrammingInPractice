#include <stdio.h>
#include <string.h>
int main() {
char regs[20][20];
char search[20];
int found = 0;
printf("Enter 20 registration numbers:\n");
for (int i = 0; i < 20; i++) {
        printf("Registration %d: ", i + 1);
        scanf("%19s", regs[i]);
    }
for (int i = 0; i < 20; i++) {
printf("%s\n", regs[i]);
}
printf("\nEnter THE REG NUMBER U SEEK: ");
    scanf("%19s", search);
for (int i = 0; i < 20; i++) {
if (strcmp(regs[i], search) == 0) {
printf("Registration number %s found at position : %d.\n",search, i + 1);
found = 1;
break;
}
}
if (!found)
printf("Reg number not found in system.\n");
return 0;
}