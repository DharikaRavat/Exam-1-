#include <stdio.h>

int main() {
	
    float BaseSalary, HRA, DA, TA, grosssalary;

    printf("Enter the Base Salary    : ");
    scanf("%f", &BaseSalary);
    
    printf("Enter the HRA percentage : ");
    scanf("%f", &HRA);
    
    printf("Enter the DA percentage  : ");
    scanf("%f", &DA);
    
    printf("Enter the TA percentage  : ");
    scanf("%f", &TA);

    grosssalary = BaseSalary + (BaseSalary*HRA/100) + (BaseSalary*DA/100) + (BaseSalary*TA/100);

    printf("Gross Salary: %.2f\n", grosssalary);

    return 0;
}
