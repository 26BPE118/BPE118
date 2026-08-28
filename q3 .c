#include <stdio.h>

int main() {
    float a, b, prod;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    prod = a * b;
    
    printf("Product = %.2f\n", prod);
    
    return 0;
}
