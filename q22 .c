#include <stdio.h>

int main() {
    float gross_sales, discount, net_sales;
    
    printf("Enter Gross Sales: ");
    scanf("%f", &gross_sales);
    
    printf("Enter Discount: ");
    scanf("%f", &discount);
    
    net_sales = gross_sales - discount;
    
    printf("Net Sales = %.2f\n", net_sales);
    
    return 0;
}