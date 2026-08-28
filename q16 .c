#include <stdio.h>

int main() {
    float principal, rate, time, interest, total;
    
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    
    printf("Enter Rate of interest (in %): ");
    scanf("%f", &rate);
    
    printf("Enter Time (in years): ");
    scanf("%f", &time);
    
    interest = (principal * rate * time) / 100;
    total = principal + interest;
    
    printf("Simple Interest = %.2f\n", interest);
    printf("Total Amount = %.2f\n", total);
    
    return 0;
}
