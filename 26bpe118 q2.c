#include <stdio.h>

int main() {
    float a, b, diff;
    
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    
    diff = a - b;
    
    printf("Difference = %.2f\n", diff);
    
    return 0;
}
