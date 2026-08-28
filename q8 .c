#include <stdio.h>

int main() {
    float dollars, rupees;
    
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    
    rupees = dollars * 48;
    
    printf("%.2f USD = %.2f Rs.\n", dollars, rupees);
    
    return 0;
}
