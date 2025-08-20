#include <stdio.h>

int main() 
{
    float grossSales, discount, netSales;
    printf("Enter Gross Sales: ");
    scanf("%f", &grossSales);
    discount = 0.10 * grossSales;
    netSales = grossSales - discount;
    printf("Discount = %.2f\n", discount);
    printf("Net Sales = %.2f\n", netSales);
    return 0;
}
