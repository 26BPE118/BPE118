#include <stdio.h>

int main() {
    float basic, hra, da, pf, net_salary;
    
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);
    
    printf("Enter HRA: ");
    scanf("%f", &hra);
    
    printf("Enter DA: ");
    scanf("%f", &da);
    
    printf("Enter PF: ");
    scanf("%f", &pf);
    
    net_salary = basic + hra + da - pf;
    
    printf("Net Salary = %.2f\n", net_salary);
    
    return 0;
}