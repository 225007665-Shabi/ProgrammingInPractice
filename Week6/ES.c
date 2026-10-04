#include <stdio.h>
int main(){
float salary[50];
float average;
float sum = 0;
float salarySearch;
int found = 0;

for (int i = 0;i < 50;i++){
printf("Enter Salary:");
scanf("%f", &salary[i]);
}
for (int i = 0;i < 50;i++){
printf("Salaries : %.2f\n", salary[i]);
}

for (int i = 0;i < 50;i++){
sum=sum+ salary[i];
}

average=sum/50;

float highest=salary[0];
float lowest=salary[0];

for (int i = 0;i < 50;i++){
if (salary[i] > highest){
highest = salary[i];
}
if(salary[i] < lowest){
lowest = salary[i];
}
}

printf("Average Salary: %.2f\n", average);
printf("Highest Salary: %.2f\n", highest); 
printf("Lowest Salary: %.2f\n", lowest);

printf("\nEnter salary to search for: ");
scanf("%f", &salarySearch);

for (int i = 0; i < 50; i++) {
if (salary[i] == salarySearch) {
 printf("Salary located : %.2f", salarySearch);
found = 1;
break;
}
}
if (found == 0) {
 printf("Salary not found");
}
return 0;
}
