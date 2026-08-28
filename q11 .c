#include <stdio.h>

int main() {
    float grams, kg;
    
    printf("Enter weight in grams: ");
    scanf("%f", &grams);
    
    kg = grams / 1000;
    
    printf("%.2f grams = %.2f kg\n", grams, kg);
    
    return 0;
}
